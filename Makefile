NAME = libft.a
SRCS =	ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_strlen.c ft_strlcpy.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c main.c
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