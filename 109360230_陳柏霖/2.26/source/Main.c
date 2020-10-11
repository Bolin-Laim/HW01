#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a, b;
	printf("Enter two integers¡G");
	scanf_s("%d%d", &a, &b);
	if (a >= b)
	{
		if (a%b == 0)
		{
			printf("%d is a multiple of %d\n", a, b);
		}
		else
		{
			printf("%d is not a multiple of %d\n", a, b);
		}
	}
	else
	{
		if (b%a == 0)
		{
			printf("%d is a multiple of %d\n", b, a);
		}
		else
		{
			printf("%d is not a multiple of %d\n", b, a);
		}
	}
	system("pause");
	return 0;
}