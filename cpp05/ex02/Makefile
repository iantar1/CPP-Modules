NAME = form

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98


SRC = main.cpp Bureaucrat.cpp AForm.cpp PresidentialPardonForm.cpp  RobotomyRequestForm.cpp  ShrubberyCreationForm.cpp

OBJ = ${SRC:.cpp=.o}

%.o: %.cpp %.hpp
	${CXX} ${CXXFLAGS} -c $< -o $@

${NAME}: ${OBJ}
	${CXX} ${CXXFLAGS} ${OBJ} -o ${NAME}

all: ${NAME}

clean:
	rm -f ${OBJ}

fclean: clean
	rm -f ${NAME}

re: fclean all