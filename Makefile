CC = cc
CFLAGS = -Wall -Wextra -Werror
FILES =ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c ft_strlen.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strcmp.c ft_memset.c ft_memchr.c ft_memcpy.c ft_memmove.c ft_memcmp.c ft_bzero.c ft_strlcpy.c ft_strlcat.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
BONUS =ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lsiter.c
PRE = ./srcs/
PRE_BONUS = ./bonus/
SRCS = $(addprefix $(PRE), $(FILES))
SRCS_BONUS = $(addprefix $(PRE_BONUS), $(BONUS))
OBJS = $(SRCS:.c=.o)
OBJS_BONUS = $(SRCS_BONUS:.c=.o)
NAME = libft.a

$(NAME): $(OBJS)
	ar r    $(NAME) $(OBJS)

all: $(NAME)

bonus: $(OBJS) $(OBJS_BONUS)
	ar r	$(NAME) $(OBJS) $(OBJS_BONUS)

.c.o:
	$(CC) $(CFLAGS) -c  $<  -o $@  -I./includes


clean:
	rm -f $(OBJS) $(OBJS_BONUS)
fclean: clean
	rm -f $(NAME)

re:	fclean all

.PHONY:	clean fclean re all bonus
