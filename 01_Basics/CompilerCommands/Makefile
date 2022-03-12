DEBUG_FLAGS = -g3 -O0
RELEASE_FLAGS = -DNDEBUG -O3

FLAGS = $(RELEASE_FLAGS)

preprocess:
	g++ $(FLAGS) -E Function2.cc > Temp.cc

assemble:
	g++ $(FLAGS) -S Function2.cc

compile:
	g++ $(FLAGS) -c Function2.cc -o Function2.o

build:
	g++ $(FLAGS) Function2.o -o Function2

print_exe:
	objdump -CS Function2
