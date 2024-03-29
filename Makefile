NAME = libft.a
SRCS =	ft_atoi.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_hextoa.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_itoa.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_putchar_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_putstr_fd.c \
		ft_split.c \
		ft_strchr.c \
		ft_strdup.c  \
		ft_striteri.c \
		ft_strjoin.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_numlem.c \
		ft_strlen.c \
		ft_strmapi.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_strtrim.c \
		ft_substr.c \
		ft_tolower.c  \
		ft_toupper.c \
		ft_uitoa.c  \
		ft_printf.c  \
		writers.c \
		writers2.c \
		
CC = gcc
OBJS = ${SRCS:.c=.o}
HEADER = ./includes/
CFLAGS = -Wall -Werror -Wextra -I ${HEADER}
RM = rm -f

${NAME} : ${OBJS}
			ar rcs ${NAME} ${OBJS}
			ranlib ${NAME}

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o} 

all: ${NAME}

clean:
				${RM} ${OBJS}

fclean: 	clean
				${RM} ${NAME}

re: 			fclean all

.PHONY:		all clean fclean re