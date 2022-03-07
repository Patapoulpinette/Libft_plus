# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dbouron <dbouron@student.42lyon.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/12 18:07:46 by dbouron           #+#    #+#              #
#    Updated: 2022/03/07 17:52:01 by dbouron          ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

# **************************************************************************** #
#                               FILES and PATHS                                #
# **************************************************************************** #

HEADFILES = 	./headfiles/libft.h \
				./headfiles/ft_printf.h

SRC_CHARACTERS =	ft_isalnum.c \
					ft_isalpha.c \
					ft_isascii.c \
					ft_isdigit.c \
					ft_isprint.c \
					ft_putchar.c \
					ft_putchar_fd.c \
					ft_tolower.c \
					ft_toupper.c \
					ft_itoa.c

SRC_STRINGS =		ft_strchr.c \
					ft_strdup.c \
					ft_striteri.c \
					ft_strjoin.c \
					ft_strlcat.c \
					ft_strlcpy.c \
					ft_strlen.c \
					ft_strmapi.c \
					ft_strncmp.c \
					ft_strnstr.c \
					ft_strrchr.c \
					ft_strtrim.c \
					ft_substr.c \
					ft_putstr.c \
					ft_putstr_fd.c \
					ft_putendl_fd.c \
					ft_split.c \
					ft_strdel.c

SRC_NUMBERS =		ft_putnbr.c \
					ft_putnbr_base.c \
					ft_putnbr_fd.c \
					ft_atoi.c

SRC_MEMORY =		ft_memset.c \
					ft_memmove.c \
					ft_memcpy.c \
					ft_memcmp.c \
					ft_memchr.c \
					ft_bzero.c \
					ft_calloc.c

SRC_LISTS =			ft_lstnew.c \
					ft_lstadd_front.c \
					ft_lstsize.c \
					ft_lstlast.c \
					ft_lstadd_back.c \
					ft_lstdelone.c \
					ft_lstclear.c \
					ft_lstiter.c \
					ft_lstmap.c

SRC_PRINTF =		ft_printf.c \
					ft_printf_utils_1.c \
					ft_printf_utils_2.c

SRCS = 				$(addprefix ./characters/,${SRC_CHARACTERS}) \
					$(addprefix ./strings/,${SRC_STRINGS}) \
					$(addprefix ./numbers/,${SRC_NUMBERS}) \
					$(addprefix ./memory/,${SRC_MEMORY}) \
					$(addprefix ./lists/,${SRC_LISTS}) \
					$(addprefix ./ft_printf/,${SRC_PRINTF})

# **************************************************************************** #
#                                    COLORS                                    #
# **************************************************************************** #

BLACK			=	\033[0;30m
RED				=	\033[0;31m
GREEN			=	\033[0;32m
ORANGE			=	\033[0;33m
BLUE			=	\033[0;34m
PURPLE			=	\033[0;35m
CYAN			=	\033[0;36m
LIGHT_GRAY		=	\033[0;37m
DARK_GRAY		=	\033[1;30m
LIGHT_RED		=	\033[1;31m
LIGHT_GREEN		=	\033[1;32m
YELLOW			=	\033[1;33m
LIGHT_BLUE		=	\033[1;34m
LIGHT_PURPLE	=	\033[1;35m
LIGHT_CYAN		=	\033[1;36m
WHITE			=	\033[1;37m
NO_COLOR		=	\033[0m

# **************************************************************************** #
#                              COMMANDS and RULES                              #
# **************************************************************************** #

.SILENT:

OBJS = $(SRCS:.c=.o)

%.o: $(SRCS) $(HEADFILES)
	gcc -Wall -Werror -Wextra -o $@ -c $<
	@printf "\033[2K\r$(CYAN)Lowding...$(RESET)"

$(NAME) : $(OBJS)
	ar rcs $(NAME) $(OBJS)
	#@echo "\n --> libft+ compiled [√]\n"
	@printf "\033[2K\r$(LIGHT_GREEN)--> libft+ compiled [√]\n"

all : $(NAME)

clean :
	rm -rf $(OBJS)
	@echo "\n "
	@printf "\033[2K\r$(LIGHT_BLUE)--> libft+ cleaned\n"

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY: all listes clean fclean re