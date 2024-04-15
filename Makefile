# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ybazylbe <ybazylbe@student.42prague.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/01 15:41:35 by ybazylbe          #+#    #+#              #
#    Updated: 2023/12/01 15:41:38 by ybazylbe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

AR = ar crs
RM = rm -f

INCLUDES = ./ft_printf.h

SRCS = ./ft_len.c \
			./ft_print_part1.c \
			./ft_print_part2.c \
			./ft_printf.c \
			./ft_put.c

OBJS = $(SRCS:.c=.o)

$(NAME): $(OBJS)
				$(AR) $(NAME) $(OBJS)

all: $(NAME)

%.o: %.c $(INCLUDES)
				$(CC) $(CFLAGS) -c $< -o $@

clean:
				$(RM) $(OBJS)

fclean: clean
				$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re