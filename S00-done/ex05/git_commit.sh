#!/bin/bash
#Bash Script to show last 5 commits only showing it's hash

git log -n 5 --pretty=%H
