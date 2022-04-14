#!/bin/bash

printf "Enter an existing class name: "

read classname

H_FILE="include/${classname}.hpp"
CPP_FILE="src/${classname}.cpp"

rm -f ./${H_FILE} ./${CPP_FILE}

printf "Probably removed ${H_FILE} & ${CPP_FILE}\n"