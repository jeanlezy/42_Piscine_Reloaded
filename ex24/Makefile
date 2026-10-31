# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jeanbarr <jeanbarr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/10/31 18:48:48 by jeanbarr          #+#    #+#              #
#    Updated: 2026/10/31 19:47:25 by jeanbarr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
CC		= cc
CFLAGS	= -Wall -Wextra -Werror
RM		= rm -f
INCLS	= includes

SRCS	= $(addprefix srcs/, ft_putchar.c ft_putstr.c ft_strcmp.c \
		ft_strlen.c ft_swap.c )

OBJS	= $(SRCS:.c=.o)

all: $(NAME)

.c.o:
	$(CC) $(CFLAGS) -I $(INCLS) -c $< -o $@
	
$(NAME): ${OBJS}
		ar rcs ${NAME} ${OBJS}

clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re: fclean all 

.PHONY: all clean fclean re