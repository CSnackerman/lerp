#!/bin/bash

# variables
TARGET="./executable/lerp"

STD="-std=c++11"
CFLAGS="-I./include `pkg-config --cflags SDL2 SDL2_gfx`"
LIBFLAGS="`pkg-config --libs SDL2 SDL2_gfx`"


SOURCES=(
    main
    core/Application
    core/ApplicationState
    core/Clock
    core/Window
    core/Event
    render/Render
    render/primitives/Line
    render/primitives/Rectangle
    render/primitives/Circle
    render/primitives/Triangle
    render/custom/Platform
    render/custom/PatrolPlatform
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
    printf "clang++ ${STD} -c ${CFLAGS} ./src/${sourcefile}.cpp -o ./obj/${sourcename}.o\n"
    clang++ ${STD} -c ${CFLAGS} ./src/${sourcefile}.cpp -o ./obj/${sourcename}.o
done


# link objects
printf "\nLinking Object (.o) Files & Building Executable Target...\n\n"
printf "clang++ ${STD} ${LIBFLAGS} ./obj/* -o ${TARGET}\n\n"
clang++ ${STD} ${LIBFLAGS} ./obj/* -o ${TARGET}