# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dbouron <dbouron@student.42lyon.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/12 18:07:46 by dbouron           #+#    #+#              #
#    Updated: 2022/03/07 16:22:33 by dbouron          ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

# **************************************************************************** #
#                                    FILES                                     #
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