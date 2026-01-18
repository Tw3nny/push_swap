*This project has been created as part of the 42 curriculum by matiguti.*

### Description

**push_swap** is a sorting algorithm project that challenges you to sort a stack of integers using a limited set of operations, with the goal of minimizing the total number of moves.

The program receives a list of integers as arguments and outputs the sequence of operations needed to sort them in ascending order. Two stacks are used: stack A (initially containing all the numbers) and stack B (initially empty).

Available operations:
- `sa`, `sb`, `ss`: swap the first two elements of a stack
- `pa`, `pb`: push the top element from one stack to the other
- `ra`, `rb`, `rr`: rotate a stack (first element becomes last)
- `rra`, `rrb`, `rrr`: reverse rotate a stack (last element becomes first)

### Instructions

## Compilation & Execution

make

./push_swap <list of integers>

Example:

ARG="4 67 3 87 23"; ./push_swap $ARG | wc -l

ARG="4 67 3 87 23"; ./push_swap $ARG | ./checker_OS $ARG

### Resources

- https://medium.com/@ayogun/push-swap-c1f5d2d41e97
- https://medium.com/@jamierobertdawson/push-swap-the-least-amount-of-moves-with-two-stacks-d1e76a71789a
- https://github.com/o-reo/push_swap_visualizer
- https://42-cursus.gitbook.io/guide/2-rank-02/push_swap

## AI Usage

AI was used in this project for:
- **Understanding the subject**: clarifying the project requirements and constraints
- **Comprehension of the Turk algorithm**: understanding how the algorithm works, its logic, and how to implement it efficiently