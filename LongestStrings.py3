import sys
test_cases = open(sys.argv[1], 'r')
num = 0;
array = []
for test in test_cases:
    # ignore test if it is an empty line
    # 'test' represents the test case, do something with it
    if num == 0:
    	num = int(test)
    	continue
    array.append(test)
array.sort(key = len, reverse = True)
for i in range(0,num):
	print(array[i])

test_cases.close()