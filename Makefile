# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbezerra <tbezerra@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/06 12:16:36 by tbezerra          #+#    #+#              #
#    Updated: 2023/11/06 16:31:09 by tbezerra         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
HEADER= ft_printf.h
CC = cc
CCFLAGS = -Wall -Wextra -Werror
SRC = $(wildcard ./ft*.c)
OBJS= $(SRC:.c=.o)


all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CCFLAGS) -I$(HEADER) -c $(SRC)
	ar rcs $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re bonus