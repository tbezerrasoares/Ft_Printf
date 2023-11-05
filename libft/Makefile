# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbezerra <tbezerra@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/13 23:40:02 by tbezerra          #+#    #+#              #
#    Updated: 2023/11/02 10:45:27 by tbezerra         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
HEADER= libft.h
CC = cc
CCFLAGS = -Wall -Wextra -Werror
SRC = ft_atoi.c ft_isprint.c ft_memcpy.c ft_split.c ft_strmapi.c ft_toupper.c\
	 ft_bzero.c ft_itoa.c ft_memmove.c ft_strchr.c ft_strncmp.c ft_calloc.c\
	 ft_memset.c ft_strdup.c ft_strnstr.c ft_isalnum.c ft_putchar_fd.c\
	 ft_strjoin.c ft_strrchr.c ft_isalpha.c ft_putendl_fd.c ft_strlcat.c\
	 ft_strtrim.c ft_isascii.c ft_memchr.c ft_putnbr_fd.c\
	 ft_strlcpy.c ft_substr.c ft_isdigit.c ft_memcmp.c ft_putstr_fd.c\
	 ft_strlen.c ft_tolower.c ft_striteri.c
OBJS= $(SRC:.c=.o)

B_SRC= ft_lstadd_back.c ft_lstadd_front.c ft_lstnew.c ft_lstsize.c ft_lstlast.c\
	ft_lstdelone.c ft_lstiter.c ft_lstclear.c ft_lstmap.c
B_OBJS= $(B_SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CCFLAGS) -I$(HEADER) -c $(SRC)
	ar rcs $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS) $(B_OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

bonus: $(OBJS) $(B_OBJS)
	$(CC) $(CCFLAGS) -I$(HEADER) -c $(B_SRC)
	ar rcs $(NAME) $(OBJS) $(B_OBJS)

.PHONY: all clean fclean re bonus