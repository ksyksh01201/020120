//#include <stdio.h>
//int main()
//{
//	int temperature = 20;
//	do
//	{
//		printf("���� �µ� : %d��\n", temperature);
//		temperature--;
//	} while (temperature > 20);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int number;
//	int count = 0;
//	printf("���ڸ� �Է� : ");
//	scanf("%d", &number);
//	while (number != 0)
//	{
//		number /= 10;
//		count++;
//	}
//	printf("�Է��� ������ ������ %d\n", count);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int number;
//
//	printf("���ڸ� ���� �� �Է�: ");
//	scanf("%d", &number);
//	
//	while (number > 0)
//	{
//		int digit = number % 10;
//		number /= 10;
//		
//		int count = digit * 2;
//		while (count>0)
//		{
//			printf("\u2665");
//			count--;
//		}
//		printf("\n");
//	}
//	return 0;
//	
//}

#include <stdio.h>
int main()
{
	int number;
	int count = 0;
	printf("���ڸ� ���� �� �Է�: ");
	scanf("%d", &number);
	while (number != 0)
	{
		number /= 10;
		count++;
	}
	printf("%d", count);

	/*while ()
	{

	}
		while (count>0)
		{
			printf("\u2665");
			count--;
		}
		printf("\n");
	}*/
	return 0;
	
}

