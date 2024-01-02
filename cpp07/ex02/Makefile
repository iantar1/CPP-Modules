NAME = array

CXX = c++

RM = rm -f

CXXFLAGS = -Wall -Werror -Wextra -std=c++98

SRC = main.cpp

%.o : %.hpp %.cpp 
	${CXX} ${CXXFLAGS} -c $< -o $@

OBJ = ${SRC:.cpp=.o}


${NAME} : ${OBJ}
	${CXX} ${CXXFLAGS} ${OBJ} -o ${NAME}

all : ${NAME}

clean :
	${RM} ${OBJ}

fclean : clean
	${RM} ${NAME}

re : fclean all
