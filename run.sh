#!/usr/bin/env bash
cmake -DCMAKE_CXX_COMPILER=clang++ ..
make
./blockchain
