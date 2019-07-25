# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yquddus <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/22 16:33:45 by yquddus           #+#    #+#              #
#    Updated: 2019/07/23 23:17:36 by yquddus          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c

HEADERS = includes

all: $(NAME)
	ar rc $(NAME)  ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
	ranlib $(NAME)

$(NAME): $(SRCS) $(HEADERS)
	gcc -c -Wall -Werror -Wextra -I$(HEADERS) $(SRCS)

clean:
	/bin/rm -f *.o

fclean : clean
	/bin/rm -f $(NAME)

re: fclean all
