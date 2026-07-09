# piscineC07

42 Piscine C07 exercises.

This repository contains my solutions for the C07 project completed during the 42 Piscine.  
The project focuses on dynamic memory allocation, arrays, string duplication, string joining, base conversion, and string splitting in C.

## Exercises

| Exercise | Name | Status |
|---|---|---|
| ex00 | ft_strdup | Done |
| ex01 | ft_range | Done |
| ex02 | ft_ultimate_range | Done |
| ex03 | ft_strjoin | Done |
| ex04 | ft_convert_base | Done |
| ex05 | ft_split | Done |

## Project structure

```txt
piscineC07/
├── ex00/
├── ex01/
├── ex02/
├── ex03/
├── ex04/
├── ex05/
└── .gitignore
```

Each folder contains the required file or files for the corresponding exercise.

## Topics covered

- Dynamic memory allocation with `malloc`
- Freeable memory returned from functions
- String duplication
- Integer ranges
- Pointer-to-pointer usage
- Joining strings with separators
- Base conversion
- Splitting strings by charset separators
- NULL-terminated arrays
- 42 Norminette formatting

## Compilation

Example compilation:

```sh
cc -Wall -Wextra -Werror ex00/ft_strdup.c
```

Some exercises contain multiple files, for example:

```sh
cc -Wall -Wextra -Werror ex04/ft_convert_base.c ex04/ft_convert_base2.c
```

For testing, a temporary `main` function can be added locally.  
Before submitting to 42, testing `main` functions and unnecessary includes should be removed.

## Notes

## Notes

This repository is part of my work during the 42 Piscine.  
The goal of C07 is to become more comfortable with manual memory allocation, pointer manipulation, and returning dynamically allocated data from C functions.

Memory allocated with `malloc` should be freed by the caller when it is no longer needed.

Testing `main` functions and unnecessary includes should be removed before submitting to 42.

## Author

KruKuma
