NAME = libftprintf.a
CC = gcc -g
RM = rm -f
FLAGS = -Wall -Wextra -Werror
OBJ_DIR = obj/
SRC_DIR = srcs/

SRCS = ft_format_character.c \
	ft_format_decimal.c \
	ft_format_u.c \
	ft_printf.c \
	ft_format_hex_low.c \
	ft_format_hex_upp.c \
	ft_format_pointer.c \
	ft_format_string.c

SRC := $(addprefix $(SRC_DIR), $(SRCS))

OBJ := $(SRC:$(SRC_DIR)%.c=$(OBJ_DIR)%.o)

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	@mkdir -p $(OBJ_DIR)
	@mkdir -p $(@D)
	$(CC) $(FLAGS) -Iincludes -c $< -o $@


$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

all: $(NAME)

clean:
	$(RM) -r $(OBJ_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re