#include <stdio.h>
int main()
{
	int year, result;
	printf("������ �Է�: ");
	scanf("%d", &year);
	
	result = ((year % 4 == 0) && (year % 100 != 0))
		|| (year % 400 == 0);
	printf("���� ���� = %d \n", result);
	return 0;
}