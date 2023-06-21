Certainly! Here's the README file in Markdown format:

```markdown
# 0x19. C - Stacks, Queues - LIFO, FIFO

This project implements a simple stack data structure in C using the LIFO (Last-In, First-Out) principle. The program provides several operations to manipulate the stack.

## Compilation

To compile the program, use the following command:

```bash
gcc -Wall -Werror -Wextra -pedantic *.c -o monty
```

## Usage

To run the program and execute Monty bytecode files, use the following command:

```bash
./monty file.m
```

Replace `file.m` with the path to your Monty bytecode file.

## Monty Bytecode Instructions

The Monty bytecode files contain instructions that are executed by the program. Here are the supported instructions:

1. `pint`: Prints the value at the top of the stack.

2. `pop`: Removes the top element of the stack.

3. `swap`: Swaps the top two elements of the stack.

4. `add`: Adds the top two elements of the stack.

5. `nop`: Does nothing.

## Error Handling

The program handles certain error conditions and displays appropriate error messages:

- If the stack is empty and `pint` or `pop` is called, an error message is displayed.

- If the stack contains less than two elements and `swap` or `add` is called, an error message is displayed.

## Examples

Here are some examples of valid Monty bytecode files:

```
push 1
push 2
push 3
pint
pop
swap
add
```

This code will push three values onto the stack, print the value at the top of the stack (which is 3), remove the top element, swap the top two elements, and add the top two elements.

## Author

This program was written by Joseph.
```