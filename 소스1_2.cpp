//#include <stdio.h>
//int main()
//{  //�Է��� Ƚ����ŭ �ݺ��ϴ� ���
//	int count;
//	int number;
//	printf("�ݺ��� Ƚ���� �Է��ϼ��� :");
//	scanf("%d", &count);
//	for ( number = 0; number < count; number++)
//	{  //���ǽĿ� number < �Է��� �� �� �־� Ƚ����ŭ �ݺ�
//		//for(number = 1; number <= count; number++)�� ����
//		printf("�߾� ");
//	}
//	printf("\n");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{   // ����: 10~99�� �� �ڸ� ���ڸ� ��� ����϶�.
//  	int number;
//	for ( number = 10; number <=99 ; number++)
//	{
//		printf("%d\n", number);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{ 
//	// ����: 3~8������ ���ڸ� ��� ���� ���� ���
//	int result = 1;
//	for (int i = 3; i <=8; i++)
//	{
//		result *= i;
//	}
//	printf("3���� 8������ ���ڸ� ��� ���� ��: %d", result);
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{    // ����: 1~50 ������ 369���ӿ��� �ڼ��� �ľ��ϴ� ���ڸ� ��� ��� 
//	int i;
//	for (i = 1; i <=50 ; i++)
//	{
//		int tens = i / 10;
//		int ones = i % 10;
//
//		if(tens && tens %3==0 || ones && ones % 3 == 0)
//		//if (tens == 3 || tens == 6 || tens == 9 || ones == 3 || ones == 6 || ones == 9)
//		{
//			printf("%d (�ڼ�)\n", i);
//		}
//	}
//	
//	return 0;
//}

//#include <stdio.h>
//int main()
//{ 
//	int number;
//	printf("100 ������ �������� ����մϴ�\n"); //�������� �ڿ����� �����Ͽ� ���� ��
//	for ( number = 1; (number*number) <=100 ; number++)
//	{ //���ǽĿ� ������ ���ԵǾ �ȴ�.
//		printf("%d\n", number*number);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int number;
//	for ( number = 7; number <=100 ; number+=7)
//	{ //���������� ++�� --�� �ƴϾ �ȴ�.
//		printf("%d\n",number);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char input;
//	for (;;)
//	{ //���ǹ��� ���� ������ ���ѹݺ��� �ǹǷ� ;;�� �־�� �Ѵ�.
//		scanf("%c", &input);
//		switch (input)
//		{
//		case 's':
//			printf("START GAME");
//			break;
//		case 'e':
//			printf("EXIT GAME");
//			return 0; //e �Է� �� ���α׷� ���� //main�ȿ��� return�� ���α׷��� ����ȴ�.
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int exitFor, number;
//	printf("1���� 10���� ���� �� ��� : ");
//	for ( number = 10, exitFor = number-1;
//		exitFor; number *= exitFor, exitFor--)
//	{
//		//�ʱ�ȭ�� �����Ŀ� ���� ���� �ڵ尡 �� �� �ִ�.
//		//���ǽĿ� ���� �ϳ��� ���� 0�̵ɶ� �ݺ��� �����.
//		//{}�ȿ� �ڵ尡 ��� ���ǹ��� �������� ����ȴ�.
//	}
//	printf("%d\n", number);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	printf("1���� 10���� ���� �� ��� : "); 
//	for (int number = 10, int exitFor = number-1;  //���� ������ for�� ���ο��� �ϸ�
//		exitFor; number *= exitFor,exitFor--) //for�� ���ο����� ������ �����ϰ� �ȴ�.
//	{                                            
//	}
//	printf("%d\n", number);  //������ for�� �ۿ����� ��� �Ұ��� //(if���̳� while���� ����)
//	
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int count;
//	for ( count = 0; count < 5; count++)  //for()���� ;�� ���� �ʵ��� ��������.
//	{                                     //while�̳� if, else if�� ��������.
//		printf("%d\n", count);            //�� do- while���� ;�� �����Ѵ�.                         
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{   //����: 200 ������ 11�� ����� ��� ���.
//	int i;
//	for (i = 11; i <=200; i+=11)
//	{
//		printf("%d\n", i);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{  //����: ���簢�� �ѷ��� 21�����϶� sqline ���� ��� ���
//	float sqLine;  
//	for  (sqLine = 0.1; sqLine * 4 <=21; sqLine += 0.1)
//	{
//		printf("sqLine : %.1f, perimeter: %.1f\n", sqLine, sqLine * 4);
//	}
//	return 0;
//} 

//#include <stdio.h>
//int main()
//{
//	printf("1�� 1��\n");
//	printf("1�� 2��\n");
//	printf("1�� 3��\n");
//	printf("2�� 1��\n");
//	printf("2�� 2��\n");
//	printf("2�� 3��\n");
//	
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int myClass = 1;
//	int student = 1;
//	printf("%d�� %d��\n", myClass, student); student++;
//	printf("%d�� %d��\n", myClass, student); student++;
//	printf("%d�� %d��\n", myClass, student); student++;
//	myClass++; student = 1; //�й� �ʱ�ȭ
//	printf("%d�� %d��\n", myClass, student); student++;
//	printf("%d�� %d��\n", myClass, student); student++;
//	printf("%d�� %d��\n", myClass, student); student++;
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int myClass = 1;
//	int student;
//	for ( student = 1; student <=3 ; student++)
//	{
//		printf("%d�� %d��\n", myClass, student);
//	} //student++�� for�� ()�ȿ� ����
//	myClass++; //�ʱ�ȭ�� for�� ()�ȿ� ����
//	for ( student = 1; student <=3; student++)
//	{
//		printf("%d�� %d��\n", myClass, student);
//	}
//	return 0;
//
//}

//#include <stdio.h>
//int main()
//{
//	int myClass;
//	int student;
//	for (myClass = 1; myClass <=2 ; myClass++)
//	{  //myClass++�� �ٱ� for��()�ȿ� ����
//		for ( student = 1; student <=2 ; student++)
//		{
//			printf("%d�� %d��\n", myClass, student);
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int myClass;
//	int student;
//	for ( myClass = 1; myClass <=8 ; myClass++)
//	{
//		for (student = 1; student <=30 ; student++)
//		{
//			printf("%d�� %d��\n", myClass, student);
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int grade;
//	int myClass;
//	int student;
//	for (grade = 1; grade <=3 ; grade++)
//	{
//		for (myClass = 1; myClass <=8; myClass++)
//		{
//			for (student = 1; student <=30 ; student++)
//			{
//				printf("%d�г� %d�� %d��\n", grade, myClass, student);
//			}
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{  //����: �������� ���
//	int i, j;
//	for (i = 2; i <=9 ; i++)
//	{
//		for (j = 1; j <=9; j++)
//		{
//			printf("%d*%d=%d\n", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

#include <stdio.h>
int main()
{  //����: �������� ���
	int i, j;
	for (i = 1; i <= 9; i++)
	{
		for (j = 2; j <= 9; j++)
		{
			printf("%2dX%2d=%2d", j, i, j* i);
		}
		printf("\n");
	}
	return 0;
}