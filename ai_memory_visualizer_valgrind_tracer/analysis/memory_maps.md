# Memory Maps Analysis

## Programs analyzed
- stack_example.c
- aliasing_example.c

## Stack vs Heap
The stack is automatic memory. When a function is called, a stack frame is created to hold its local variables and parameters.
 That frame is automatically destroyed when the function returns.

The heap is dynamic memory, managed manually with malloc and free. 
It is used when the size of data is unknown at compile time, or when data needs to outlive the function that created it.
The programmer is responsible for freeing heap memory, if not **freed**, it becomes a memory leak.

## Variable lifetimes
A stack variable's lifetime is tied to its stack frame, it begins when the function is called and ends when the function returns.

A heap variable's lifetime is not tied to any function. It begins at the malloc call and ends when the developer explicitly calls free. If free is never called, the memory remains allocated until the program exits, this is a memory leak.

We can observe this in stack_example.c output. The frame at depth=3 is created and destroyed while depth=0 frame is still active:
```
[enter] depth=3  &local_int=0x7ffe0880bd04  ← frame created
[exit]  depth=3  &local_int=0x7ffe0880bd04  ← frame destroyed
[exit]  depth=0  &local_int=0x7ffe0880bd94  ← still active
```
## Pointer aliasing

Pointer aliasing occurs when two or more pointers hold the same memory address. It can be useful but requires strict tracking. The developer must always know which pointer is responsible for calling free, and which pointers are aliases, because freeing the memory through one pointer makes all other aliases dangling pointers.

We can observe this in aliasing_example.c:
```c
    int *a = NULL;
    int *b = NULL;
    int n = 5;

    printf("aliasing_example: aliasing and use-after-free (Valgrind should report it)\n");

    a = make_numbers(n);
    if (!a)
        return 1;

    b = a;
```
`a` receives the address of the heap-allocated array returned by make_numbers. The `b = a` creates an alias, both pointers now hold the same address. When `free(a)` is called, the heap memory is released, but `b` still holds the same address and becomes a dangling pointer.

## AI correction

To understand the difference between stack and heap with their specific behavior I asked to 
AI (Claude) to generate a mental map to visualize the stack behavior. It gave me this one:

```
STACK
+------------------+
| walk_stack d=1   |
+------------------+
| walk_stack d=0   |
+------------------+
| main             |
+------------------+
```

There is a mistake because in the output of stack_example.c we had this kind of result:
```
walk_stack d=0 : 0x7ffe0880bde4
walk_stack d=1 : 0x7ffe0880bdb4
walk_stack d=2 : 0x7ffe0880bd84
walk_stack d=3 : 0x7ffe0880bd54
```
I made some research and found this article that explain that the stack grows downwards
- https://ngacho.com/blog/stack-growth/
- https://aticleworld.com/c-program-to-find-direction-of-growth-of-stack/#google_vignette

And a specific article that explain why it's made like that. It's in order to allocated a maximum space.
- https://bob.cs.sonoma.edu/testing/sec-stack.html

So the good behavior of the stack is:
```
CORRECTED:
high-end addresses
+------------------+
| main             |
+------------------+
| walk_stack d=0   | 0x7ffe0880bde4
+------------------+
| walk_stack d=1   | 0x7ffe0880bdb4
+------------------+
| walk_stack d=2   | 0x7ffe0880bd84
+------------------+
| walk_stack d=3   | 0x7ffe0880bd54
+------------------+
low addresses
```