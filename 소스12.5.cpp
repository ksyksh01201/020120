//#include <stdio.h>
//int main()
//{
//	int apple = 15;
//	if (apple = 15)
//	{
//		printf("apple�� 15�� �ֽ��ϴ�.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int apple = 15;
//	if (apple !=17) //apple�� 17 �ƴϸ� ����
//	{
//		printf("apple�� 17���� �ƴմϴ�.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int apple = 15;
//	if (apple > 7) //apple�� 7���� ũ�� ����
//	{
//		printf("apple�� 7������ �����ϴ�.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int apple = 15;
//	if (apple <20) //apple�� 20���� ������ ����
//	{
//		printf("apple�� 20������ �����ϴ�.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int apple = 15;
//	if (apple) //apple�� 0�� �ƴϸ� ����
//	{
//		printf("apple�� 0���� �ƴմϴ�.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int apple = 15;
//	if (!apple) //apple�� 0�̸� ����
//	{
//		printf("apple�� �ϳ��� �����ϴ�.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int apple = 0;
//	if (apple ==10) //apple�� 10�̸� ����
//	{
//		printf("apple�� 10�� �ֽ��ϴ�.\n");
//	}
//	else if (apple == 0) //apple�� 0�̸� ����
//	{
//		printf("apple�� �ϳ��� �����ϴ�.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int apple = 15;
//	if (!apple) //apple�� 0�̸� ����
//	{
//		printf("apple�� �ϳ��� �����ϴ�.\n");
//	}
//	else //if�� Ʋ���� (apple�� 0 �ƴϸ�) ����
//	{
//		printf("apple�� 0���� �ƴմϴ�.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int input;
//	printf("���ڸ� �Է� : ");
//	scanf("%d", &input);
//	if (input>0)
//	{
//		printf("�Է��� ���ڴ� ����Դϴ�.");
//	}
//	else if (input<0)
//	{
//		printf("�Է��� ���ڴ� �����Դϴ�.");
//	}
//	else
//	{
//		printf("�Է��� ���ڴ� 0�Դϴ�.");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int input;
//	printf("���ڸ� �Է� : ");
//	scanf("%d", &input);
//	if (input>=10 && input<=99)
//	{
//		printf("input�� �� �ڸ� �����Դϴ�.");
//	}
//	else
//	{
//		printf("input�� �� �ڸ� ���ڰ� �ƴմϴ�.");
//		return 0;
//	}
//}

//#include <stdio.h>
//int main()
//{
//	int height = 170;
//	if (height > 150)
//	{
//		printf("Ű�� 150 �̻��Դϴ�.\n");
//	}
//	if (height > 160)
//	{
//		printf("Ű�� 160 �̻��Դϴ�.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int height = 170;
//	if (height > 150)
//	{
//		printf("Ű�� 150 �̻��Դϴ�.\n");
//	}
//	else if (height > 160)
//	{ //else if�� if�� Ʋ�������� ����ȴ�.
//		printf("Ű�� 160 �̻��Դϴ�.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int y_age;
//	printf("���̸� �Է� : ");
//	scanf("%d", &y_age);
//	printf("���� ������ ��� : \n");
//	if (y_age>=0)
//	{
//		printf("-��ü ������\n");
//	}
//	if (y_age>=12)
//	{
//		printf("-12�� ������\n");
//	}
//	if (y_age >= 15)
//	{
//		printf("-15�� ������\n");
//	}
//	return 0;
//}

#include <stdio.h>
int main()
{
	char initial;
	printf("���ڸ� �Է� : ");
	scanf("%c", &initial);
	if (initial>='a' && initial<='z')
	{
		printf("�Է��� ���ڴ� �ҹ���");
	}
    else if (initial>='A' && initial<='Z')
	{
		printf("�Է��� ���ڴ� �빮��");
	}
	else
	{
		printf("�Է��� ���ڴ� ���ĺ��� �ƴմϴ�.");
	}
	return 0;
}
