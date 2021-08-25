# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rriyas <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/24 13:25:06 by rriyas            #+#    #+#              #
#    Updated: 2021/08/24 13:25:15 by rriyas           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

HEADER = ./includes/

SRCS = srcs/ft_putchar.c\
	   srcs/ft_swap.c\
	   srcs/ft_putstr.c\
	   srcs/ft_strlen.c\
	   srcs/ft_strcmp.c

OBJS = $(SRCS:.c=.o)

CC = gcc 

RM = rm -f

CFLAGS = -Wall -Werror -Wextra -I ${HEADER}

$(NAME) : $(OBJS)
		ar rc ${NAME} ${OBJS}
		ranlib ${NAME}

.c.o:
		$(CC) ${CFLAGS} -c $< -o ${<:.c=.o}

all : $(NAME)

clean : 
		$(RM) $(OBJS)
	
fclean : clean
		$(RM) $(NAME)

re : fclean all

.PHONY: all clean re fclean
