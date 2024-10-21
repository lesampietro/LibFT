   # 📖 LibFT | 42
   > My own first library
   ## Project Overview
   LibFT is the first project in [42](https://www.42sp.org.br/)'s common core. 
   This project involves creating a comprehensive library of essential C functions that will be utilized in subsequent projects. Many of these functions are reimplementations of C standard library functions.
   
   ![approved-+-bonus-🌟-125%](https://github.com/user-attachments/assets/116f663f-0800-4cee-99fb-02a00401b655)
   [![forthebadge](https://forthebadge.com/images/badges/made-with-c.svg)](https://forthebadge.com)
   
   ##  Requirements
   ### 📓 Mandatory  
   For the mandatory part there are some basic files that need to be submitted:
   | **.c** | **.h** | **Makefile** |
   | ------ | ------ | ------------ |
   | These files contain the implementation of the LibFT functions in C. | The header file contain the declarations (prototypes) for the LibFT functions, and can be included in other .c files using the `#include` directive. | The Makefile specifies how to compile the .c files and link them into a library (typically `libft.a` for a static library). | 
   
   ### 🌟 Bonus
   The bonus part requires implementing additional functions for handling linked lists, as well as declaring a `struct` to define the linked list nodes, as showed below:

   ```c
   typedef	struct	s_list
   {
	void		*content;
	struct	s_list	*next;
   }			t_list;
  ```

## Function List
### 📓 Functions from `<ctype.h>`
 - [x] [ft_isalpha](https://github.com/lesampietro/LibFT/blob/master/ft_isalpha.c) - checks if the character is an alphabetic letter (A-Z or a-z).
 - [x] [ft_isdigit](https://github.com/lesampietro/LibFT/blob/master/ft_isdigit.c) - checks if the character is a digit (0 through 9).
 - [x] [ft_isalnum](https://github.com/lesampietro/LibFT/blob/master/ft_isalnum.c) - checks if the character is alphanumeric (a letter or digit).
 - [x] [ft_isascii](https://github.com/lesampietro/LibFT/blob/master/ft_isascii.c) - checks if the character belongs to the standard ASCII set (0-127).
 - [x] [ft_isprint](https://github.com/lesampietro/LibFT/blob/master/ft_isprint.c) - checks if the character is printable, including space but excluding control characters.
 - [x] [ft_toupper](https://github.com/lesampietro/LibFT/blob/master/ft_toupper.c) - converts a lowercase character to its uppercase equivalent, if applicable.
 - [x] [ft_tolower](https://github.com/lesampietro/LibFT/blob/master/ft_tolower.c) - converts an uppercase character to its lowercase equivalent, if applicable.
### 📓 Functions from `<string.h>`
 - [x] [ft_strlen](https://github.com/lesampietro/LibFT/blob/master/ft_strlen.c) - calculates the length of a string, excluding the null terminator.
 - [x] [ft_memset](https://github.com/lesampietro/LibFT/blob/master/ft_memset.c) - fills a block of memory with a constant byte value.
 - [x] [ft_bzero](https://github.com/lesampietro/LibFT/blob/master/ft_bzero.c) - zeros out a block of memory, setting all bytes to 0.
 - [x] [ft_memcpy](https://github.com/lesampietro/LibFT/blob/master/ft_memcpy.c) - copies a block of memory from a source to a destination, preventing overlap.
 - [x] [ft_memmove](https://github.com/lesampietro/LibFT/blob/master/ft_memmove.c) - copies a block of memory, even if the source and destination overlap.
 - [x] [ft_strlcpy](https://github.com/lesampietro/LibFT/blob/master/ft_strlcpy.c) - safely copies a string into a buffer of a specific size, ensuring null-termination.
 - [x] [ft_strlcat](https://github.com/lesampietro/LibFT/blob/master/ft_strlcat.c) - safely concatenates a string to another, ensuring it fits within a buffer size and null-terminates.
 - [x] [ft_strchr](https://github.com/lesampietro/LibFT/blob/master/ft_strchr.c) - locates the first occurrence of a character in a string.
 - [x] [ft_strrchr](https://github.com/lesampietro/LibFT/blob/master/ft_strrchr.c) - locates the last occurrence of a character in a string.
 - [x] [ft_strncmp](https://github.com/lesampietro/LibFT/blob/master/ft_strncmp.c) - compares two strings up to a specified number of characters.
 - [x] [ft_memchr](https://github.com/lesampietro/LibFT/blob/master/ft_memchr.c) - scans a block of memory for a specific byte value.
 - [x] [ft_memcmp](https://github.com/lesampietro/LibFT/blob/master/ft_memcmp.c) - compares two blocks of memory byte by byte.
 - [x] [ft_strnstr](https://github.com/lesampietro/LibFT/blob/master/ft_strnstr.c) - locates a substring within a string, searching only up to a specified length.
 - [x] [ft_strdup](https://github.com/lesampietro/LibFT/blob/master/ft_strdup.c) - allocates and returns a duplicate of the given string.
### 📓 Functions from `<stdlib.h>`
 - [x] [ft_atoi](https://github.com/lesampietro/LibFT/blob/master/ft_atoi.c) - onverts a string to an integer, ignoring leading whitespaces and handling optional signs.
 - [x] [ft_calloc](https://github.com/lesampietro/LibFT/blob/master/ft_calloc.c) - allocates memory for an array of elements and initializes all bytes to zero.
### ✍🏻 Non-standard functions
 - [x] [ft_substr](https://github.com/lesampietro/LibFT/blob/master/ft_substr.c) - extracts and returns a substring from a given string starting at a specific index and up to a specified length.
 - [x] [ft_strjoin](https://github.com/lesampietro/LibFT/blob/master/ft_strjoin.c) - concatenates two strings into a new string.
 - [x] [ft_strtrim](https://github.com/lesampietro/LibFT/blob/master/ft_strtrim.c) - removes specified leading and trailing characters from a string.
 - [x] [ft_split](https://github.com/lesampietro/LibFT/blob/master/ft_split.c) - splits a string into an array of substrings based on a given delimiter character.
 - [x] [ft_itoa](https://github.com/lesampietro/LibFT/blob/master/ft_itoa.c) - converts an integer to its string representation.
 - [x] [ft_strmapi](https://github.com/lesampietro/LibFT/blob/master/ft_strmapi.c) - applies a function to each character of a string and returns a new string with the modified characters.
 - [x] [ft_striteri](https://github.com/lesampietro/LibFT/blob/master/ft_striteri.c) - applies a function to each character of a string by modifying the string in place.
 - [x] [ft_putchar_fd](https://github.com/lesampietro/LibFT/blob/master/ft_putchar_fd.c) - outputs a character to a specified file descriptor.
 - [x] [ft_putstr_fd](https://github.com/lesampietro/LibFT/blob/master/ft_putstr_fd.c) - outputs a string to a specified file descriptor.
 - [x] [ft_putendl_fd](https://github.com/lesampietro/LibFT/blob/master/ft_putendl_fd.c) - outputs a string to a file descriptor, followed by a newline character.
 - [x] [ft_putnbr_fd](https://github.com/lesampietro/LibFT/blob/master/ft_putnbr_fd.c) - outputs an integer to a specified file descriptor.
### 🌟 Linked list functions
 - [x] [ft_lstnew](https://github.com/lesampietro/LibFT/blob/master/ft_lstnew_bonus.c) - creates a new linked list element with a given content.
 - [x] [ft_lstadd_front](https://github.com/lesampietro/LibFT/blob/master/ft_lstadd_front_bonus.c) - adds an element at the beginning of a list.
 - [x] [ft_lstsize](https://github.com/lesampietro/LibFT/blob/master/ft_lstsize_bonus.c) - counts the number of elements in a list.
 - [x] [ft_lstlast](https://github.com/lesampietro/LibFT/blob/master/ft_lstlast_bonus.c) - returns the last element of the list.
 - [x] [ft_lstadd_back](https://github.com/lesampietro/LibFT/blob/master/ft_lstadd_back_bonus.c) - adds an element to the end of the linked list.
 - [x] [ft_lst_delone](https://github.com/lesampietro/LibFT/blob/master/ft_lstdelone_bonus.c) - frees the memory of a single linked list node (lst) using the function passed as del to free the node’s content.
 - [x] [ft_lstclear](https://github.com/lesampietro/LibFT/blob/master/ft_lstclear_bonus.c) - deletes and frees all elements of a linked list.
 - [x] [ft_lstiter](https://github.com/lesampietro/LibFT/blob/master/ft_lstiter_bonus.c) - iterates over a linked list and applies a function to each element.
 - [x] [ft_lstmap](https://github.com/lesampietro/LibFT/blob/master/ft_lstmap_bonus.c) - creates a new linked list by applying a function to each element of an existing list.

## How to Use
### 1.Clone and Build
Clone this repository, navigate to the directory, and build the library by running `make`:
```c
$> git clone https://github.com/lesampietro/LibFT.git /path-to-LibFT
$> cd /path-to-LibFT
$> make
```
🌟 To compile the bonus functions, run `make bonus` instead.

### 2.Use LibFT:
To use LibFT in your code, include the header file `libft.h` as shown below:
```c
#include "libft.h"
```



