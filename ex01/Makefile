NAME = ex01

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

INCLUDES = Animal.hpp \
			Cat.hpp \
			Dog.hpp \
			WrongAnimal.hpp \
			WrongCat.hpp \
			Brain.hpp

FILES =	main \
		Cat \
		Dog \
		Animal \
		WrongAnimal \
		WrongCat \
		Brain


SRC = $(addsuffix .cpp, $(FILES))

OBJ = $(SRC:.cpp=.o)

RED =\033[1;31m
GREEN =\033[1;32m
CYAN =\033[1;36m
COLOR_OFF =\033[0m

BIGREEN=\033[1;92m

%.o : %.cpp
	@$(CC) $(CFLAGS) -c $^

all : $(NAME)

$(NAME) : $(OBJ) $(INCLUDES)
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	@echo "$(BIGREEN)$(NAME) create.$(COLOR_OFF)"

clean:
	@rm -f $(OBJ)
	@echo "$(CYAN)$(NAME) cleaned.$(COLOR_OFF)"

fclean: clean
	@rm -f $(NAME)
	@echo "$(RED)$(NAME) destroy.$(COLOR_OFF)"

re: fclean
	@make all --no-print-directory

.PHONY: all clean fclean re
