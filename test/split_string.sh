#!/bin/bash

# IFS='/'

stringArray=(
    hello/how/are/you
    not/too/bad
)

for str in ${stringArray[@]}; do
    echo ${str}
    IFS='/'
    splitted=(${str})

    # echo ${splitted[0]}
    # echo ${#str[@]}
    echo ${splitted[${#splitted[@]} - 1]}
    IFS=''
done


# for i in ${ADDR}; do
#     echo ${i}
# done