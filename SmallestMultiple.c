/*
Given numbers x and n, where n is a power of 2, print out the smallest multiple
of n which is greater than or equal to x. Do not use division or modulo
operator.
Input sample:

The first argument will be a path to a filename containing a comma separated
list of two integers, one list per line. E.g.

    13,8
    17,16

Output sample:

Print to stdout, the smallest multiple of n which is greater than or equal to x, one per line. E.g.

    16
    32
*/
    
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char * argv[]) 
{
    FILE *file = fopen(argv[1], "r");
    char line[1024];
    while (fgets(line, 1024, file)) {
    	char* string = strtok(line, ",\n");
    	long x = strtol(string, NULL, 10);
    	string = strtok(NULL, ",\n");
    	long n = strtol(string, NULL, 10);
    	long i = 1;
    	while (n * i < x)
    		++i;
    	printf("%ld\n", n *i);
    }
    fclose(file);
    return 0;
}