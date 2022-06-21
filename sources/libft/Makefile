# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dgallo-p <dgallo-p@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/08 12:45:37 by dgallo-p          #+#    #+#              #
#    Updated: 2022/03/09 14:46:53 by dgallo-p         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# COLORS #
GREEN = \033[0;32m
BLUE = \033[0;34m
RED = \033[0;31m
PURPLE = \033[0;35m
CYAN = \033[0;36m
RESET = \033[1;0m

NAME        = libft.a

CC          = gcc
CFLAGS      = -Wall -Wextra -Werror
AR          = ar rcs
RM          = rm -f

SRCS        = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c \
			ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c \
			ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c \
			ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
			ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

BONUS       = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c \
				ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJS        = $(SRCS:.c=.o)

OBJSBONUS   = $(BONUS:.c=.o)

all:        $(NAME)

$(NAME):    $(OBJS)
				@$(AR) $(NAME) $(OBJS)
				@echo "$(GREEN)|$(RESET)"
				@ranlib $(NAME)
				#@echo "$(GREEN)$(NAME) created && inexed$(RESET)"
				@echo "$(GREEN)||$(RESET)"

%.o: %.c
				@$(CC) $(CFLAGS) -c $< -o $@

bonus:      $(OBJSBONUS)
				@ar rcs $(NAME) $(OBJSBONUS)

clean:
				@$(RM) $(OBJS) $(OBJSBONUS)
				#@echo "$(RED)$(NAME)/sources deleted$(RESET)"
				@echo "$(RED)|$(RESET)"

fclean: clean
				@$(RM) $(NAME)
				#@echo "$(RED)$(NAME) deleted$(RESET)"
				@echo "$(RED)||$(RESET)"

re: fclean all

.PHONY: all, clean, fclean, re
