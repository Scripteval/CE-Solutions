/*
Given two integers N and M, calculate N Mod M (without using any inbuilt
modulus operator).
Input sample:

Your program should accept as its first argument a path to a filename. Each
line in this file contains two comma separated positive integers. E.g.

    20,6
    2,3

You may assume M will never be zero.
Output sample:

Print out the value of N Mod M 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
long mod(long n, long m);

int main(int argc, const char * argv[]) 
{
    FILE *file = fopen(argv[1], "r");
    char line[1024];
    while (fgets(line, 1024, file)) {
        // Do something with the line
    	char* string = strtok(line, ",\n");
    	long x = strtol(string, NULL, 10);
    	string = strtok(NULL, ",\n");
    	long n = strtol(string, NULL, 10);
    	
        printf("%ld\n", mod(x,n));

    }
    fclose(file);
    return 0;
}

long mod(long n, long m)
{
    return n - (m * (long)floor(n/m));
}