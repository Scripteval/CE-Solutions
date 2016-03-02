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