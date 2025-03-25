# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yevkahar <yevkahar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/20 14:01:42 by yevkahar          #+#    #+#              #
#    Updated: 2025/03/25 14:49:48 by yevkahar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=   push_swap
SRCS	=	parsing.c\
			gnl.c\
			gnl_utils.c\
			utils.c\
			swap.c\
			push.c\
			rotate.c\
			rev_rotate.c\
			sort.c\
			nodes.c\
			main.c\
			error.c\
			error_utils.c\
			
			


OBJS	= $(SRCS:.c=.o)
CC 		= gcc
RM		= rm -f
LIBC	= ar -rcs
FLAGS	= -Wall -Wextra -Werror
INCS	= .

.c.o :
	$(CC) $(FLAGS) -c $< -o $(<:.c=.o) -I$(INCS)

$(NAME): $(OBJS)
	$(LIBC) $(NAME) $(OBJS)
	

all: $(NAME)

clean:
	$(RM) -f $(OBJS)

fclean: clean
	$(RM) $(NAME)
re: fclean all

.PHONY: all clean fclean re .c.o