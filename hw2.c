#include <stdio.h>
int main(void)
{
	//3���� ���� Ȯ�� ����

	float km;
	printf("Please enter kilometers: ");
	scanf("%f", &km);

	printf("%.1f km is equal to %.1f miles.", km, km / 1.609);
	return 0;
}