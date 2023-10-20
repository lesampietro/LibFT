# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lsampiet <lsampiet@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/19 21:58:01 by lsampiet          #+#    #+#              #
#    Updated: 2023/10/19 22:01:52 by lsampiet         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME=libft

C_SOURCE=$(wildcard ./srcs/*.c)

H_SOURCE=$(wildcard ./includes/*.h)

OBJ=$(C_SOURCE:.c=.o)

CC=cc

C_FLAGS=-Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) -o $@ $^

%.o: %.c %.h
	$(CC) -o $@ $< $(CC_FLAGS)

main.o: main.c $(H_SOURCE)
	$(CC) -o $@ $< $(CC_FLAGS)
