CFLAGS = -Wall -Wextra -Werror
FILES =ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c ft_strlen.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strcmp.c ft_memset.c ft_memchr.c ft_memcpy.c ft_memmove.c ft_memcmp.c ft_bzero.c ft_strlcpy.c ft_strlcat.c ft_strnstr.c ft_atoi.c ft_substr.c ft_strjoin.c ft_strtrim.c
#FILES = *.c
PRE = ./srcs/
SRCS = $(addprefix $(PRE), $(FILES))
OBJS = $(SRCS:.c=.o)
NAME = libft.a

$(NAME): $(OBJS)
	ar r    $(NAME) $(OBJS)

all: $(NAME)

.c.o:
	$(CC) $(CFLAGS) -c  $<  -o $@  -I./includes


clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)

re:	fclean all

.PHONY:	clean fclean re all
