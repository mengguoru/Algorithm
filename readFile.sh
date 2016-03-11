#! /bin/bash

# read a file ---> output it line by line  && finally output its total number of line

# author  : mengguoru
# data	    : 2016/03/10

echo 'input file name'
read filename
# use temporary file to store variable's value
TEMP=temp
num=0
cat "$filename" | while read line
do
	echo "$line";
	let num+=1;
	echo $num > $TEMP
done
read num<$TEMP
echo $num
rm $TEMP