//#include <stdio.h>
//int main() {
//	int number, temp, mul = 1;
//	printf("���ڸ� �Է� : ");
//	scanf("%d", &number);
//
//	temp = number;
//	while (temp >= 10)
//	{
//		mul *= 10;
//		temp /= 10;
//	}
//	while (mul > 0)
//	{
//		int digit = (number / mul);
//		int count = digit * 2;
//
//		while (count > 0)
//		{
//			printf("\u2665");
//			count--;
//		}
//		printf("\n");
//		number = number % mul; 
//	
//
//		mul /= 10;
//
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int input;
//	enum {GAMEOVER, NEWGAME, LOADGAME, OPTION};
//	do
//	{
//		printf("\n�޴��� �����ϼ���.\n");
//		printf("1.�� ���� 2. �̾��ϱ� 3.�ɼ� (0:��������)\n");
//		scanf("%d", &input);
//
//		switch (input)
//		{
//		case NEWGAME:
//			printf("�� ���� ����\n");
//			break;
//		case LOADGAME:
//			printf("���̺� ������ �ε�\n");
//				break;
//		case OPTION:
//			printf("�ɼ� ����\n");
//			break;
//		}
//	} while (input != GAMEOVER);
//	printf("������ �����մϴ�\n");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int select;
//	do
//	{
//		printf("\n����� �������̽� ����\n");
//		printf("1. �α���\n");
//		printf("2. ȸ������\n");
//		printf("3. �ɼ�\n");
//		printf("4. ���� �����\n");
//		printf("select: ");
//		scanf("%d", &select);
//
//		switch (select)
//		{
//		case 1:
//			printf("�α����� �����߽��ϴ�.\n"); break;
//		case 2:
//			printf("ȸ�������� �����߽��ϴ�.\n"); break;
//		case 3:
//			printf("�ɼ��� �����߽��ϴ�.\n"); break;
//		case 4:
//			printf("���������� �����߽��ϴ�.\n"); break;
//		
//		}
//
//
//	} while (select>=1 && select <=4);
//	printf("���α׷��� �����մϴ�.\n"); 
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int command;
//	int day = 0;
//	int study = 0;
//	do
//	{
//		printf("\n%d��° ��!\n", ++day);
//		printf("������ ���ұ��?\n");
//		printf("1.�ڵ������Ѵ�.\n");
//		printf("�� ��. ������.\n >> ");
//		scanf("%d", &command);
//		if (command != 1) break;
//
//		int randInt = rand() % 5 + 1;
//		switch (randInt)
//		{
//		case 1:
//			printf("����� ���׿�.\n");
//		case 3:
//			printf("���������� ");break;
//		case 2:
//			printf("����� ������.\n");
//		case 4:
//			printf("ī�信�� ");break;
//		case 5:
//			printf("�п����� ");
//
//	 }
//		printf("�ڵ������մϴ�\n");
//		study++;
//	} while (1);
//	if (day <= 3)
//	{
//		printf("�״�� �Դϴ�...\n");
//	}
//	else
//	{
//		int level = study / 8;
//		switch (level)
//		{
//		case 0:
//			printf("�ڵ������� �Ǿ����ϴ�!\n");
//			break;
//		case 1:
//			printf("���α׷��Ӱ� �Ǿ����ϴ�!\n");
//			break;
//		case 2:
//			printf("����Ʈ �����ڰ� �Ǿ����ϴ�!\n");
//			break; 
//		case 3:
//			printf("��ص� �����ڰ� �Ǿ����ϴ�!\n");
//			break;
//		default:
//			printf("Ǯ���� �����ڰ� �Ǿ����ϴ�.\n");
//			break;
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int command;
//	int day = 0;
//	int study = 0;
//	int rest = 0;
//	int hobby = 0;
//
//	do
//	{
//		printf("\n%d��° ��!\n", ++day);
//		printf("������ �� �ұ��?\n");
//		printf("1. �ڵ����� �Ѵ�.\n");
//		printf("2. ����.\n");
//		printf("3. ��̻�Ȱ �Ѵ�.\n");
//		printf("�׿�. ������.\n >> ");
//		scanf("%d", &command);
//
//		if (command != 1 && command != 2 && command != 3) break;
//		if (command ==1)
//		{
//			int randInt = rand() % 5 + 1;
//			switch (randInt)
//			{
//			case 1:
//				printf("����� ���׿�.\n");
//			case 3:
//				printf("����������.\n"); break;
//			case 2:
//				printf("����� ������.\n");
//			case 4:  
//				printf("ī�信��.\n");break;
//			case 5:
//				printf("�п�����.\n");
//				
//			}
//			printf("�ڵ������մϴ�.\n");
//			study++;
//		}
//		else if (command ==2)
//		{
//			printf("�Ϸ� ���� �޽��� ���߽��ϴ�.\n");
//			rest++; 
//		}
//		else if (command ==3)
//		{
//			printf("��̻�Ȱ�� �����ϴ�.\n");
//			hobby++; 
//		}
//	} while (1);
//	if (day <=3)
//	{
//		printf("�״�� �Դϴ�..\n");
//	}
//	else if (study > rest && study > hobby)
//	{ 
//		int level = study / 8;
//		switch (level)
//		{
//		case 0:
//			printf("�ڵ������� �Ǿ����ϴ�!\n");break;
//		case 1:
//			printf("���α׷��Ӱ� �Ǿ����ϴ�!\n");break;
//		case 2:
//			printf("����Ʈ�ص� �����ڰ� �Ǿ����ϴ�!\n");break;
//		case 3:
//			printf("��ص� �����ڰ� �Ǿ����ϴ�!\n");break;
//		default:
//			printf("Ǯ���� �����ڰ� �Ǿ����ϴ�!\n");break;
//
//		}
//	
//	}
//	else if (rest > study && rest > hobby)
//	{
//		printf("�޽� �������� �Ǿ����ϴ�.\n");
//
//	}
//	else if (hobby > study && hobby > rest)
//	{
//		printf("��� �����Ͱ� �Ǿ����ϴ�\n");
//	}
//	else
//	{
//		printf("���� ���� ���� ��ҽ��ϴ�!\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int sheep;
//	for (sheep = 0; sheep<5; sheep++)
//	{
//		printf("�� %d����\n",sheep);
//	}
//	printf("������!\n");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int sheep;
//	for (sheep = 0; sheep < 5; sheep++)
//	{
//		printf("�� %d����\n", sheep);
//		if (sheep == 3)
//		{
//			printf("���߿� ������!\n");
//			break;
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int sheep;
//	for (sheep = 0; sheep <5 ; sheep++)
//	{
//		if (sheep == 3) {
//			printf("���Ƽ� ���� ���� ���ߴ�!\n");
//			continue;
//		}
//		printf("�� %d����\n", sheep);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int sheep;
//	for (sheep = 1; sheep <= 20; sheep++)
//	{
//		printf("�� %d����\n", sheep);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int sheep;
//	for (sheep = 1; sheep <=50; sheep++)
//	{
//		if (sheep % 10 == 0) {
//			printf("�� %d����...���� ���ҽ��ϴ�.\n", sheep);
//		}
//		
//		if (sheep == 45)
//		{
//			printf("�� %d����...�������ϴ�.\n", sheep);
//			break;
//		}
//		printf("�� %d����\n", sheep);
//	}
//	
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int round;
//	for (round = 0; round < 10; round++)
//	{
//		printf("���� %d\n", round);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int round;
//	for (round = 1; round <= 10; round++)
//	{
//		printf("���� %d\n", round);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int count;
//	for (count = 101; count < 111; count++)
//	{
//		printf("����Ʈ %d��\n", count);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int number;
//	int sum_number = 0;
//	for (number = 1; number <=20; number++)
//	{
//		sum_number = sum_number + number;
//	}
//	printf("���� %d\n", sum_number);
//	return 0;
//}


