
/*int main()
{
	int appetizer, mainDish, desseet;
	printf("appetizer�� �����ϼ���.(1.ĳ��� 2. ������ 3. Ǫ�Ʊ׶�) : ");
	scanf("%d", &appetizer);
	printf("mainDish�� �����ϼ���.(1.������ũ 2. �����丮 3. �簥��) : ");
	scanf("%d", &mainDish);
	printf("dessert�� �����ϼ���.(1.�ɟ� 2. ���̽�ũ�� 3. ���ڸ�����) : ");
	scanf("%d", &desseet);

	printf("�ֹ��� ������ ");
	switch (appetizer)
	{
	case 1: printf("ĳ���, "); break;
	case 2: printf("������, "); break;
	case 3: printf("Ǫ�Ʊ׶�, "); break;
	default: printf("�߸��Է��ϼ̽��ϴ�.\n");
	}
	switch (mainDish)
	{
	case 1: printf("������ũ, "); break;
	case 2: printf("�����丮, "); break;
	case 3: printf("�簥��, "); break;
	default: printf("�߸��Է��ϼ̽��ϴ�.\n");
	}
	switch (desseet)
	{
	case 1: printf("����ũ�Դϴ�"); break;
	case 2: printf("���̽�ũ���Դϴ�"); break;
	case 3: printf("���ڸ������Դϴ�"); break;
	default: printf("�߸��Է��ϼ̽��ϴ�.\n");
	}
	return 0;
}
	*/	 
//int main()
//{
//	while (0) //0 == false
//	{
//		printf("������ ���ϰ�� �ݺ����\n");
//	}
//	return 0;
//}

//int main()
//{
//	while (1) //0�� �ƴ� �� == true
//	{
//		printf("������ ���ϰ�� �ݺ����\n");
//	}
//	return 0;
//}
//

//int main()
//{
//	int count = 0;
//	
//	while (count < 3) //count�� 0,1,2�ϋ� ����
//	{
//		printf("���� count : %d\n", count);
//		printf("count�� 3���� �������� �ݺ�\n");
//		count++; //count�� �������� ������ �������� ���ϰ� ��
//	}
//	return 0;
//}

//int main()
//{
//	int count = 3;
//
//	while (count > 0) //count�� 3,2,1�ϋ� ����
//	{
//		printf("���� count : %d\n", count);
//		printf("count�� 0���� ū ���� �ݺ�\n");
//		count--; //count�� ���ҽ��� ������ �������� ���ϰ� ��
//	}
//	return 0;
//}

//int main()
//{     //���� while�� ����� C�� 6�� ���        
//	int count = 0;
//	while (count < 6)
//	{
//		printf("C\n");
//		count++;
//	}
//	return 0;
//}

//#include <stdio.h>     //���� while�� ����Ͽ� -10�̻� 0������ ���� ���� ���
//int main()
//{
//	int count = -10; //-10���� ����
//	while (count <= 0)  //0���ϱ��� ����
//	{
//		printf("%d\n",count);
//		count++;
//	}
//	return 0;
//}

//#include <stdio.h> //while�� ����Ͽ� 0�̻� 100������ 5�� ������� ���
//int main()
//{
//	int count = 0; //0���� ����
//	while (count <= 100) //100���ϱ��� ����
//	{
//		printf("%d\n", count);
//		count += 5;  //5�� ����
//
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int count = 3;
//	while (count) //count�� 0�ϋ� �ݺ����� ����
//	{
//		if (count == 1) //count�� 1�̸� {} ����
//		{
//			break; //�ݺ��� Ż��
//		}
//		printf("���� count : %d\n", count);
//		printf("count�� 0�� �ƴϸ� �ݺ�\n");
//		count--;
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char alphabet;
//	while (1) {  //���ѹݺ�
//		printf("���ĺ��� �Է����ּ���(�ٸ� �� �Է½� �ٽ� �Է�) :");
//		scanf("%c", &alphabet);
//		if (alphabet >= 'a' && alphabet <= 'z')
//		{
//			printf("�ҹ��ڸ� �Է��ϼ̽��ϴ�\n");
//		}
//		else if (alphabet >= 'A' && alphabet <= 'Z')
//		{
//			printf("�빮�ڸ� �Է��ϼ̽��ϴ�\n");
//		}
//		else
//		{
//			continue;
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int number, total = 0;
//	while (1) //���ѹݺ�
//	{
//		printf("����� �Է����ּ���(0�Է½� ����) :");
//		scanf("%d", &number);
//		if (number == 0)
//		{
//			break;
//		} //number�� 0�̸� �ݺ��� Ż��
//		else if (number < 0)
//		{
//			continue;  //number�� �����̸� �ٽ� �Է¹���
//		}  
//		total = total + number;
//		printf("%d\n", total);
//	}
//	return 0;
//}

#include <stdio.h>
int main()
{
	int number = 1;
	int multi = 1;
	while (1)
	{
		multi *= number;
		if (multi >= 50000)
			break;
		number++;
	}
	printf("multi�� ó�� 50000�̻��� �� ���� number�� : %d\n", number);
	return 0;
}