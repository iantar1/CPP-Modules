NAME = ref

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

CPP = c++

SRC = main.cpp

OBJ = ${SRC:.cpp=.o}

${NAME}:${OBJ}
	${CPP} ${CPPFLAGS} ${OBJ}  -o ${NAME} 

all:${NAME}

clean:
	rm -f ${OBJ}

fclean: clean
	rm -f ${NAME}

re: fclean re
