#!/bin/bash

printf "Enter a new class name: "

read classname

H_FILE="include/${classname}.hpp"
CPP_FILE="src/${classname}.cpp"

touch ./${H_FILE} ./${CPP_FILE}

printf "Created ${H_FILE} & ${CPP_FILE}\n"


# TODO: write boilerplate code to the new files.