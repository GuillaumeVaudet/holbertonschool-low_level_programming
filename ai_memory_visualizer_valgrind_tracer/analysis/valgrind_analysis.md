# Valgrind Analysis

## Programs analyzed
- heap_example.c
- aliasing_example.c

## heap_example.c
### Valgrind Errors
- **6 bytes definitely lost** in `person_new` (heap_example.c:21), called from `main` (heap_example.c:51)
### Memory Misuse Analysis
This is a **memory leak due to lost ownership**.

- **The object**: The `name` string inside the `Person` struct, allocated on the heap in `person_new`.
- **The cause**: `person_free_partial` only calls `free(p)` on the struct itself. The `p->name` pointer is never freed.
- **The result**: When the struct is freed, the pointer to `name` is destroyed with it. The 6 bytes allocated for "Alice" remain on the heap with no pointer to reach them — they are definitely lost.
### AI Critical Review
AI response with issue: `free(alice) frees the entire Person struct including its name field.`
This is an error because we allocate memory in the heap for the struct and for the name, both allocations are independent, freeing the struct does not free its internal pointers. In C, free is not recursive. Each malloc requires its own free."

## aliasing_example.c
### Valgrind Errors
We have 3 errors.
**Invalid read of size 4**
**Invalid write of size 4**
**Invalid read of size 4**
### Memory Misuse Analysis
This is a **aliasing and use-after-free**.
- **The object**: The `b` pointer.
- **The cause**: `b` points to the same address as `a` and used after `free(a)`.
- **The result**: When the program try to write or read at the address pointed by `b` there is an issue. `b` become a dangling pointer. The memory at that address has been released back to the system. Accessing it through `b` is undefined behavior, the data may appear intact, be corrupted, or cause a crash depending on whether the memory has been reused.

### AI Critical Review
AI response with issue: `This program will always crash with a segmentation fault when accessing `b[2]` after `free(a)`.`\
This is an error because a `use-after-free` has an undefined behavior. It depend if the memory area has been re-used by the system.