#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int number, i;
	printf("Enter an integer:");
	scanf_s("%d", &number);
	i = number % 2;
	if (i == 0)
	{
		printf("The integer is even.");
	}else
	{
		printf("The integer is odd.");
	}
	system("pause");
	return 0;
}