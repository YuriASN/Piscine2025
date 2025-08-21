NAME = libft.a

CC = cc
FLAGS = -Wall -Wextra -Werror

INCLUDED = includes/
SRCD = srcs/

FILES =  ft_putchar.c \
		ft_swap.c \
		ft_putstr.c \
		ft_strlen.c \
		ft_strcmp.c
SRC = $(addprefix $(SRCD), $(FILES))
OBJ = $(FILES:%.c=%.o)
INCLUDE = ft.h

all: $(NAME)

$(NAME): $(SRCD) $(SRC)
	$(CC) -c $(SRC) -I$(INCLUDED)
	mv $(OBJ) $(SRCD)
	ar rcs $(NAME) $(addprefix $(SRCD), $(OBJ))

clean:
	rm $(addprefix $(SRCD), $(OBJ))

fclean: clean
	rm $(NAME)

re: fclean all