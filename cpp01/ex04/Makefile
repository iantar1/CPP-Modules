NAME = sed_is_for_losers

CPP = clang++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp

OBJ = ${SRC:.cpp=.o}

%.o: %.cpp
	${CPP} ${CPPFLAGS} -c $< -o $@

${NAME}:${OBJ}
	${CPP} ${CPPFLAGS} ${OBJ} -o ${NAME}

all: ${NAME}

clean:
	rm -f ${OBJ}

fclean: clean
	rm -f ${NAME}

re: fclean all