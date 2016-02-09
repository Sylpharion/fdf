# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smassand <smassand@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/03/09 11:55:41 by smassand          #+#    #+#              #
#    Updated: 2015/11/24 14:52:16 by smassand         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= fdf
CC=	gcc
CFLAGS=	-Wall -Wextra -Werror -I libft -L libft -lft -L minilibx_macos -lmlx 
		-framework OpenGL -framework AppKit
AR=	ar -rcs
COLOR_BLACK=\033[30m
COLOR_RED=\033[31m
COLOR_GREEN=\033[32m
COLOR_YELLOW=\033[33m
COLOR_BLUE=\033[34m
COLOR_PINK=\033[35m
COLOR_CYAN=\033[36m
COLOR_WHITE=\033[37m
COLOR_CANCEL=\033[0m

SRC=		fdf.c

OBJ=		$(SRC:.c=.o)

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
