#!/bin/bash

libs=-"luser32 -lopengl32 -lgdi32"
warnings="-Wno-writable-strings -Wno-format-security -Wno-deprecated-declarations -Wno-switch"
include="-Ithird_party -Ithird_party/Include "

clang++ -static $include -g src/main.cpp -ocengine.exe $libs $warnings