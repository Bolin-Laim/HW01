#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float DayMiles, CostGasoline, PerGallonMilles, ParkingFees, Tolls, Sum;
	printf("輸入一天的里程數：");
	scanf_s("%f", &DayMiles);
	printf("輸入一公升汽油多少元：");
	scanf_s("%f", &CostGasoline);
	printf("輸入一公升汽油多少公里：");
	scanf_s("%f", &PerGallonMilles);
	printf("輸入一天停車費：");
	scanf_s("%f", &ParkingFees);
	printf("輸入一天通行費：");
	scanf_s("%f", &Tolls);

	Sum = ((DayMiles / PerGallonMilles)*CostGasoline) + ParkingFees + Tolls;
	printf("一天開車總花費：%.f\n", Sum);

	system("pause");
	return 0;
}