# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dbouron <dbouron@student.42lyon.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/12 18:07:46 by dbouron           #+#    #+#              #
#    Updated: 2022/03/07 14:52:58 by dbouron          ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

# **************************************************************************** #
#                                    FILES                                     #
# **************************************************************************** #

HEADFILES = 	./headfiles/libft.h \
				./headfiles/ft_printf.h

SRC_CHARACTERS =	./characters/ft_isalnum.c \
					./characters/ft_isalpha.c \
					./characters/ft_isascii.c \
					./characters/ft_isdigit.c \
					./characters/ft_isprint.c \
					./characters/ft_putchar.c \
					./characters/ft_putchar_fd.c \
					./characters/ft_tolower.c \
					./characters/ft_toupper.c \
					./characters/ft_itoa.c

SRC_STRINGS =		./strings/ft_strchr.c \
					./strings/ft_strdup.c \
					./strings/ft_striteri.c \
					./strings/ft_strjoin.c \
					./strings/ft_strlcat.c \
					./strings/ft_strlcpy.c \
					./strings/ft_strlen.c \
					./strings/ft_strmapi.c \
					./strings/ft_strncmp.c \
					./strings/ft_strnstr.c \
					./strings/ft_strrchr.c \
					./strings/ft_strtrim.c \
					./strings/ft_substr.c \
					./strings/ft_putstr.c \
					./strings/ft_putstr_fd.c \
					./strings/ft_putendl_fd.c \
					./strings/ft_split.c \
					./strings/ft_strdel.c

SRC_NUMBERS =		./numbers/ft_putnbr.c \
					./numbers/ft_putnbr_base.c \
					./numbers/ft_putnbr_fd.c \
					./numbers/ft_atoi.c

SRC_MEMORY =		./memory/ft_memset.c \
					./memory/ft_memmove.c \
					./memory/ft_memcpy.c \
					./memory/ft_memcmp.c \
					./memory/ft_memchr.c \
					./memory/ft_bzero.c \
					./memory/ft_calloc.c

SRC_LISTS =			./lists/ft_lstnew.c \
					./lists/ft_lstadd_front.c \
					./lists/ft_lstsize.c \
					./lists/ft_lstlast.c \
					./lists/ft_lstadd_back.c \
					./lists/ft_lstdelone.c \
					./lists/ft_lstclear.c \
					./lists/ft_lstiter.c \
					./lists/ft_lstmap.c

SRC_PRINTF =		./ft_printf/ft_printf.c \
					./ft_printf/ft_printf_utils_1.c \
					./ft_printf/ft_printf_utils_2.c

SRCS = $(SRC_STRINGS) $(SRC_CHARACTERS) $(SRC_NUMBERS) $(SRC_MEMORY) \
	$(SRC_LISTS) $(SRC_PRINTF)

# **************************************************************************** #
#                                   COMMANDS                                   #
# **************************************************************************** #

OBJS = $(SRCS:.c=.o)

%.o: $(SRCS) $(HEADFILES)
	gcc -Wall -Werror -Wextra -o $@ -c $<

$(NAME) : $(OBJS)
	ar rcs $(NAME) $(OBJS)

# **************************************************************************** #
#                                    RULES                                     #
# **************************************************************************** #

all : $(NAME)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY: all listes clean fclean re