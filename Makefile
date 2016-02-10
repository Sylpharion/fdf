# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#   By: smassand <smassand@student.42.fr>          +#+  +:+       +#+          #
#                                                 +#+#+#+#+#+   +#+            #
#   Created: 2016/02/02 16:08:21 by smassand          #+#    #+#               #
#   Updated: 2016/02/10 05:33:39 by smassand         ###   ########.fr         #
#                                                                              #
# **************************************************************************** #

NAME =		fdf

CC =		gcc

EXT =		.c

FLAGS =		-Wall -Wextra -Werror

FILE =		main 		\
			fdf_init	\
			fdf_parse	\
			map_color 	\
			map_hook 	\
			map_move 	\
			draw_map 	\
			draw_map_2 	\
			draw_map_3

SOURCE = 	srcs/

INCLUDE =	includes/

HEADER = 	fdf.h

FILES =		$(addprefix $(SOURCE), $(addsuffix $(EXT), $(FILE)))

OBJ = $(FILES:$(EXT)=.o)

LIB_DIR =	libft

LIB_MLX =	minilibx_macos

EXEC=		$(LIB_DIR)/$(LIB_DIR).a $(LIB_MLX)/libmlx.a

C_W=		\033[0m
C_R=		\033[38;5;124m
C_Y=		\033[38;5;214m
C_B=		\033[38;5;97m
C_N=		\033[38;5;200m
C_G=		\033[38;5;190m

all: 	$(EXEC) $(NAME) #norme

$(EXEC):
		@make -C $(LIB_DIR)
		@make -C $(LIB_MLX)
		@echo "$(C_Y)$(LIB_DIR) $(C_R)		is done !$(C_W)"
		@echo "$(C_Y)$(LIB_MLX) $(C_R)		is done !$(C_W)"

$(NAME): $(OBJ)
		@$(CC) $(FLAGS) -o $(NAME) $(OBJ) $(EXEC) -framework AppKit		\
			-framework OpenGL
		@echo "\n$(C_Y)$(NAME) $(C_R)		is done !$(C_W)"

%.o:	%$(EXT) $(INCLUDE)
		@$(CC) $(FLAGS) -c $< -o $@ -I libft
		@printf "\033[32m.$(C_W)"

clean:
		@rm -rf $(OBJ)
		@echo "$(C_B)$(NAME)$(C_R)		All obj are cleaned$(C_W)"
		@(cd $(LIB_DIR) && $(MAKE) $@)
		@(cd $(LIB_MLX) && $(MAKE) $@)
		@echo "$(C_B)$(LIB_DIR)$(C_R)		All obj are cleaned$(C_W)"

fclean: clean
		@rm -rf $(NAME)
		@echo "\n$(C_G)$(NAME)$(C_R)		is clean$(C_W)"
		@(cd $(LIB_DIR) && $(MAKE) $@)
		@echo "$(C_G)$(EXEC)$(C_R)	is clean$(C_W)\n"

norme:
	@echo "\nSource:$(C_N)"
	@norminette $(FILES)
	@echo "\n$(C_W)Header:$(C_N)"
	@norminette $(INCLUDE)$(HEADER)
	@echo "$(C_W)"
re: fclean all
