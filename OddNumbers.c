/*
Print the odd numbers from 1 to 99.
Input sample:

There is no input for this program.
Output sample:

Print the odd numbers from 1 to 99, one number per line. 
*/

#include <stdio.h>

int main(int argc, const char * argv[]) 
{
	for (int i = 1; i < 100; ++i)
		if (!(i % 2 == 0))
			printf("%d\n", i);
	return 0;
}