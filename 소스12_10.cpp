//#include<stdio.h>
//int main()
//{
//	int number, answer;
//	scanf("%d%d", &number, &answer);
//	if (number>answer)
//	{
//		printf("����1�� ����2���� Ů�ϴ�\n");
//	}
//	else //number <= answer �� ��� else ����
//	{
//		if (number<answer)
//		{
//			printf("����2�� ����1���� Ů�ϴ�.\n");
//		}
//		else
//		{
//			printf("����1�� ����2�� �����ϴ�.\n");
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int number, answer;
//	scanf("%d%d", &number, &answer);
//	if (number > answer)
//	{
//		printf("����1�� ����2���� Ů�ϴ�\n");
//	}
//	else if (number < answer)
//	{
//		printf("����2�� ����1���� Ů�ϴ�\n");
//	}
//	else
//	{
//		printf("����1�� ����2�� �����ϴ�.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int score = 75;
//	if (score > 90)
//	{
//		printf("������ A����Դϴ�.\n");
//	}
//	else if (score > 80)
//	{
//		printf("������ B����Դϴ�.\n");
//	}
//	else if (score > 70)
//	{
//		printf("������ C����Դϴ�.\n");
//	}
//	else if (score > 60)
//	{
//		printf("������ D����Դϴ�.\n");
//	}
//	else
//	{
//		printf("������ F����Դϴ�.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int number = -11;
//	if (number > 0)
//	{
//		printf("number�� ����Դϴ�.\n");
//	}
//	else if (number < 0)
//	{
//		printf("number�� �����Դϴ�.\n");
//	}
//	else
//	{
//		printf("number�� 0�Դϴ�.\n");
//	}
//	if (number%2 == 0) //2�� ���� �������� 0�̸� ¦��
//	{
//		printf("number�� ¦���Դϴ�.\n");
//	}
//	else //2�� ���� �������� 1�̸� Ȧ��
//	{
//		printf("number�� Ȧ���Դϴ�.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char input;
//	printf("���ڸ� �Է��ϼ��� : ");
//	scanf("%c", &input);
//	if (input =='w')
//	{
//		printf("�� ����Ű�� �Է��ϼ̽��ϴ�.\n");
//	}
//	else if (input == 'a')
//	{
//		printf("�� ����Ű�� �Է��ϼ̽��ϴ�.\n");
//	}
//	else if (input == 'd')
//	{
//		printf("�� ����Ű�� �Է��ϼ̽��ϴ�.\n");
//	}
//	else if (input == 's')
//	{
//		printf("�Ʒ� ����Ű�� �Է��ϼ̽��ϴ�.\n");
//	}
//	else
//	{
//		printf("�߸� �Է��ϼ̽��ϴ�\n");
//	}
//	return 0;
//	
//}

//#include <stdio.h>
//int main()
//{
//	int gauge;
//	printf("���ڸ� �Է��ϼ��� : ");
//	scanf("%d", &gauge);
//	if (gauge>=45 && gauge<=55)
//	{
//		printf("Perfect");
//	}
//	else if (gauge>=35 && gauge<=65)
//	{
//		printf("Excellent");
//	}
//	else
//	{
//		printf("good");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int input;
//	printf("���ڸ� �Է��ϼ��� : ");
//	scanf("%d", &input);
//	if (input %3 ==0)
//	{
//		printf("input�� 3�� ����Դϴ�\n");
//
//		if (input % 6 == 0)
//		{
//			printf("input�� 6�� ����Դϴ�\n");
//		}
//		if (input % 9 == 0)
//		{
//			printf("input�� 9�� ����Դϴ�\n");
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char command = 'i';
//	switch (command)
//	{
//	case 'i':
//		printf("������â ����\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char command = 'i';
//	switch (command)
//	{
//	case 'i':
//		printf("������â ����\n");
//	case 'm':
//		printf("����â ����\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char comand = 'm';
//	switch (comand)
//	{
//	case 'i':printf("������â ����\n");
//	case 'm':printf("����â ����\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char command = 'm';
//	switch (command)
//	{
//	case 'i': printf("������â ����\n");
//		break; //break�� ����
//	case 'm':printf("����â ����\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char command;
//	printf("Ŀ�ǵ带 �Է��ϼ��� : ");
//	scanf("%c", &command);
//	switch (command)
//	{
//	case 'i': printf("������â ����\n");
//		break; //break�� ����
//	case 'm':printf("����â ����\n");
//		break;
//	default: printf("������ ����� �����ϴ�.\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int number = 1;
//	switch (number)
//	{
//	case 1: printf("one\n"); break;
//	case 2: printf("two\n"); break;
//	case 3: printf("tree\n"); break;
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int input1, input2;
//	char oper;
//	printf("���ڸ� �Է��ϼ��� : ");
//	scanf("%d", &input1);
//	printf("��ȣ�� �Է��ϼ���(+,-,*,/,%) : ");
//	scanf(" %c", &oper); //�տ� ����
//	printf("���ڸ� �Է��ϼ��� : ");
//	scanf("%d", &input2);
//	int result;
//	
//	switch (oper)
//	{
//	case '+': result = input1 + input2;
//		break;
//	case '-': result = input1 - input2;
//		break;
//	case '*': result = input1 * input2;
//		break;
//	case '/': result = input1 / input2;
//		break;
//	case '%': result = input1 % input2;
//		break;
//	default: 
//		printf("�߸��Է��ϼ̽��ϴ�.\n");
//		return -1;
//	}
//	
//	printf("��� : %d", result);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int month;
//	printf("���ڸ� �Է��ϼ��� : ");
//	scanf("%d", &month);
//	switch (month)
//	{
//	case 1:printf("january");
//		break;
//	case 2:printf("february");
//		break;
//	case 3:printf("March");
//		break;
//	case 4:printf("april");
//		break;
//	case 5:printf("May");
//		break;
//	case 6:printf("June");
//		break;
//	case 7:printf("July");
//		break;
//	case 8:printf("August");
//		break;
//	case 9:printf("September");
//		break;
//	case 10:printf("october");
//		break;
//	case 11:printf("November");
//		break;
//	case 12:printf("december");
//		break;
//	}
//	return 0;
//}
#include <stdio.h>
int main()
{
	char command;
	printf("<, a ���� �̵�\n");
	printf(">, d ������ �̵�\n");
	scanf("%c", &command);
	switch (command)
	{
	case '<' : 
	case 'a':
		printf("�������� �̵��մϴ�.\n");
		break;
	case '>' : 
	case 'd':
		printf("���������� �̵��մϴ�.\n");
		break;
	}
	return 0;
}