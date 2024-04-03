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
				ft_split.c \
				ft_strrchr.c \
				ft_tolower.c \
				ft_toupper.c \
				ft_calloc.c \
				ft_itoa.c \
				ft_strjoin.c \
				ft_strmapi.c \
				ft_substr.c \
				ft_putchar_fd.c \
				ft_putendl_fd.c \
				ft_putnbr_fd.c \
				ft_putstr_fd.c \
				ft_striteri.c \
				ft_strtrim.c \

OBJS = ${FILES:.c=.o}

FILES2 =	ft_lstnew.c \
				ft_lstadd_front.c \
				ft_lstsize.c \
				ft_lstlast.c \
				ft_lstadd_back.c \
				ft_lstdelone.c \
				ft_lstclear.c \
				ft_lstiter.c \
				ft_lstmap.c \

OBJS2 = ${FILES2:.c=.o}

.c.o:		 
				@${CC} ${FLAGS} -c $< -o ${<:.c=.o}

${NAME}:		 ${OBJS}
				@$(AR) rc ${NAME} ${OBJS}

all:				 $(NAME)

clean:
		@$(RM) $(OBJS) $(OBJS2)

fclean: clean
		@$(RM) $(NAME)

re: clean all

bonus: ${OBJS} ${OBJS2}
				@$(AR) rc ${NAME} ${OBJS} ${OBJS2}
