# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lsampiet <lsampiet@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/19 21:58:01 by lsampiet          #+#    #+#              #
#    Updated: 2023/11/09 17:57:15 by lsampiet         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME=libft.a

C_SOURCE= ft_isalnum.c \
				 ft_atoi.c \
				 ft_bzero.c \
				 ft_calloc.c \
				 ft_isalpha.c \
				 ft_isascii.c \
				 ft_isdigit.c \
				 ft_isprint.c \
				 ft_itoa.c \
				 ft_memchr.c \
				 ft_memcmp.c \
				 ft_memcpy.c \
				 ft_memmove.c \
				 ft_memset.c \
				 ft_putchar_fd.c \
				 ft_putendl_fd.c \
				 ft_putnbr_fd.c \
				 ft_putstr_fd.c \
				 ft_split.c \
				 ft_strchr.c \
				 ft_strdup.c \
				 ft_striteri.c \
				 ft_strjoin.c \
				 ft_strlcat.c \
				 ft_strlcpy.c \
				 ft_strlen.c \
				 ft_strmapi.c \
				 ft_strncmp.c \
				 ft_strnstr.c \
				 ft_strrchr.c \
				 ft_strtrim.c \
				 ft_substr.c \
				 ft_tolower.c \
				 ft_toupper.c \

HEADER=libft.h

OBJ=$(C_SOURCE:.c=.o)

CC=cc

C_FLAGS=-Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $@ $^ 

%.o: %.c
	$(CC) -c $< -o $@ $(CC_FLAGS) -I $(HEADER) 

clean:
	rm -f *.o

fclean: clean
	rm -f *.a

re: fclean all