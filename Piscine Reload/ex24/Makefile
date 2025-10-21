# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fjose-hi <fjose-hi@student.42porto.co      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/09 22:48:40 by fjose-hi          #+#    #+#              #
#    Updated: 2025/10/10 15:39:48 by fjose-hi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c

CC = cc

FLAGS = -Wall -Wextra -Werror -I includes

OBJ = $(SRC:.c=.o)


all: $(NAME) 

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)
	
clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

%.o:%.c
	$(CC) $(FLAGS) -c $< -o $@
