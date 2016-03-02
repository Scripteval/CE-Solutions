/*
Write a program that prints out the final series of numbers where those 
ivisible by X, Y and both are replaced by “F” for fizz, “B” for buzz and “FB” 
for fizz buzz.
Input sample:

Your program should accept a file as its first argument. The file contains 
multiple separated lines; each line contains 3 numbers that are space 
delimited. The first number is the first divider (X), the second number is the 
second divider (Y), and the third number is how far you should count (N). You
may assume that the input file is formatted correctly and the numbers are valid
positive integers.

For example:
    3 5 10
    2 7 15
Output sample:
    1 2 F 4 B F 7 8 F B
    1 F 3 F 5 F B F 9 F 11 F 13 FB 15
Print out the series 1 through N replacing numbers divisible by X with “F”, 
numbers divisible by Y with “B” and numbers divisible by both with “FB”. 
Since the input file contains multiple sets of values, your output should 
print out one line per set. Ensure that there are no trailing empty spaces 
in each line you print.
Constraints:

    The number of test cases ≤ 20
    "X" is in range [1, 20]
    "Y" is in range [1, 20]
    "N" is in range [21, 100]
*/
    
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, const char * argv[]) {
    FILE *file = fopen(argv[1], "r");
    char line[1024];
    while (fgets(line, 1024, file)) {
    	int i = 0;    	
    	int numbers[3];
    	char *token = strtok(line, " "); 	
    	//Get fizzbuzz information from the line
    	while (token != NULL) {
    		numbers[i] = atoi(token);
    		token = strtok(NULL, " ");
    		++i;
    	}

    	//Fizzbuzz
    	for (i = 1; i <= numbers[2]; ++i) {
    		char fizzbuzz[100];
    		fizzbuzz[0] = '\0';
    		if (i % numbers[0] == 0)
    			strcat(fizzbuzz, "F");
    		if (i % numbers[1] == 0)
    			strcat(fizzbuzz, "B");
    		if (fizzbuzz[0] == '\0')
    			sprintf(fizzbuzz, "%d", i);
    		char *space = (i == numbers[2]) ? "" : " ";
    		strcat(fizzbuzz, space);
    		printf("%s", fizzbuzz);
    	}
    	printf("\n");
    }
    fclose(file);
    return 0;
}