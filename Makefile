# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lsampiet <lsampiet@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/19 21:58:01 by lsampiet          #+#    #+#              #
#    Updated: 2023/10/20 03:25:01 by lsampiet         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME=libft.a

C_SOURCE= ft_isalnum.c \
				 ft_isalpha.c \
				 ft_isascii.c \
				 ft_isdigit.c \
				 ft_isprint.c \
				 ft_strlen.c \
				 ft_tolower.c \
				 ft_toupper.c
			 

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