# Crash Report

## Program analyzed
- crash_example.c

## Description
When the program is launched, it prints the startup message and immediately terminates with a segmentation fault before completing its execution.
```bash
crash_example: deterministic NULL dereference (segmentation fault)
  requesting n=0
Segmentation fault (core dumped)
```
## Root Cause Analysis
The program starts with `n` initialized to 0. `nums` is assigned the return value of `allocate_numbers(n)`. Inside that function, the condition `n <= 0` is true, so it returns `NULL` immediately without calling `malloc`. Back in `main`, no check is performed on `nums`.\
The program then attempts to write `42` to `nums[0]`, which dereferences a NULL pointer and causes a segmentation fault. 
## Why the Memory Access is Invalid
When nums[0] is accessed, the CPU attempts to translate the virtual address 0x0 through the page table. This address is not mapped to any physical memory — the OS deliberately leaves it unmapped to catch NULL dereferences. The CPU generates a page fault, the OS receives it, identifies 0x0 as an invalid access, and sends SIGSEGV to the process.
## AI Critical Review
When I use AI to understand the problem it generates: 
```
Accessing NULL always causes an immediate segfault on all systems.
```
It's true on modern OS with memory protection (Linux, Windows, macOS) but not on all.
On some embedded system without MMU (Memory Management Unit), the 0x0 address could be a valid address. Segfault is not a C language property but OS property.
Here we can see that Valgrind confirm this.
```bash
Address 0x0 is not stack'd, malloc'd or (recently) free'd
```
## Suggest Fix
For the suggested fix we can add a checker into main:
```C
int main(void)
{
    int *nums = NULL;
    int n = 0;

    printf("crash_example: deterministic NULL dereference (segmentation fault)\n");
    printf("  requesting n=%d\n", n);

    nums = allocate_numbers(n);

	if (nums == NULL)
		return (1);

    nums[0] = 42;

    printf("  nums[0]=%d\n", nums[0]);

    free(nums);
    return 0;
}
```