CXX = g++
CXXFLAG = -Wall -Wextra -Werror
LDFLAGS = -L/opt/homebrew/opt/openssl@3

NAME = rsa_2048

SRCDIR = ./srcs
INCDIR = ./incs

SRCS =	main.cpp \
		extended_euclid.cpp \
		sq_mul.cpp
SRCS := $(addprefix $(SRCDIR)/, $(SRCS))
OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

%.o : %.cpp
	@echo "Building dependencies of $(NAME)"
	@$(CXX) $(CXXFLAG) $(LDFLAGS) -c $< -o $@

$(NAME) : $(OBJS)
	@$(CXX) $(CXXFLAG) $(LDFLAGS) $^ $@
	@echo "$(NAME) compile completed"

clean :
	@rm -f $(OBJS)	
	@echo "Removed all object files"

fclean : clean
	@rm -f $(NAME)
	@echo "Removed $(NAME)"

re : fclean all

.PHONY: all clean fclean re