/*
The Fibonacci series is defined as: F(0) = 0; F(1) = 1; F(n) = F(n–1) + F(n–2)
when n>1. Given an integer n≥0, print out the F(n).
Input sample:

The first argument will be a path to a filename containing integer numbers, one
per line. E.g.

    5
    12

Output sample:

Print to stdout, the fibonacci number, F(n). E.g.

    5
    144
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

long fib(long i);

int main(int argc, const char * argv[]) 
{
    FILE *file = fopen(argv[1], "r");
    char line[1024];
    while (fgets(line, 1024, file)) {
    	char *string = strtok(line, "\n");
        long n = strtol(string, NULL, 10);
        if (n < 0)
        	continue;
        printf("%ld\n", fib(n));
    }
    fclose(file);
    return 0;
} 

long fib(long i)
{
	if (i == 0)
		return 0;
	if (i == 1)
		return 1;
	return fib(i - 1) + fib(i - 2);
}