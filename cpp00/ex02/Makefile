NAME = account

SRC = tests.cpp Account.cpp

CPPFLAGS = -Wall -Wextra -Werror

OBJ = ${SRC:.cpp=.o}

${NAME}:${OBJ}
	@c++ ${CPPFLAGS} ${OBJ} -o ${NAME}

all:${NAME}

clean:
	@rm -f ${OBJ}

fclean:clean
	@rm -f ${NAME}

re:fclean all