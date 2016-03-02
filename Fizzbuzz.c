/* Sample code to read in test cases: */
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