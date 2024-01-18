NAME = 

CXX = c++

RM = rm -f

CXXFLAGS = -Wall -Wextra -Werror -std=c++98 

SRC = main.cpp PmergeMe.cpp

OBJ = ${SRC:.cpp=.o}

%.o : %.cpp %.hpp
	${CXX} ${CXXFLAGS} -c $< -o $@

${NAME} : ${OBJ}
	${CXX} ${CXXFLAGS} ${OBJ} -o ${NAME}

all : ${NAME}

clean :
	${RM} ${OBJ}

fclean : clean
	${RM} ${NAME}

re : fclean all