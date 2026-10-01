*This activity has been created as part of the 42 curriculum by osawalha.*

# Libft

## Description

Libft is a custom C library developed as an introduction to low-level programming,
memory management, pointers, strings, and linked data structures. The goal of the
project is to recreate a selection of standard C library functions and implement
additional utilities that can be reused in future 42 projects.

The project produces a static library named `libft.a`. It contains functions for
character classification, memory manipulation, string processing, numeric
conversion, file-descriptor output, dynamic allocation, and singly linked lists.

## Library Description

### Character classification and conversion

| Function | Description |
| --- | --- |
| `ft_isalpha` | Checks whether a character is alphabetic. |
| `ft_isdigit` | Checks whether a character is a decimal digit. |
| `ft_isalnum` | Checks whether a character is alphabetic or numeric. |
| `ft_isascii` | Checks whether a value belongs to the ASCII character set. |
| `ft_isprint` | Checks whether a character is printable. |
| `ft_toupper` | Converts a lowercase letter to uppercase. |
| `ft_tolower` | Converts an uppercase letter to lowercase. |

### Memory manipulation

| Function | Description |
| --- | --- |
| `ft_memset` | Fills a memory area with a byte value. |
| `ft_bzero` | Sets a memory area to zero. |
| `ft_memcpy` | Copies bytes between non-overlapping memory areas. |
| `ft_memmove` | Copies bytes safely when memory areas overlap. |
| `ft_memchr` | Searches for a byte inside a memory area. |
| `ft_memcmp` | Compares two memory areas byte by byte. |
| `ft_calloc` | Allocates memory and initializes every allocated byte to zero. |

### Strings and conversions

| Function | Description |
| --- | --- |
| `ft_strlen` | Returns the length of a null-terminated string. |
| `ft_strchr` | Finds the first occurrence of a character in a string. |
| `ft_strrchr` | Finds the last occurrence of a character in a string. |
| `ft_strncmp` | Compares up to a specified number of characters. |
| `ft_strnstr` | Finds a substring within a length-limited part of a string. |
| `ft_strlcpy` | Copies a string into a size-limited destination buffer. |
| `ft_strlcat` | Appends a string to a size-limited destination buffer. |
| `ft_strdup` | Allocates and returns a duplicate of a string. |
| `ft_atoi` | Converts the initial numeric part of a string to an integer. |

### Additional string utilities

| Function | Description |
| --- | --- |
| `ft_substr` | Allocates a substring beginning at a specified index. |
| `ft_strjoin` | Allocates a new string containing two joined strings. |
| `ft_strtrim` | Removes specified characters from both ends of a string. |
| `ft_split` | Splits a string into a null-terminated array of words. |
| `ft_itoa` | Converts an integer to a newly allocated string. |
| `ft_strmapi` | Applies a function to every character and returns a new string. |
| `ft_striteri` | Applies a function to every character of a string in place. |

### File-descriptor output

| Function | Description |
| --- | --- |
| `ft_putchar_fd` | Writes one character to a file descriptor. |
| `ft_putstr_fd` | Writes a string to a file descriptor. |
| `ft_putendl_fd` | Writes a string followed by a newline. |
| `ft_putnbr_fd` | Writes an integer to a file descriptor. |

### Singly linked lists

The library defines the following node type:

```c
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
```

| Function | Description |
| --- | --- |
| `ft_lstnew` | Allocates a new list node. |
| `ft_lstadd_front` | Adds a node to the beginning of a list. |
| `ft_lstsize` | Counts the nodes in a list. |
| `ft_lstlast` | Returns the final node of a list. |
| `ft_lstadd_back` | Adds a node to the end of a list. |
| `ft_lstdelone` | Deletes one node using a content-deletion function. |
| `ft_lstclear` | Deletes an entire list and sets its head to `NULL`. |
| `ft_lstiter` | Applies a function to the content of every node. |
| `ft_lstmap` | Creates a new list by transforming every node's content. |

Functions that allocate memory return ownership of that memory to the caller.
The caller must release it with `free` when it is no longer needed. The array
returned by `ft_split` requires freeing every word before freeing the array.

## Instructions

### Requirements

- A C compiler such as `cc` or `clang`.
- GNU Make.
- The `ar` archiver.

### Compilation

From the root of the repository, run:

```sh
make
```

This compiles the source files with `-Wall -Wextra -Werror` and creates:

```text
libft.a
```

Available Makefile rules:

| Command | Action |
| --- | --- |
| `make` or `make all` | Builds `libft.a`. |
| `make clean` | Removes object files. |
| `make fclean` | Removes object files and `libft.a`. |
| `make re` | Performs a clean rebuild. |

### Using the library

Include the header in your C file:

```c
#include "libft.h"
```

Compile your program and link it with the library:

```sh
cc -Wall -Wextra -Werror main.c -L. -lft -o program
```

Example:

```c
#include "libft.h"

int	main(void)
{
	char	*number;

	number = ft_itoa(42);
	if (number == NULL)
		return (1);
	ft_putendl_fd(number, 1);
	free(number);
	return (0);
}
```

## Technical Choices

- The project is written in C and does not use global variables.
- Dynamic results are allocated on the heap and checked for allocation failure.
- Memory-oriented functions operate on bytes using `unsigned char` where needed.
- The library is packaged as a static archive for reuse by other C programs.
- Public declarations and the `t_list` structure are provided in `libft.h`.

## Resources

The following references were used to study expected behavior and C concepts:

- [Linux manual pages: string functions](https://man7.org/linux/man-pages/man3/string.3.html)
- [Linux manual pages: write system call](https://man7.org/linux/man-pages/man2/write.2.html)
- [GNU Make manual](https://www.gnu.org/software/make/manual/make.html)
- Local manual pages, including `man 3 strlen`, `man 3 memcpy`, and
  `man 3 malloc`.

### Use of AI

AI was used as a learning and review assistant during this project. It helped
explain pointers, memory layout, dynamic allocation, and edge cases; review
function signatures and Makefile structure; suggest test cases; identify
compiler and boundary-condition issues; and assist with drafting this README.
The implementations were manually integrated, tested, and reviewed by the
author to understand their behavior and memory-management responsibilities.
