# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rdragan <rdragan@student.42heilbronn.de    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/26 16:16:46 by rdragan           #+#    #+#              #
#    Updated: 2023/06/01 17:16:17 by rdragan          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME		:=	push_swap
LIBFT		:=	lib/libft
SRC			:=	$(wildcard src/*.c)
SRC			+=	$(wildcard src/*/*.c)
SRC			+=	$(wildcard instructions/*.c)
OBJ			:=	$(SRC:.c=.o)
LINKED_LIST	:=	lib/linked_list
CFLAGS		:=	-Wall -Wextra -Werror

all: build_linked_list build_libft $(OBJ)
	@cc $(CFLAGS) $(LIBFT)/libft.a $(LINKED_LIST)/linked_list.a $(OBJ) -o $(NAME)

debug: CFLAGS += -g

debug: fclean build_linked_list build_libft $(OBJ)
	@cc $(CFLAGS) $(LIBFT)/libft.a $(LINKED_LIST)/linked_list.a $(OBJ) -o $(NAME)_debug

build_libft: $(LIBFT)
	@make -C $(LIBFT) >/dev/null

build_linked_list: $(LINKED_LIST)
	@make -C $(LINKED_LIST) >/dev/null

clean:
	@rm -f $(OBJ) main.o
	@make -C $(LIBFT) clean
	@make -C $(LINKED_LIST) clean

fclean: clean
	@rm -f $(NAME)
	@make -C $(LIBFT) fclean
	@make -C $(LINKED_LIST) fclean
	@rm -Rf *.dSYM
	@rm -f $(NAME)_debug

re: fclean all

.PHONY: all, build_libft, build_linked_list, clean, fclean, test