#include <stdio.h>
//int main()
//{
//	char command;
//	printf("<, a ���� �̵�\n");
//	printf(">, b ������ �̵�\n");
//	scanf("%c", &command);
//	switch (command)
//	{
//	case '<':
//	case 'a': //case�� ������ �Ἥ ���� �ڵ� ���� ����
//		printf("�������� �̵��մϴ�.\n");
//		break;
//	case '>':
//	case 'd':
//		printf("���������� �̵��մϴ�.\n");
//		break;
//	}
//	return 0;
//}

//int main()
//{
//	int input;
//	const int Option = 3;
//	printf("�޴��� �����ϼ���.");
//	printf("1.�� ���� 2. �̾��ϱ� 3. �ɼ�\n");
//	scanf("%d", &input);
//	switch (input)
//	{
//	case 1:
//		printf("�� ���� ����\n");
//		break;
//	case 2:
//		printf("���̺� ������ �ε�\n");
//		break;
//	case Option: //���ڷ� �ϸ� �𸣱� ������ �ɼ��̶�� �������� ������
//		printf("�ɼ� ����\n");
//		break;
//	default: printf("������ ����� �����ϴ�.\n");
//	}
//	return 0;
//}

//int main()
//{
//	int number;
//	printf("0~9������ ���ڸ� �Է��ϼ���. : ");
//	scanf("%d", &number);
//	if (number<0 || number>9)
//	{
//		printf("�߸� �Է��߽��ϴ�.0~9������ ���ڸ� �Է��ϼ���.\n");
//	}
//	else {
//		switch (number)
//		{
//		default: printf("�Է��� ���ڴ� %d�Դϴ�.\n",number);
//			break;
//		case 3:
//		case 6:
//		case 9:
//			printf("¦���Դϴ�.\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	char command = 'x';
//	switch (command)
//	{
//	case 'x':
//		printf("���ĺ� x �Է�.\n");
//	case 'X': //�ߺ��� case�� ����� �� ���⿡ �빮�� X�� ����Ѵ�.
//		printf("����ǥ �Է�.\n");
//		break;
//	}
//	return 0;
//}

//int main()
//{
//	int i_menu;
//	printf("1.���ϱ� 2.����\n");
//	scanf("%d", &i_menu);
//	switch (i_menu)
//	{
//	case 1:
//		int number1, number2;
//		printf("���� �ΰ��� �Է��ϼ���.\n");
//		scanf("%d %d", &number1, &number2);
//		printf("%d + %d = %d\n",number1, number2, number1 + number2);
//		break;
//	case 2:
//		int number3, number4;
//		printf("���� �ΰ��� �Է��ϼ���.\n");
//		scanf("%d %d", &number3, &number4);
//		printf("%d - %d = %d\n", number3, number4, number3 - number4);
//		break;
//	}
//	return 0;
//}

//int main()
//{
//	int i_menu;
//	printf("1.���ϱ� 2.����\n");
//	scanf("%d", &i_menu);
//	switch (i_menu)
//	{
//	case 1: { //�߰�ȣ �߰�
//		int number1, number2;
//		printf("���� �ΰ��� �Է��ϼ���.\n");
//		scanf("%d %d", &number1, &number2);
//		printf("%d + %d = %d", number1, number2, number1 + number2);
//		break;
//	}
//	case 2: {
//		int number3, number4;
//		printf("���� �ΰ��� �Է��ϼ���.\n");
//		scanf("%d %d", &number3, &number4);
//		printf("%d + %d = %d", number3, number4, number3 + number4);
//		break;
//	}
//	}
//	return 0;
//}

//int main()
//{
//	char input;
//	printf("���ڸ� �Է��ϼ���.(w,a,d,s,) : ");
//	scanf("%c", &input);
//	switch (input)
//	{
//	case 'w':
//		printf("�� ����Ű�� �Է��ϼ̽��ϴ�.\n");
//		break;
//	case 'a':
//		printf("�� ����Ű�� �Է��ϼ̽��ϴ�.\n");
//		break;
//	case 'd':
//		printf("�� ����Ű�� �Է��ϼ̽��ϴ�.\n");
//		break;
//	case 's':
//		printf("�Ʒ� ����Ű�� �Է��ϼ̽��ϴ�.\n");
//		break;
//	default: printf("�߸��Է��ϼ̽��ϴ�.\n");
//	}
//	return 0;
//}
int main()
{
	int appetizer, mainDish, desseet;
	printf("appetizer�� �����ϼ���.(1.ĳ��� 2. ������ 3. Ǫ�Ʊ׶�) : ");
	scanf("%d", &appetizer);
	printf("mainDish�� �����ϼ���.(1.������ũ 2. �����丮 3. �簥��) : ");
	scanf("%d", &mainDish);
	printf("dessert�� �����ϼ���.(1.�ɟ� 2. ���̽�ũ�� 3. ���ڸ�����) : ");
	scanf("%d", &desseet);

	switch (appetizer)
	{
	case 1: printf("ĳ���"); break;
	case 2: printf("������"); break;
	case 3: printf("Ǫ�Ʊ׶�"); break;
	default: printf("�߸��Է��ϼ̽��ϴ�.\n");
	}
	switch (mainDish)
	{
	case 1: printf("������ũ"); break;
	case 2: printf("�����丮"); break;
	case 3: printf("�簥��"); break;
	default: printf("�߸��Է��ϼ̽��ϴ�.\n");
	}
	switch (desseet)
	{
	case 1: printf("����ũ"); break;
	case 2: printf("���̽�ũ��"); break;
	case 3: printf("���ڸ�����"); break;
	default: printf("�߸��Է��ϼ̽��ϴ�.\n");
	}
	

	
	return 0;
}
		 