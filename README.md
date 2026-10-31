 *This project has been created as part of the 42 curriculum by jeanbarr.*
 
<h1><center>Piscine Reloaded</h1></center>

My solutions and notes from the **Piscine Reloaded** at [42 Porto](https://www.42porto.com/), a set of practice exercises in Shell and C that prepares me for the 42 core curriculum.

## About

The Piscine Reloaded is a self-paced version of the 42 Piscine. It covers Unix shell basics and the fundamentals of C programming.

## Repository structure

Each exercise lives in its own folder named after the subject (`ex00`, `ex01`, ...).

```
Reloaded_Piscine/
├── ex00/    # Shell: archive exercise (exo.tar)
├── ex04/    # Shell: MAC.sh
├── ex05/    # Shell: file with a special name
├── ex06/    # C: ft_print_alphabet
├── ...
├── ex24/    # Makefile for libft.a
├── ex27/    # ft_display_file
└── README.md
```

## What I practiced

**Shell**
- Pipes and text filtering with `grep` and `awk`
- Quoting and escaping special characters
- Reading `man` pages

**C**
- Functions, `while` loops, and conditions
- Pointers and passing values by address (`ft_swap`, `ft_div_mod`)
- Strings and arrays (`ft_putstr`, `ft_strcmp`)
- Iteration and recursion (`ft_iterative_factorial`, `ft_recursive_factorial`)
- Dynamic memory with `malloc` (`ft_range`)
- Command-line arguments (`argc` and `argv`, `ft_sort_params`)
- File descriptors with `open`, `read`, `write`, `close` (`ft_display_file`)
- Writing a `Makefile` with `all`, `clean`, `fclean`, and `re`

## Exercises

| Exercise | Name | Topic |
|----------|------|-------|
| ex00 | Oh yeah, mooore... | File permissions, directories, tar |
| ex01 | Z | Basic shell commands |
| ex02 | clean | Find and delete files |
| ex03 | find_sh | Shell scripting |
| ex04 | MAC | Network commands |
| ex05 | Can you create it? | File creation and naming |
| ex06 | ft_print_alphabet | Loops, characters |
| ex07 | ft_print_numbers | Loops, digits |
| ex08 | ft_is_negative | Conditional statements |
| ex09 | ft_ft | Pointers |
| ex10 | ft_swap | Pointers, swapping values |
| ex11 | ft_div_mod | Pointers, arithmetic |
| ex12 | ft_iterative_factorial | Iteration |
| ex13 | ft_recursive_factorial | Recursion |
| ex14 | ft_sqrt | Algorithms, loops |
| ex15 | ft_putstr | Strings, output |
| ex16 | ft_strlen | String manipulation |
| ex17 | ft_strcmp | String comparison |
| ex18 | ft_print_params | Command-line arguments |
| ex19 | ft_sort_params | Sorting, ASCII |
| ex20 | ft_strdup | Dynamic memory allocation |
| ex21 | ft_range | Arrays, `malloc` |
| ex22 | ft_abs.h | Macros, header files |
| ex23 | ft_point.h | Structures |
| ex24 | Makefile | Compilation, static libraries |
| ex25 | ft_foreach | Function pointers |
| ex26 | ft_count_if | Function pointers |
| ex27 | display_file | File handling, Makefile |

## How to compile and test

Most C exercises have no `main`, so I test them with a separate file that I never submit:

```bash
cc -Wall -Wextra -Werror ft_function.c main.c
./a.out
```

Check the Norm:

```bash
norminette
```

For exercises with a Makefile:

```bash
make        # build
make clean  # remove object files
make fclean # remove object files and the binary
make re     # rebuild from scratch
```


