CC=gcc
FLAGS= -Wall -Werror -Wextra -W

all: build

build: clean create_dir src/app01/main.c  src/app02/main.c  src/app03/main.c  src/app04/main.c  src/app05/main.c  src/app06/main.c  src/app07/main.c
	$(CC) $(FLAGS) src/app01/main.c -o ./build/app01
	$(CC) $(FLAGS) src/app02/main.c -o ./build/app02
	$(CC) $(FLAGS) src/app03/main.c -o ./build/app03
	$(CC) $(FLAGS) src/app04/main.c -o ./build/app04 
	$(CC) $(FLAGS) src/app05/main.c -o ./build/app05 
	$(CC) $(FLAGS) src/app06/main.c -o ./build/app06
	$(CC) $(FLAGS) src/app07/main.c -o ./build/app07

create_dir: 
	mkdir -p build

clean: 
	rm -rf build

