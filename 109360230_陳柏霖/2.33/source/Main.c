#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float DayMiles, CostGasoline, PerGallonMilles, ParkingFees, Tolls, Sum;
	printf("��J�@�Ѫ����{�ơG");
	scanf_s("%f", &DayMiles);
	printf("��J�@���ɨT�o�h�֤��G");
	scanf_s("%f", &CostGasoline);
	printf("��J�@���ɨT�o�h�֤����G");
	scanf_s("%f", &PerGallonMilles);
	printf("��J�@�Ѱ����O�G");
	scanf_s("%f", &ParkingFees);
	printf("��J�@�ѳq��O�G");
	scanf_s("%f", &Tolls);

	Sum = ((DayMiles / PerGallonMilles)*CostGasoline) + ParkingFees + Tolls;
	printf("�@�Ѷ}���`��O�G%.f\n", Sum);

	system("pause");
	return 0;
}