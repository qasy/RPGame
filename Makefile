#	https://narodstream.ru/c-urok-34-make-funkcii-i-peremennye/ 
#	описание makefile, также есть в 20 уроке

CC = g++
APP = main
SRC_DIR = ./
INC_DIR = ./

src_files := $(wildcard $(SRC_DIR)*.cpp)
obj_files := $(addsuffix .o, $(basename $(notdir $(src_files))))


all: $(obj_files)
	$(CC) -o $(APP) $^


define build-obj
	$(CC) -g -Wall -c $<
endef

%.o: $(SRC_DIR)%.cpp $(INC_DIR)%.hpp
	$(call build-obj)

clean:
	rm -rf *.o