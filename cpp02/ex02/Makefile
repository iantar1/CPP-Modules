NAME = ocf

CPP = c++

CPPFLAGS = -Wall -Werror -Wextra -std=c++98

SRC = main.cpp Fixed.cpp 

%.o: %.cpp
	${CPP} ${CPPFLAGS} -c $< -o $@

OBJ = ${SRC:.cpp=.o}


${NAME}: ${OBJ}
	${CPP} ${CPPFLAGS} ${OBJ} -o ${NAME}

all: ${NAME}

clean:
	rm -f ${OBJ}

fclean: clean
	rm -f ${NAME}

re: fclean all