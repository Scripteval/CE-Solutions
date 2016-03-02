"""
Write a program which reads a file and prints to stdout the specified number of
the longest lines that are sorted based on their length in descending order.
Input sample:

Your program should accept a path to a file as its first argument. The file 
contains multiple lines. The first line indicates the number of lines you 
should output, the other lines are of different length and are presented 
randomly. You may assume that the input file is formatted correctly and the 
number in the first line is a valid positive integer.

For example:
	2
	Hello World
	CodeEval
	Quick Fox
	A
	San Francisco

Output sample:

Print out the longest lines limited by specified number and sorted by their 
length in descending order.

For example: 
	San Francisco
	Hello World
"""

import sys
test_cases = open(sys.argv[1], 'r')
num = 0;
array = []
for test in test_cases:
    # ignore test if it is an empty line
    if num == 0:
    	num = int(test)
    	continue
    array.append(test)
array.sort(key = len, reverse = True)
for i in range(0,num):
	print(array[i])

test_cases.close()