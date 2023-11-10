NAME = libft.a 

CC = cc

FLAGS = -Wall -Wextra -Werror

AR = ar

RM = rm -f

FILES = ft_strdup.c \
		ft_atoi.c \
		ft_bzero.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_strchr.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_calloc.c \
		ft_itoa.c \
		ft_split.c \
		ft_strjoin.c \
		ft_strmapi.c \
		ft_substr.c \

OBJS = ${FILES:.c=.o}

.c.o: 	
		${CC} ${FLAGS} -c $< -o ${<:.c=.o}

${NAME}: 	${OBJS}
		ar rc ${NAME} ${OBJS}

all: 		$(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: clean all