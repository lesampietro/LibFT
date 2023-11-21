# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lsampiet <lsampiet@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/19 21:58:01 by lsampiet          #+#    #+#              #
#    Updated: 2023/11/21 19:05:07 by lsampiet         ###   ########.fr        #
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
				 ft_toupper.c

C_BONUS= ft_lstnew_bonus.c \
				 ft_lstadd_front_bonus.c \
				 ft_lstsize_bonus.c \
				 ft_lstlast_bonus.c \
				 ft_lstadd_back_bonus.c \
				 ft_lstdelone_bonus.c \
				 ft_lstclear_bonus.c \
				 ft_lstiter_bonus.c \
				 ft_lstmap_bonus.c

HEADER=./

C_OBJ=$(C_SOURCE:.c=.o)

BONUS_OBJ=$(C_BONUS:.c=.o)

CC= cc

C_FLAGS= -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(C_OBJ)

bonus: $(BONUS_OBJ)

%.o: %.c
	$(CC) $(C_FLAGS) -I $(HEADER) -c $< -o $@
	ar rcs $(NAME) $@

clean:
	rm -f $(C_OBJ) $(BONUS_OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY= clean fclean re all bonus