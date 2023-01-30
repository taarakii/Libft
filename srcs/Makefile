CC	= cc
CFLAGS	= -Wall -Wextra -Werror
SRC	= *.c
OBJ	= $(SRC:%.c=%.o)
RM	= rm -f
AR	= ar -r
NAME	= libft.a

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

.SUFFIXES: .c .o
.c.o:
	$(CC) $(CFLAGS) -c $<

clean:	$(OBJ)
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)

re:	fclean $(NAME)

.PHONY:		all clean fclean re
