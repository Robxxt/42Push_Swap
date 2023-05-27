# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rdragan <rdragan@student.42heilbronn.de    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/02 21:10:12 by rdragan           #+#    #+#              #
#    Updated: 2023/05/27 08:28:57 by rdragan          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		:= cc
NAME	:=	linked_list.a
SRC		:=	create_node.c\
			insert_end.c\
			insert_start.c
OBJ		:=	$(SRC:.c=.o)
CFLAGS	:=	-Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)
	@rm -f test

re: fclean all

.PHONNY: all, clean, fclean, re