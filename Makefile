# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dgallo-p <dgallo-p@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/04 12:50:35 by dgallo-p          #+#    #+#              #
#    Updated: 2022/06/20 09:59:09 by dgallo-p         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

DG_COMPILATING = ♪~ ᕕ(ᐛ)ᕗ
DG_DELETING = ಠ╭╮ಠ
DG_START	= ༼ つ ◕_◕ ༽つ
DG_END	= ༼ つ ಥ_ಥ ༽つ
# COLORS #
GREEN	= \033[0;32m
BLUE	= \033[0;34m
RED		= \033[0;31m
PURPLE	= \033[0;35m
CYAN	= \033[0;36m
RESET	= \033[1;0m

NAME			= push_swap
LIBFT_PATH		= ./sources/libft
SORT_PATH		= ./sources/sort
RADIX_PATH		= ./sources/radix
INCLUDE_PATH	= ./includes

CC			= gcc
CFLAGS		= -Wall -Wextra -Werror #-g3 -fsanitize=address
RM			= rm -f

SRCS_TREAT	=./sources/treat/treat_argv.c ./sources/treat/treat_list.c

SRCS_MOVS	= ./sources/movements/swap.c ./sources/movements/push.c ./sources/movements/reverse.c \
				./sources/movements/rotate.c

SRCS_RADIX  = radix.c radix_aux.c

SRCS_SORT	= sort.c sort_aux.c

SRCS		= main.c $(SRCS_TREAT) $(SRCS_MOVS) $(addprefix $(SORT_PATH)/, $(SRCS_SORT))\
				$(addprefix $(RADIX_PATH)/, $(SRCS_RADIX))

OBJS		= $(SRCS:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJS)
				@echo "$(CYAN)push_swap$(RESET)"
				@echo "$(BLUE)  CREATING   $(DG_COMPILATING)$(RESET)"
				@make -sC $(LIBFT_PATH)
				@$(CC) $(CFLAGS) $(OBJS) $(LIBFT_PATH)/libft.a -o $(NAME)
				@echo "$(GREEN)  CREATED   $(DG_START)$(RESET)"

%.o: %.c
				@$(CC) $(CFLAGS) -c $< -o $@

norm:
				@norminette $(SRCS)

clean:
				@echo "$(PURPLE)push_swap$(RESET)"
				@make -sC $(LIBFT_PATH) clean
				@$(RM) $(OBJS)
				@echo "$(RED)||$(RESET)"
				@echo "$(RED)  sources.o deleted$(RESET)\n"

fclean: clean
				@echo "$(PURPLE)push_swap$(RESET)"
				@echo "$(PURPLE)  DELETING   $(DG_DELETING)$(RESET)"
				@make -sC $(LIBFT_PATH) fclean
				@$(RM) $(NAME)
				@echo "$(RED)  DELETED   $(DG_END)$(RESET)\n"

re: fclean all

.PHONY: all, clean, fclean, re
