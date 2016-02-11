# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smassand <smassand@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/03/09 11:55:41 by smassand          #+#    #+#              #
#    Updated: 2016/02/11 10:52:34 by smassand         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a
CC=	gcc
CFLAGS=	-Wall -Wextra -Werror
AR=	ar -rcs
SRC=	ft_memchr.c		ft_putnbr_fd.c		ft_striter.c	ft_strnew.c		\
		ft_atoi.c		ft_memcmp.c			ft_putstr.c		ft_striteri.c 	\
		ft_strnstr.c	ft_bzero.c			ft_memcpy.c		ft_putstr_fd.c 	\
		ft_strjoin.c	ft_strrchr.c		ft_isalnum.c	ft_memdel.c		\
		ft_strcat.c		ft_strlcat.c		ft_strsplit.c	ft_isalpha.c	\
		ft_memmove.c	ft_strchr.c			ft_strlen.c		ft_strstr.c		\
		ft_isascii.c 	ft_memset.c 		ft_strclr.c		ft_strmap.c		\
		ft_strsub.c		ft_isdigit.c		ft_putchar.c	ft_strcmp.c		\
		ft_strmapi.c	ft_strtrim.c		ft_isprint.c	ft_putchar_fd.c	\
		ft_strcpy.c		ft_strncat.c		ft_tolower.c	ft_itoa.c		\
		ft_putendl.c	ft_strdel.c			ft_strncmp.c	ft_toupper.c	\
		ft_memalloc.c	ft_putendl_fd.c		ft_strdup.c		ft_strncpy.c	\
		ft_memccpy.c	ft_putnbr.c			ft_strequ.c		ft_strnequ.c	\
		ft_isspace.c	get_next_line.c

OBJ= $(SRC:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJ)
			$(AR) $(NAME) $(OBJ)

%.o :		%.c
			$(CC) -c $^

clean:
			rm -f $(OBJ)

fclean: 	clean
			rm -f $(NAME)

re:			fclean all

.PHONY:		all fclean re
