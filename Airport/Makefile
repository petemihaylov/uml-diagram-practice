CC:=gcc
target:=airport
LIBS:=-lstdc++

SRCS:=$(wildcard *.cpp)

all: clean build

build:
	@echo "<<<<<<< BUILDING ${target} >>>>>"
	@mkdir build
	@${CC} ${SRCS} ${LIBS} -o build/${target}

clean:
	@echo "<<<<<<< CLEANING ${target} >>>>>>>>"
	@rm -rf build

