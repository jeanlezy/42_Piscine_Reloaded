# Piscine Reloaded - 42 Porto

My solutions and notes from the **Piscine Reloaded** at [42 Porto](https://www.42porto.com/), a set of practice exercises in Shell and C that prepares me for the 42 core curriculum.

## About

The Piscine Reloaded is a self-paced version of the 42 Piscine. It covers Unix shell basics and the fundamentals of C programming, and every exercise follows the 42 **Norm**.

- **School:** 42 Porto
- **Languages:** Shell, C
- **Tools:** `cc`, `make`, `norminette`, Git, VS Code

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
| ex04 | MAC.sh | Shell pipeline |
| ex05 | Special file name | Shell quoting |
| ex06 | ft_print_alphabet | Loops |
| ex08 | ft_is_negative | Conditions |
| ex10 | ft_swap | Pointers |
| ex11 | ft_div_mod | Pointers |
| ex12 | ft_iterative_factorial | Iteration |
| ex13 | ft_recursive_factorial | Recursion |
| ex15 | ft_putstr | Strings |
| ex19 | ft_sort_params | Arguments and sorting |
| ex21 | ft_range | `malloc` |
| ex24 | Makefile | Static library `libft.a` |
| ex27 | ft_display_file | File I/O |

*(Add the remaining exercises and any I skipped.)*

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

## Lessons learned

- [Write here what was hardest, e.g. pointers, the Norm, Makefile tabs]
- [What you would do differently]

## Author

**[Your name]**
- 42 intranet: [login]
- GitHub: [@your-username](https://github.com/your-username)
- LinkedIn: [link]
