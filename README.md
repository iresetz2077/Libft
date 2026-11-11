*This project has been created as part of the 42 curriculum by clmo.*

# Libft

## Description

**Libft** is the first project of the 42 common core. The goal is to write, from scratch, your own C library: a collection of general-purpose functions that reimplements part of the standard C library (`libc`) and adds a set of extra utilities (string manipulation, output to file descriptors, linked lists).

The project teaches how standard functions work under the hood: memory handling, pointer arithmetic, string management, dynamic allocation and data structures. The resulting `libft.a` is meant to be reused in later 42 projects, where most standard library functions are forbidden.

All code follows the 42 **Norm** and compiles with `-Wall -Wextra -Werror`.

## Instructions

### Requirements

- A C compiler (`cc`)
- `make`
- `ar` (to build the static library)

### Compilation

From the root of the repository:

```sh
make        # builds libft.a
make clean  # removes object files (.o)
make fclean # removes object files and libft.a
make re     # fclean + all
```

### Using the library in a project

Include the header in your source files:

```c
#include "libft.h"
```

Then compile and link against `libft.a`:

```sh
cc -Wall -Wextra -Werror main.c -I path/to/libft -L path/to/libft -lft -o my_program
```

### Example

```c
#include "libft.h"

int	main(void)
{
	char	**words;
	int		i;

	words = ft_split("hello libft world", ' ');
	i = 0;
	while (words[i])
	{
		ft_putendl_fd(words[i], 1);
		free(words[i]);
		i++;
	}
	free(words);
	return (0);
}
```

## Library description

The library is built as a static archive, `libft.a`, and all prototypes are declared in `libft.h`. Functions are grouped into three parts.

### Part 1 — Libc functions

Reimplementations of standard functions, with the same behaviour as the originals (see their `man` pages).

| Category | Functions |
|---|---|
| Character checks | `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint` |
| Character conversion | `ft_toupper`, `ft_tolower` |
| Memory | `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp` |
| Strings | `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr` |
| Conversion | `ft_atoi` |
| Allocation | `ft_calloc`, `ft_strdup` |

### Part 2 — Additional functions

Functions that are not in the libc, or that exist in a different form.

| Function | Description |
|---|---|
| `ft_substr` | Returns a newly allocated substring of `s`, starting at `start`, of maximum length `len`. |
| `ft_strjoin` | Returns a new string that is the concatenation of `s1` and `s2`. |
| `ft_strtrim` | Returns a copy of `s1` with the characters in `set` removed from both ends. |
| `ft_split` | Splits `s` on the delimiter `c` and returns a NULL-terminated array of strings. |
| `ft_itoa` | Converts an integer to a newly allocated string. |
| `ft_strmapi` | Applies `f` to each character of `s` (with its index) and returns a new string with the results. |
| `ft_striteri` | Applies `f` to each character of `s` in place, passing its index and address. |
| `ft_putchar_fd` | Writes a character to the given file descriptor. |
| `ft_putstr_fd` | Writes a string to the given file descriptor. |
| `ft_putendl_fd` | Writes a string followed by a newline to the given file descriptor. |
| `ft_putnbr_fd` | Writes an integer to the given file descriptor. |

### Part 3 — Linked lists

Functions to manipulate singly linked lists, based on the following structure:

```c
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;
```

| Function | Description |
|---|---|
| `ft_lstnew` | Allocates a new node containing `content`, with `next` set to NULL. |
| `ft_lstadd_front` | Adds a node at the beginning of the list. |
| `ft_lstadd_back` | Adds a node at the end of the list. |
| `ft_lstsize` | Returns the number of nodes in the list. |
| `ft_lstlast` | Returns the last node of the list. |
| `ft_lstdelone` | Frees a node's content with `del`, then frees the node. |
| `ft_lstclear` | Deletes and frees every node of the list, then sets the pointer to NULL. |
| `ft_lstiter` | Applies `f` to the content of every node. |
| `ft_lstmap` | Creates a new list by applying `f` to each node's content; uses `del` to clean up on failure. |

The list functions are compiled by the default `make` rule along with the rest of the library.

## Resources

### References

- The Linux manual pages: `man 3 memset`, `man 3 strlcpy`, `man 3 atoi`, etc. — [man7.org](https://man7.org/linux/man-pages/)
- [cppreference — C standard library](https://en.cppreference.com/w/c)
- *The C Programming Language*, Brian W. Kernighan & Dennis M. Ritchie
- [GNU Make manual](https://www.gnu.org/software/make/manual/make.html)
- [Linked lists in C — GeeksforGeeks](https://www.geeksforgeeks.org/linked-list-data-structure/)
- [libft-war-machine](https://github.com/y3ll0w42/libft-war-machine) — tester used to check the functions

### Use of AI

AI (Claude) was used as a support tool, not to write the library's code:

- **Code review and debugging**: pointing out compilation errors under `-Wall -Wextra -Werror` (missing returns, type mismatches, signed/unsigned comparisons) and logic bugs, so I could fix them myself.
- **Progress tracking**: summarising what was done and what remained to do across the three parts.
- **Documentation**: drafting this README.

All the functions were written, tested and validated by me.
