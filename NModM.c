/* Sample code to read in test cases: */
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
    return 0;
}

long mod(long n, long m)
{
    return n - (m * (long)floor(n/m));
}