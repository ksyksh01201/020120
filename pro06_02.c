//#include <stdio.h> / //p 333 06.02
//double c_to_f(double c_temp); // <- �Լ� ����. �� �Լ� �״�� ����
//int main()
//{
//	printf("���� %lf���� ȭ�� %lf�Դϴ�.\n", 36.0, c_to_f(36.0));
//	return 0;
//}
//
//double c_to_f(double c_temp)
//{
//	return 9.0 / 5.0 * c_temp + 32;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//int main()  //�ζ� ��ȣ ����
//{
//	srand((unsigned)time(NULL));
//	for (int i = 0; i < 6; i++)
//	
//		printf("%d ", rand()%45 );
//	printf("\n");
//	return 0;
//	
//}

//#include <stdio.h>  // p362 13�� sqrt ���
//#include <math.h>
//
//double x1, y1, x2, y2;
//double get_distance(x1, y1, x2, y2)
//{
//	
//}
//int main()
//{
//	int larger;
//	printf("ù ��° ���� ��ǥ�� �Է� : ");
//	scanf("%lf %lf", &x1,&y1 );
//	printf("ù ��° ���� ��ǥ�� �Է� : ");
//	scanf("%lf %lf", &x2,&y2);
//
//	larger = max(x1, y1, x2, y2);
//	printf("�� �� ������ �Ÿ��� %lf�Դϴ�.\n", larger);
//	return 0;
//}


//#include <stdio.h>  // p362 13�� �ڵ��
//#include <math.h>
//
//double get_distance(double x1, double y1,double x2,double y2)
//{
//	double result;
//	result = sqrt((x1 - x2)*(x1 - x2)+(y1 - y2)*(y1 -y2));
//	return result;
//}
//int main()
//{
//	double x1, y1, x2, y2;
//	double dist;
//	printf("ù ��° ���� ��ǥ 2�� �Է� : ");
//	scanf_s("%lf %lf", &x1, &y1);
//	printf("ù ��° ���� ��ǥ�� 2�� �Է� : ");
//	scanf_s("%lf %lf", &x2, &y2);
//
//	dist = get_distance(x1, y1, x2, y2);
//	printf("�� �� ������ �Ÿ��� %f�Դϴ�.\n", dist);
//	return 0;
//}

//

#include <stdio.h>
 void showMenu() //���� p363 16�� atm
 {
    printf("********** Welcome to Express ATM **********\n");
    printf("<1> �ܾ�\n");
    printf("<2> �Ա�\n");
    printf("<3> ���\n");
    printf("<4> ����\n");
}

void menu1() 
{
    printf("�ܰ�� 0���Դϴ�.\n");
}

void menu2() 
{
    int money;
    printf("�Ա� �ݾ��� �Է��Ͻÿ�: ");
    scanf_s("%d", &money);
    printf("�ܰ�� %d���Դϴ�.\n", money);
}

void menu3() 
{
    int out;
    printf("��� �ݾ��� �Է��Ͻÿ�: ");
    scanf_s("%d", &out);
    printf("�ܰ�� -%d���Դϴ�.\n", out);
}
void menu4()
{
    printf("�̿����ּż� �����մϴ�.\n");
}


int main() 
{
    int sel;

    showMenu();
    printf("�޴��� �����Ͻÿ�: ");
    scanf_s("%d", &sel);

     if (sel == 1)
         menu1();
     if (sel == 2)
         menu2();
     if (sel == 3)
         menu3();
     else
         menu4();
     
    return 0;
}

