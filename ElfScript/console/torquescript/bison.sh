#!/bin/sh
# bison -d -v -p CMD -o CMDgram.cpp CMDgram.y
bison -d -v -p CMD -o CMDgram.cpp -H CMDgram.h CMDgram.y

