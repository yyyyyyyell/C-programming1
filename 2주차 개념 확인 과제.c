#include <stdio.h>
int main(void)
{
	//2���� ���� Ȯ�� ����

	int num1, num2, num4, num5, num6;
	printf("Input two integers : ");
	scanf("%d %d", &num1, &num2);

	printf("%d & %d = %d \n", num1, num2, num1 & num2);
	printf("%d | %d = %d \n", num1, num2, num1 | num2);
	printf("%d ^ %d = %d \n", num1, num2, num1 ^ num2);
	return 0;
}