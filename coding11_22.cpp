//#include <stdio.h>
// //212p 6-16
//void main()
//{
//	int i, k;  // 반복할 변수 i, k를 선언한다.
//
//	for (i = 1, k = 1; i <= 9; i++, k++)//초기값과 증감식이 2개이다.
//
//		printf("%d X %d = %d\n", i, k, i * k);
//}

//#include <stdio.h>
//// 214p 6-17
//void main()
//{  
//	int i;
//	i = 0;
//	for( ; ; ) //초기값, 조건식,증감식이 아무것도 없다.
//	{
//		printf("%d \n", i);
//		i++;
//	}
//}

#include <stdio.h>

void main()
{
	int i;

	for ( i = 0; i < 128; i++)
	{
		if (i%16 == 0)
		{
			printf("---------------\n");
			printf("10진수 16진수 문자\n");
			printf("---------------\n");
		}
		printf("%5d  %5x  %5c\n", i, i, i);
	}
}