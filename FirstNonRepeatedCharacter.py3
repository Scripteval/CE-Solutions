"""Sample code to read in test cases: """

import sys
test_cases = open(sys.argv[1], 'r')
dict = {}
for test in test_cases:
    # ignore test if it is an empty line
    # 'test' represents the test case, do something with it
    dict = {}
    for char in test:
    	dict[char] = 0
    for char in test:
    	dict[char] += 1
    firstkey = None
    for char in test:
    	if dict[char] == 1:
    		firstkey = char
    		break
    print(firstkey)

test_cases.close()