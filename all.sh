#! /bin/sh

echo "############ Configure Project ###########"
./configure.sh || exit 1
echo "############ Build product ###############"
./build.sh || exit 1
echo "############### Run ######################"
./run.sh || exit 1
echo "############### Run ######################"
./test.sh || exit 1