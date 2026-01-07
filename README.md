# C-String-Reversal-Pointers

![Language](https://img.shields.io/badge/Language-C-blue)
![Compiler](https://img.shields.io/badge/Compiler-GCC-informational)
![Concepts](https://img.shields.io/badge/Concepts-Pointers%20%7C%20Strings%20%7C%20Memory-brightgreen)
![Course](https://img.shields.io/badge/Course-EEL%202880-orange)

## Overview
This project demonstrates **string manipulation using pointers in C**, focusing on memory addressing, pointer arithmetic, and in-place string reversal. The program prints memory addresses of individual characters, reverses a sentence using a pointer-based function, and outputs the result along with the system date and time.

## Key Concepts Demonstrated
- Pointer arithmetic and memory addressing
- Character arrays and null-terminated strings
- Passing strings to functions by pointer
- In-place string reversal algorithm
- Use of standard C libraries (`stdio.h`, `string.h`, `time.h`)

## How It Works
1. A sentence is stored in a character array.
2. The program prints the memory address of the string and selected characters.
3. A function reverses the string **in place** using pointer indexing.
4. The reversed string and timestamp are printed to the console.

## Files
- `main 4.c` – Fully commented C source code
- `Code+Output` – Screenshot of program execution and output
- `README.md` – Project documentation

## How to Compile and Run
```bash
gcc main\ 4.c -o string_reverse
./string_reverse
