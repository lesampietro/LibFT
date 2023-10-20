# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lsampiet <lsampiet@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/19 21:58:01 by lsampiet          #+#    #+#              #
#    Updated: 2023/10/20 02:10:48 by lsampiet         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME=libft.a

C_SOURCE= ft_isalnum.c \
			 ft_isalpha.c \
			 ft_isascii.c \
			 ft_isdigit.c \
			 ft_isprint.c \
			 ft_strlen.c 

HEADER= libft.h

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
