# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rriyas <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/24 13:25:06 by rriyas            #+#    #+#              #
#    Updated: 2021/08/25 13:32:23 by rriyas           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.SILENT:

NAME = do-op

SRCS = ft_atoi.c\
	   ft_doop.c\
	   ft_putnbr.c\
	   ft_strcmp.c\
	   ft_calc.c\
	   main.c

OBJS = $(SRCS:.c=.o)

CC = gcc 

RM = rm -f

CFLAGS = -Wall -Werror -Wextra

$(NAME) : $(OBJS)
			${CC} ${OBJS} -o ${NAME}

.c.o:
	$(CC) ${CFLAGS} -c $< -o ${<:.c=.o}

all : $(NAME)

clean : 
		$(RM) $(OBJS)
	
fclean : clean
		$(RM) $(NAME)

re : fclean all

.PHONY: all clean re fclean
