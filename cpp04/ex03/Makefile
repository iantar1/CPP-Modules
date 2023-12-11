NAME = Interface

CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3

CPP = c++

SRC = main.cpp AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp 

OBJ = ${SRC:.cpp=.o}

%.o: %.cpp %.hpp
	${CPP} ${CPPFLAGS} -c $< -o $@

${NAME}: ${OBJ}
	${CPP} ${CPPFLAGS} ${OBJ} -o ${NAME}

all: ${NAME}

clean: 
	rm -f ${OBJ}

fclean: clean
	rm -f ${NAME}

re: fclean all