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