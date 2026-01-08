_This project has been created as part of the 42 curriculum by nograu._

<h1 align="center">Push Swap</h1>
<h3 align="center">Algorithm ⚙️</h3>
<p align="center">
  Sorting a stack with the smallest possible number of operations
</p>

---

## 📑 Table of contents
- [Description](#description)
- [Instructions - Installation, Compilation & Execution](#instructions---installation-compilation--execution)
- [Resources](#resources)

---

## Description

**Push Swap** is an algorithmic project whose goal is to sort a stack of integers using a **restricted set of instructions**, while minimizing the total number of operations.

The program takes a list of integers as arguments, stores them in a stack, and outputs a sequence of operations that will sort the stack in ascending order.

Two stacks are used:
- **Stack A**: initially contains all the numbers
- **Stack B**: used as a storage stack to manipulate numbers

Only predefined operations are allowed, making this project an exercise in:
- algorithm design and structuring
- data structures (linked lists)
- optimization
- rigorous parsing and error handling

### Chosen Algorithm
I chose to implement the RADIX sort algorithm, which uses a binary shifting method. The idea is to look at each bit of the numbers from the least significant to the most significant and sort the stack by moving elements between two stacks according to the current bit. This method is very efficient because it ensures that each pass partially sorts the stack, and after enough passes, the stack becomes fully sorted. Binary shifting is great for Push Swap because it minimizes the number of operations and works consistently even with large stacks.

---
## Instructions - Installation, Compilation & Execution
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


### List of available instructions allowed for this project
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
## Resources

### Documentation
**LINKED LISTS**

* https://www.geeksforgeeks.org/dsa/linked-list-data-structure/ 

**BINARY**

* https://codeur-pro.fr/binaire/
* https://www.geeksforgeeks.org/cpp/left-shift-right-shift-operators-c-cpp/
* https://www.geeksforgeeks.org/digital-logic/logic-gates/
* https://www.bu.edu/lernet/artemis/years/2011/slides/logicgates.pdf

**RADIX SORT**

* https://brilliant.org/wiki/radix-sort/
* https://www.youtube.com/watch?v=mVRHvZF8xtg
* https://www.youtube.com/watch?v=nu4gDuFabIM
* https://www.youtube.com/watch?v=4ungd6NXFYI
* https://www.geeksforgeeks.org/dsa/radix-sort/
* https://www.programiz.com/dsa/radix-sort

### AI usage

AI tools were used as learning support, mainly for:

- Clarifying linked list manipulations and binary shifting

- Understanding algorithmic strategies/code

- Improving code structure and readability

All code was written, tested, and debugged manually.


<!-- https://emojidb.org/numbers-emojis?utm_source=user_search >
<!-- https://github.com/Abblix/Oidc.Server#readme -->
<!-- https://github.com/matiassingers/awesome-readme?tab=readme-ov-file -->
<!-- ⚡ 💬 🤔 🌱 🔭 -->
