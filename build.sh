#!/bin/bash

# variables
TARGET="./executable/lerp"

CFLAGS="-I./include `sdl2-config --cflags`"
LIBFLAGS="`sdl2-config --libs`"


SOURCES=(
    main        
    Application
    ApplicationState
    Window
    Render
    Event
    Color
    Vector2D
    Line
    Rectangle
    Circle
)


# compile sources
printf "\nCompiling Source Files...\n\n"

for sourcefile in ${SOURCES[@]};
do
    printf "clang++ -c ${CFLAGS} ./src/${sourcefile}.cpp -o ./obj/${sourcefile}.o\n"
    clang++ -c ${CFLAGS} ./src/${sourcefile}.cpp -o ./obj/${sourcefile}.o
done


# link objects
printf "\nLinking Object (.o) Files & Building Executable Target...\n\n"
printf "clang++ ${LIBFLAGS} ./obj/* -o ${TARGET}\n\n"
clang++ ${LIBFLAGS} ./obj/* -o ${TARGET}