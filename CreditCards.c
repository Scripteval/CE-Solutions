#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) 
{
	FILE *file = fopen(argv[1], "r");
	char line[1024];
	while (fgets(line, 1024, file)) {
		long totalnum = 0;
		char *string = strtok(line, " \n");
		while (string != NULL) {
			for (int i = 0; i < 4; ++i) {
				if (i == 0 || i == 2)
					totalnum += 2 * (string[i] - '0');
				else
					totalnum += string[i] - '0';
			}
			string = strtok(NULL, " \n");
		}
		char *real_or_fake = (totalnum % 10 == 0) ? "Real" : "Fake";
		printf("%s\n", real_or_fake);
	}
	return 0;
}