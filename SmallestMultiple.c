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
    return 0;
}