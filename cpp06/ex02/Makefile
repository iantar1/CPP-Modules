NAME = realType

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -f

SRC = main.cpp Base.cpp A.cpp B.cpp C.cpp RealType.cpp

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
