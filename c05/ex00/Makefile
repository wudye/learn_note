
NAME = ex00

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -rf

SRC = main.cpp Bureaucrat.cpp

OBJ = ${SRC:.cpp=.o}

all: ${NAME}

${NAME}: ${OBJ}
	${CC} ${CFLAGS} ${OBJ} -o $@

%.o: %.cpp
	${CC} ${CFLAGS} -c $< -o $@

clean:
	${RM} ${OBJ}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
