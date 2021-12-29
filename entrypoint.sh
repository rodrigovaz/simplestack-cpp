#!/bin/bash

BUILD_DIR=/build_dir
OUTPUT_DIR=/output_dir

cd $BUILD_DIR

g++ main.cpp -o $OUTPUT_DIR/main
chown $USER_ID:$USER_ID $OUTPUT_DIR/main