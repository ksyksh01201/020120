//#include <stdio.h>
//int main()
//{
//	int temperature = 20;
//	do
//	{
//		printf("현재 온도 : %d도\n", temperature);
//		temperature--;
//	} while (temperature > 20);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int number;
//	int count = 0;
//	printf("숫자를 입력 : ");
//	scanf("%d", &number);
//	while (number != 0)
//	{
//		number /= 10;
//		count++;
//	}
//	printf("입력한 숫자의 개수는 %d\n", count);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int number;
//
//	printf("숫자를 여러 개 입력: ");
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
	printf("숫자를 여러 개 입력: ");
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

