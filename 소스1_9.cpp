//#include <stdio.h>
//int main()
//{  //����: �������� ���
//	int i, j;
//	for ( i = 2; i <=9 ; i++)
//	{
//		for ( j = 1; j <=9 ; j++)
//		{
//			printf("%d*%d=%d\n", i, j, i * j);
//		}
//		printf("\n");
//	}
//}

//#include <stdio.h>
//int main()
//{ //����: ������ 3���� ������ �������� ���
//	int i, j;
//	for ( i = 2; i <=9 ; i++)
//	{
//		if (i==3)
//		{
//			continue;
//		}
//		for (j = 1; j <= 9; j++)
//		{
//			printf("%d*%d=%d\n", i, j, i * j);
//		}
//		printf("\n");
//	}
//}

//#include <stdio.h>
//int main() 
//{     //����: 1~4�� ���� ���� 4�� �ֻ��� �� ���� 1~6�� ���� ���� 6�� �ֻ��� �Ѱ��� �ִ�.
//              //�� �ֻ����� ���� ���� ���ִ� ��츦 ��� ����϶�.
//    for (int dice4 = 1; dice4 <= 4; dice4++) { // 4�� �ֻ��� (1~4)
//        for (int dice6 = 1; dice6 <= 6; dice6++) { // 6�� �ֻ��� (1~6)
//            printf("4�� - %d, 6�� - %d\n", dice4, dice6);
//        }
//    }
//
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int outer;
//	int inter;
//	for ( outer = 0; outer < 5; outer++)
//	{
//		printf("%d���� ���� �ݺ��� ����\n", outer); //���� for�� �տ� ���� �ڵ�� �� ���� ����
//		for ( inter = 0; inter < 5; inter++)
//		{
//			printf("���� �ݺ��� %d�� �ݺ�\n", inter);
//		}                                          //���� for�� �ڿ� ���� �ڵ�� �� �Ŀ� ����
//		printf("%d��° ���� �ݺ��� Ż��\n\n", outer);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int outer;
//	int inter;
//	for ( outer = 0; outer < 5; outer++)
//	{
//		for ( inter = 0; inter < 5; inter++)
//		{
//			printf("*"); //���� �ݺ��� �ݺ��ø��� *����
//		}                 //���� for�� ���� �ڵ�� ���� for�� �ݺ� ������ ����        
//		printf("\n");     //�ٱ� �ݺ��� �ݺ��ø��� �ٹٲ�
//	}
//}

//#include <stdio.h>
//int main()
//{
//	int outer;
//	int inter;
//	for ( outer = 0; outer < 5; outer++)
//	{
//		for ( inter = 0; inter < outer+1; inter++)
//		{                   //���� �ݺ��� ���ǹ����� �ܺιݺ����� outer ���
//			printf("*");
//		}
//		printf("\n");
//	}
//}

//#include <stdio.h>
//int main()
//{
//	int outer;
//	int inter1, inter2;
//	for ( outer = 0; outer < 5; outer++)
//	{
//		for ( inter1 = 0; inter1 < 5-outer; inter1++)
//		{
//			printf(" ");  //�ݺ��Ͽ� ''(�����̽�Ű)���
//		}
//		for ( inter2 = 0; inter2 < outer+1; inter2++)
//		{
//			printf("*");  //�ݺ��� �ȿ� �������� for�� ���
//		}              
//		printf("\n");
//	}
//	return 0;
//}

#include <stdio.h>
int main()
{  //1�ܰ�
	/*printf("*");
	printf("\n");
	printf("*");
	printf("*");
	printf("\n");
	printf("*");
	printf("*");
	printf("*");
	printf("\n");*/

     // 2�ܰ�
	/*for (int x = 1; x <= 1; x++) {
		printf("*");
	}
	printf("\n");
	for (int x = 1; x <= 2; x++) {
		printf("*");
	}
	printf("\n");
	for (int x = 1; x <= 3; x++) {
		printf("*");
	}
	printf("\n");*/

	 //3�ܰ�
	/*int y = 1;

	for (int x = 1; x <= y; x++) {
		printf("*");
	}
	printf("\n");
	y++;

	for (int x = 1; x <= y; x++) {
		printf("*");
	}
	printf("\n");
	y++;

	for (int x = 1; x <= y; x++) {
		printf("*");
	}
	printf("\n");*/

	//4�ܰ�
	int y = 1;

	for (;y<=3;) {
		for (int x = 1; x <= y; x++) {
			printf("*");
		}
		printf("\n");
		y++;
	}

	
	//5�ܰ�
	/*for (int y = 1; y <= 3; y++) {
		for (int x = 1; x <= y; x++) {
			printf("*");
		}
		printf("\n");
	}*/

	//6�ܰ�
	/*int LINE = 3;
	printf(">>");
	scanf("%d", &LINE);
	for (int y = 1; y <= LINE; y++) {
		for (int x = 1; x <= y; x++) {
			printf("*");
		}
		printf("\n");
	}*/
}



//#include <stdio.h>
//int main()
//{
//	int y = 5;
//	for (int i = 1; i <=y ; i++)
//	{
//		printf("*");
//	}
//	y--;
//	printf("\n");
//	for (int i = 1; i <=y ; i++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	y--;
//	for (int i = 1; i <=y ; i++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	y--;
//	for (int i = 1; i <=y ; i++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	y--;
//	for (int i = 1; i <=y ; i++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	
//}

#include <stdio.h>
int main()
{
	int y = 1;
	for (; y <= 5;) {
		for ( int x = 1; x <=y-1 ; x++)
		{
			printf("*");
		}
		printf("\n");
		y++;
	}
}


