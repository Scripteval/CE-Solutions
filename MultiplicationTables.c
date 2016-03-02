#include <stdio.h>

int main(int argc, const char *argv[])
{
	for (int i = 1; i <= 12; ++i) {
		for (int j = 1; j <= 12; ++j) {
			printf("%3d", i * j);
			if (j != 12)
				putchar(' ');
		}
		putchar('\n');
	}
}