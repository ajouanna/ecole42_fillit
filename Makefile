NAME = fillit
SRC = .
INC = .
OBJ = .
LIST_SRC = $(SRC)/fillit.c
LIST_OBJ = $(LIST_SRC:$(SRC)/%.c=$(OBJS)/%.o)
CFLAG = -Wall -Wextra -Werror
LIBFT = ../libft/
INC_LIBFT  = $(LIBFT)

all : $(NAME)

$(NAME) : $(LIST_SRC)
		gcc $(CFLAG) -I $(INC) -I $(INC_LIBFT) -L$(LIBFT) -lft \
			$(LIST_SRC)  -o $(NAME)

clean :
		/bin/rm -f  $(LIST_OBJ)

fclean : clean
		/bin/rm -f $(NAME)

re : fclean all
