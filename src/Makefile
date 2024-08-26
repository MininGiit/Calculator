CC = gcc
CFLAGS = -Wall -Wextra -Werror -std=c11
CM = ./CalculateModule/*.c 
OBJECTS = *.o
TEST= ./tests/*.c
TEST_FLAGS = -lcheck -lpthread -lm
BUILD_DIR = build
EXEC = /build/SmartCalc.app/Contents/MacOS/SmartCalc

OS:=$(shell uname -s)
ifeq ($(OS), Linux)
  TEST_FLAGS += -lsubunit -lrt
endif

.PHONY: all clean test rebuild

all: calculate_module.a  test gcov_report install open

calculate_module.a: 
	$(CC) $(CFLAGS) -c  $(CM)
	ar rcs calculate_module.a $(OBJECTS) 
	rm -rf *.o

test: calculate_module.a
	$(CC) $(CFLAGS) $(CM) $(TEST) calculate_module.a $(TEST_FLAGS) -o test
	./test

install:
	[-d $(BUILD_DIR)] || mkdir -p $(BUILD_DIR)
	cd build && qmake6 ../SmartCalc && make -j4 

uninstall: clean
	rm -Rf $(BUILD_DIR)
	
open:
	.$(EXEC)

rebuild:
	make clean
	make all

clean: 
	rm -rf *.o *.a *.out test *.gch *.gcno *.gcda *.info report 

gcov_report: calculate_module.a
	$(CC) $(CFLAGS) --coverage $(CM) $(TEST) $(TEST_FLAGS) -o test 
	./test
	lcov -t "test" -o test_report.info -c -d .
	genhtml -o report test_report.info
	open report/index.html
	rm -rf *.o *.a  *.gch *.gcno test *.gcda

clang-format:
	clang-format -style=Google -i ./CalculateModule/*.[ch] 
	clang-format -style=Google -i ./SmartCalc/*.[ch]
	clang-format -style=Google -i ./SmartCalc/*.cpp
	clang-format -style=Google -i ./tests/*.[ch]
