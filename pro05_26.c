//#include <stdio.h>
// //11���� �Լ�
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
//	printf("�˰� ���� ���丮���� ����? ");
//	scanf_s("%d", &n);
//	printf("%d!�� ���� %d�Դϴ�. \n", n, factorial(n));
//	return 0;
//}

//#include <stdio.h>
//int main()  //���� �ϳ���
//{
//	int i, n;
//	int result = 1;
//	printf("�˰� ���� ���丮���� ����? ");
//	scanf("%d", &n);
//	
//	for ( i = 1; i <=n; i++)
//	{
//		result *= i;
//	}
//	printf("%d!�� ���� %d�Դϴ�.\n", n, result);
//	return 0;
// 
//}

//

//#include <stdio.h>
////p 361 ���� 8��
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
//	printf("�ҵ��� �Է��Ͻÿ�(����): ");
//	scanf_s("%d",&money);
//	tex = get_tax(money);
//	printf("�ҵ漼�� %d�����Դϴ�.\n",tex);
//	return 0;
//}

#include <stdio.h>

int main()
{
	printf("���� %lf���� ȭ�� %lf�Դϴ�.\n", 36.0, c_to_f(36.0));
	return 0;
}

double c_to_f(double c_temp)
{
	return 9.0 / 5.0 * c_temp + 32;
}