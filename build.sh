#!/bin/bash

# variables
TARGET="./executable/lerp"

CFLAGS="-std=c++11 -I./include `pkg-config --cflags SDL2 SDL2_gfx`"
LIBFLAGS="-std=c++11 `pkg-config --libs SDL2 SDL2_gfx`"


SOURCES=(
    main
    core/Application
    core/ApplicationState
    core/Clock
    core/Window
    core/Event
    render/Render
    render/renderables/Line
    render/renderables/Rectangle
    render/renderables/Circle
    render/renderables/Triangle
    utility/Vector2D
    utility/Color
)


# compile sources
printf "\nCompiling Source Files...\n\n"

for sourcefile in ${SOURCES[@]}; do
    # extract sourcename
    IFS='/'
    splitsource=(${sourcefile})
    sourcename=${splitsource[${#splitsource[@]} - 1]}
    unset IFS

    # compile sourcefile into object file
    printf "clang++ -c ${CFLAGS} ./src/${sourcefile}.cpp -o ./obj/${sourcename}.o\n"
    clang++ -c ${CFLAGS} ./src/${sourcefile}.cpp -o ./obj/${sourcename}.o
done


# link objects
printf "\nLinking Object (.o) Files & Building Executable Target...\n\n"
printf "clang++ ${LIBFLAGS} ./obj/* -o ${TARGET}\n\n"
clang++ ${LIBFLAGS} ./obj/* -o ${TARGET}