#!/usr/bin/env bash
set -e

cmake -DCMAKE_CXX_COMPILER=clang++ ..
make
./blockchain
