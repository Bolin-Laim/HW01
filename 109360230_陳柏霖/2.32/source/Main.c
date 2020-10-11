#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void)
{
	float height, weight, BMI;
	printf("Enter your height(cm)¡G");
	scanf_s("%f", &height);
	printf("Enter your weight(kg)¡G");
	scanf_s("%f", &weight);
	BMI = weight / pow(height / 100,2);

	if (BMI < 18.5)
	{
		printf("you are Underweight\n");
	}
	else if (18.5 <=BMI && BMI<=24.9)
	{
		printf("you are Normal\n");
	}
	else if (25<=BMI && BMI<=29.9)
	{
		printf("you are Overweight\n");
	}
	else
	{
		printf("you are Obese\n");
	}

	system("pause");
	return 0;
}