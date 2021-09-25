#! /bin/sh

FILE="Makefile"

cd ./build
if [ ! -f "$FILE" ]; then
    echo "$FILE not created."
    exit
fi
make $1