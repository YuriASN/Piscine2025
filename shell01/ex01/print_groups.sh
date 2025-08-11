#!/bin/bash
#Command line that shows a list of the groups wich the 
#user defined at FT_USER belongs separated by comma and space

id -nG $FT_USER | sed 's/ /,/g' | tr -d '\n'
