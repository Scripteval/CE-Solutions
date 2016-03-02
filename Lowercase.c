/*
Given a string write a program to convert it into lowercase.
Input sample:

The first argument will be a path to a filename containing sentences, one per
line. You can assume all characters are from the english language. E.g.

	HELLO CODEEVAL
	This is some text

Output sample:

Print to stdout, the lowercase version of the sentence, each on a new line.
E.g.

	hello codeeval
	this is some text
*/

#include <stdio.h>
#include <ctype.h>

int main(int argc, const char * argv[]) {
    FILE *file = fopen(argv[1], "r");
    char line[1024];
    while (fgets(line, 1024, file)) {
        int i = 0;
        while (line[i] != '\0')
        	putchar(tolower(line[i++]));
    }
    fclose(file);
    return 0;
}