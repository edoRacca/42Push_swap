### VARIABLES ###

NAME = push_swap
FT_PRINTF = libftprintf.a
DIR = src/
FILES = ft_main.c ft_push_swap.c ft_check_err.c ft_print_move_s.c ft_print_move_p.c \
	ft_print_move_r.c ft_print_move_rr.c ft_stack_func.c ft_moves_s.c ft_moves_p.c \
	ft_moves_r.c ft_moves_rr.c ft_sort_3.c ft_check_sorted.c ft_sort_all.c \
	ft_stack_func_2.c
SRC = $(addprefix $(DIR), $(FILES))
CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf
AR = ar rcs
INCLUDE = -I include

OBJ = $(SRC:.c=.o)


### COLORS ###

DEF_COLOR = \033[0;39m
GRAY = \033[0;90m
RED = \033[0;91m
GREEN = \033[0;92m
YELLOW = \033[0;93m
BLUE = \033[0;94m
MAGENTA = \033[0;95m
CYAN = \033[0;96m
WHITE = \033[0;97m

### FUNCTIONS ###

all: $(NAME)

$(NAME): start $(OBJ)
	@make -C ft_printf
	$(CC) $(CFLAGS) $(OBJ) $(INCLUDE) ft_printf/$(FT_PRINTF) -o $(NAME)

clean:
	@echo "$(CYAN)Oh no, a lot of tr4sh!1!$(DEF_COLOR)"
	@sleep 1
	@make clean -C ft_printf
	$(RM) $(OBJ)
	@echo "$(RED)All objects removed!$(DEF_COLOR)"

fclean: clean
	@make fclean -C ft_printf
	$(RM) $(NAME)
	@echo "$(RED)And also executables!$(DEF_COLOR)"

re: fclean all

start:
	@echo "$(YELLOW)Ok, let's compile $(NAME) project!$(DEF_COLOR)"
	@sleep 1

.PHONY: all clean fclean re
