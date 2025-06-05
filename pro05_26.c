//#include <stdio.h>
// //11주차 함수
//void print_stars()
//{
//	for (int i = 0; i < 10; i++)
//	{
//		printf("*");
//	}
//}
//int main()
//{
//	print_stars();
//	printf("\nHello World\n");
//	print_stars();
//
//	return 0;
//}

//#include <stdio.h>
//
//int factorial(int n)
//{
//	int i, result = 1;
//
//	for ( i = 1; i <=n ; i++)
//	
//		result *= i;
//		return result;
//	
//}
//int main()
//{
//	int n;
//	printf("알고 싶은 팩토리얼의 값은? ");
//	scanf_s("%d", &n);
//	printf("%d!의 값은 %d입니다. \n", n, factorial(n));
//	return 0;
//}

//#include <stdio.h>
//int main()  //메인 하나로
//{
//	int i, n;
//	int result = 1;
//	printf("알고 싶은 팩토리얼의 값은? ");
//	scanf("%d", &n);
//	
//	for ( i = 1; i <=n; i++)
//	{
//		result *= i;
//	}
//	printf("%d!의 값은 %d입니다.\n", n, result);
//	return 0;
// 
//}

//

//#include <stdio.h>
////p 361 예시 8번
//int get_tax(int income)
//{
//	int result;
//	if (income <= 1000)
//	{
//		result = income * 0.08;
//	}
//	else  
//	{
//		result = 1000 * 0.08 + (income - 1000) * 0.1;
//	}
//	return result;
//}
//
//int main(void)
//{
//	int money,tex;
//	printf("소득을 입력하시오(만원): ");
//	scanf_s("%d",&money);
//	tex = get_tax(money);
//	printf("소득세는 %d만원입니다.\n",tex);
//	return 0;
//}

#include <stdio.h>

int main()
{
	printf("섭씨 %lf도는 화씨 %lf입니다.\n", 36.0, c_to_f(36.0));
	return 0;
}

double c_to_f(double c_temp)
{
	return 9.0 / 5.0 * c_temp + 32;
}