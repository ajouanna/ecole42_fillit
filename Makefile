NAME = fillit
SRC = .
INC = .
OBJ = .
LIST_SRC = $(SRC)/ft_alloc.c \
		   $(SRC)/ft_file.c \
		   $(SRC)/ft_fillit.c 

LIST_OBJ = $(LIST_SRC:$(SRC)/%.c=$(OBJ)/%.o)
CFLAG = -Wall -Wextra -Werror
LIBFT = ../libft/
INC_LIBFT  = $(LIBFT)

all : $(NAME)

$(NAME) : $(LIST_SRC)
		gcc $(CFLAG) -I $(INC) -I $(INC_LIBFT) $(LIST_SRC) -L$(LIBFT) -lft -o $(NAME)
#		gcc $(CFLAG) -L$(LIBFT) -lft  $(LIST_OBJ)  -o $(NAME)

clean :
		/bin/rm -f  $(LIST_OBJ)

fclean : clean
		/bin/rm -f $(NAME)

re : fclean all
