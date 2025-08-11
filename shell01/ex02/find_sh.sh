#!/bin/bash

#Finds files with .sh extension and show only their name without the extension or path

#need to fix when theres a ".sh" in the middle of the name of the file
find -type f -name "*.sh" -printf '%f\n' | sed 's/\.sh$//g'
