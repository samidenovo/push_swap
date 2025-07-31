# push_swap

**push_swap** is a project from [42 Berlin](https://42berlin.de/) focused on sorting a stack of integers with the least possible number of operations using a second auxiliary stack and a limited set of instructions.

This implementation uses:
- A **circular doubly linked list** for both stacks  
- An optimized version of **Turkish sort** (a variant of radix sort)  
- Fully **Norm-compliant** C code, as required by the 42 standard

## Project Goal

The objective is to sort the initial stack (stack A) in ascending order using only a defined set of operations and an empty stack B. Efficiency is measured by the number of operations performed.

### Allowed operations:
- `sa`, `sb`, `ss` — swap the top two elements of a stack  
- `pa`, `pb` — push the top element from one stack to the other  
- `ra`, `rb`, `rr` — rotate stack (top to bottom)  
- `rra`, `rrb`, `rrr` — reverse rotate (bottom to top)
