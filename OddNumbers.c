/* Sample code to read in test cases: */
#include <stdio.h>

int main(int argc, const char * argv[]) 
{
	for (int i = 1; i < 100; ++i)
		if (!(i % 2 == 0))
			printf("%d\n", i);
	return 0;
}