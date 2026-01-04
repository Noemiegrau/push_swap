_This project has been created as part of the 42 curriculum by nograu._

<h1 align="center">Push Swap</h1>
<h3 align="center">Algorithm ⚙️</h3>
<p align="center">
  Sorting a stack with the smallest possible number of operations
</p>

---

## 📑 Table of contents
- [Description](#description)
- [Algorithm](#algorithm)
- [Instructions](#instructions)
- [Installation & Execution](#installation--execution)
- [Resources](#resources)

---

## Description

<!--  A “Description” section that clearly presents the project, including its goal and a brief overview. --> 

<!-- This project aims to sort data in a stack using a limited set of instructions, aiming
to achieve the lowest possible number of actions. --> 

**Push Swap** is an algorithmic project whose goal is to sort a stack of integers using a **restricted set of instructions**, while minimizing the total number of operations.

The program takes a list of integers as arguments, stores them in a stack, and outputs a sequence of operations that will sort the stack in ascending order.

Two stacks are used:
- **Stack A**: initially contains all the numbers
- **Stack B**: used as a storage stack to manipulate numbers

Only predefined operations are allowed, making this project an exercise in:
- algorithm design
- data structures (linked lists)
- optimization
- rigorous parsing and error handling

---

## Algorithm

yet to be chosen...

---

## Instructions
<!--  An “Instructions” section containing any relevant information about compilation,
installation, and/or execution. --> 

### List of available instructions
### Swap operations

- **sa** (swap a) - 
Swap the first two elements at the top of stack a.
Does nothing if there is only one element or none.

- **sb** (swap b) -
Swap the first two elements at the top of stack b.
Does nothing if there is only one element or none.

- **ss** -
Perform sa and sb at the same time.

### Push operations

- **pa** (push a) -
Take the first element at the top of stack b and put it at the top of stack a.
Does nothing if stack b is empty.

- **pb** (push b) -
Take the first element at the top of stack a and put it at the top of stack b.
Does nothing if stack a is empty.

### Rotate operations

- **ra** (rotate a) -
Shift up all elements of stack a by one.
The first element becomes the last one.

- **rb** (rotate b) -
Shift up all elements of stack b by one.
The first element becomes the last one.

- **rr** -
Perform ra and rb at the same time.

### Reverse rotate operations

- **rra** (reverse rotate a) -
Shift down all elements of stack a by one.
The last element becomes the first one.

- **rrb** (reverse rotate b) -
Shift down all elements of stack b by one.
The last element becomes the first one.

- **rrr** -
Perform rra and rrb at the same time.

### Error handling

The program prints Error\n on standard error if:

- An argument is not a valid integer

- A value exceeds INT_MIN or INT_MAX

- Duplicate values are provided

- If no arguments are given, the program displays nothing and exits.

---
## Installation & Execution

### Cloning the repository
First, clone the repository using the link provided to you or as follows:
```
git clone https://github.com/Noemiegrau/push_swap.git
```

Then, move into the project directory:
```
cd push_swap
```

### Compiling the project
Compile the project using make:
```
make

```
This will generate the push_swap executable.

### Running the program
You can run the program with a list of numbers as arguments:

```
./push_swap 3 2 1
```
The program will output a list of instructions to sort the stack, for example:
```
sa
pb
pb
pb
sa
pa
```

You can check if the instructions correctly sort the stack using the checker program:
```
./push_swap 3 2 1 | ./checker_linux 3 2 1
```


## Resources

<!--  A “Resources” section listing classic references related to the topic (documentation, articles, tutorials, etc.), as well as a description of how AI was used — specifying for which tasks and which parts of the project. --> 

42 subject: Push Swap

Big-O notation and sorting algorithms

Linked lists manipulation in C

- Links:
BINARY
https://codeur-pro.fr/binaire/
RADIX SORT
https://brilliant.org/wiki/radix-sort/
https://www.youtube.com/watch?v=mVRHvZF8xtg
https://www.youtube.com/watch?v=nu4gDuFabIM
https://www.youtube.com/watch?v=4ungd6NXFYI
https://www.geeksforgeeks.org/cpp/left-shift-right-shift-operators-c-cpp/

### AI usage

AI tools were used as learning support only, mainly for:

- Clarifying linked list manipulations

- Understanding algorithmic strategies/code

- Improving code structure and readability

All code was written, tested, and debugged manually.


<!-- https://emojidb.org/numbers-emojis?utm_source=user_search >
<!-- https://github.com/Abblix/Oidc.Server#readme -->
<!-- https://github.com/matiassingers/awesome-readme?tab=readme-ov-file -->
<!-- ⚡ 💬 🤔 🌱 🔭 -->
