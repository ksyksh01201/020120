/*#include <stdio.h>

int main()
{
	int apple = 1;
	printf("��� %d��\n", apple);
	return 0;
}/*/

/*#include <stdio.h>

int main()
{
	printf("Ű���� 3��\n");
	printf("���콺 2��\n");
	return 0;
}*/

/*#include <stdio.h>

int main()
{
	int keyboard = 3;
	int mouse = 2;
	printf("Ű���� %d��\n", keyboard);
	printf("���콺 %d��\n", mouse);
	return 0;
}*/

/*#include <stdio.h>

int main()
{
	int coin1 = 500;
	int coin2 = 1000;
	printf("%d + %d = %d\n",
		coin1, coin2, coin1 + coin2);
	return 0;
}*/

/*#include <stdio.h>

int main()
{
	char A;
	A = 'A';
	printf("A = %c\n", A);
	return 0;
}*/

/*#include <stdio.h>

int main()
{
	double pi;
	pi = 3.14;
	float e = 2.718;
	printf("pi = %.2lf, e = %.3f..\n", pi, e);
	return 0;
}*/

/*#include <stdio.h>

int main()

{
	int radius = 5;
	float pi = 3.14;
	//���� ����: ������*������*3.14
	float extent = radius * radius * pi;
	printf("���� ����: %.2f\n", extent);
	//���� �ѷ�: 2*3.14*������
	float circumference = 2 * pi * radius;
	printf("���� �ѷ�: %.2f\n", circumference);
	return 0;
		
}*/

/*#include <stdio.h>
int main()
{
	int upper = 5; //���� ����
	int lower = 3; //�Ʒ��� ����
	int height = 7; //���� ����
	// ��ٸ��� ���� : ����+�Ʒ���*7/2
	float extent = (upper + lower) * height / 2; //��갪
	printf("��𸮲� ���� : %.2f\n", extent); //�����
	return 0;
	



}*/

/*#include <stdio.h>
int main()
{
	int k;
	printf("���ϴ� ���ڸ� �Է� : ");
	scanf("%d", &k);
	printf("���ϴ� ���ڴ� : %d\n", k);
	return 0;
}*/

/*#include <stdio.h>
int main()
{
	char a, b, c;
	printf("���� �ΰ� �Է� : ");
	scanf("%c%c%c", &a, &b, &c);
	printf("������� : %c%c%c\n", a, b, c);
	return 0;
}*/

/*#include <stdio.h>
int main()
{
	int y, x;
	printf("���ϰ� ���� �� 2�� �Է� : ");
	scanf("%d %d", &y, &x);
	printf("�� ���� �D�� %d �Դϴ�.\n", y+x);
	return 0;
}*/

#include <stdio.h>
int main()
{
	int radius; //������
	float pi = 3.14; //������
	printf("������ ���� : ");
	scanf("%d", &radius);
	float extent = radius * radius * pi;
	printf("���� ���� : %.2f\n", extent);
	float circumference = 2 * pi * radius;
	printf("���� �ѷ� : %.2f\n", circumference);
	return 0;






}

