#!/bin/bash

## installer of lib cc50. It's  necessary to make some psets

sudo apt-get install gcc
wget http://cc50.com.br/downloads/resources/cc50_c_library.zip
unzip cc50_c_library.zip
rm -f cc50_c_library.zip
gcc -c -ggdb -std=c99 cc50.c -o cc50.o
ar rcs libcc50.a cc50.o
chmod 0644 cc50.h libcc50.a
sudo mkdir -p /usr/local/include
sudo chmod 0755 /usr/local/include
sudo mv cc50.h /usr/local/include
sudo mkdir -p /usr/local/lib
sudo chmod 0755 /usr/local/lib
sudo mv libcc50.a /usr/local/lib
cd ..
rm -rf cc50_c_library.zip
