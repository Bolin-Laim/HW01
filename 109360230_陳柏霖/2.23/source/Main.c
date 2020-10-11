#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a, b, c;
	printf("Enter three integers¡G");
	scanf_s("%d%d%d", &a, &b, &c);
	if (a >= b)
	{
		if (a >= c)
		{
			printf("Largest integer:%d\n", a);
			if (b >= c)
			{
				printf("Smallest integer:%d\n", c);
			}
			else
			{
				printf("Smallest integer:%d\n", b);
			}
		}
		else
		{
			printf("Largest integer:%d\n", c);
			printf("Smallest integer:%d\n", b);
		}
	}
	else//b>a
	{
		if (b >= c)
		{
			printf("Largest integer:%d\n", b);
			if (a >= c)
			{
				printf("Smallest integer:%d\n", c);
			}
			else
			{
				printf("Smallest integer:%d\n", a);
			}
		}
		else
		{
			printf("Largest integer:%d\n", c);
			printf("Smallest integer:%d\n", a);
		}
	}
	system("pause");
	return 0;
}