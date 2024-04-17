##
## EPITECH PROJECT, 2024
## Workshop_Unit_Tests
## File description:
## Makefile
##

NAME	=	my_str_to_word_array

CC	=	gcc

RM	=	rm -f

CFLAGS	=	-W -Wall -Wextra -Werror -I./includes

FLAGSUNIT 	= 	-lcriterion --coverage

SRC_MAIN	=	src/src_main/main.c

SRC	=	$(shell find src/ -name '*.c' -not -name 'main.c')

TESTS = $(shell find tests/ -name '*.c')

OBJ	=	$(SRC:.c=.o)

OBJ_MAIN	=	$(SRC_MAIN:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJ) $(OBJ_MAIN)
	$(CC) -o $(NAME) $(OBJ) $(OBJ_MAIN) $(CFLAGS)

clean:
	$(RM) $(OBJ) $(OBJ_MAIN)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

tests_run:
	gcc -o unit_tests $(TESTS) $(SRC) $(FLAGSUNIT) $(CFLAGS)
	./unit_tests && gcovr --exclude tests/ && gcovr --branche --exclude tests/

tests_clean: clean
	$(RM) *.gcda *.gcno

tests_fclean: tests_clean fclean
	$(RM) unit_tests

tests_re: tests_fclean tests_run

.PHONY:	all clean fclean re tests_run tests_clean tests_fclean tests_re
