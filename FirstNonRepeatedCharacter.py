"""
Write a program which finds the first non-repeated character in a string.
Input sample:

The first argument is a path to a file. The file contains strings.

For example:
	yellow
	tooth

Output sample:

Print to stdout the first non-repeated character, one per line.

For example: 
	y
	h
"""

import sys
test_cases = open(sys.argv[1], 'r')
dict = {}
for test in test_cases:
    #create dictionary with characters as the keys and integers as the values	
    dict = {key: 0 for key in test}
    for char in test:
    	dict[char] += 1
    firstkey = None
    for char in test:
    	if dict[char] == 1:
    		firstkey = char
    		break
    print(firstkey)
test_cases.close()