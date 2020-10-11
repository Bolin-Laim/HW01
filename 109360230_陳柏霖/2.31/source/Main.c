#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void)
{
	int i;
	printf("number\tsquare\tcube\n");
	for (i = 1; i <= 10; i++)
	{
		printf("%d\t%.f\t%.f\n", i, pow(i, 2), pow(i, 3));
	}

	system("pause");
	return 0;
}