//#include <stdio.h>
//int main()
//{
//	int Jelly_price;
//	printf("���� ������ �Է�(õ���̸�) : ");
//	scanf("%d", &Jelly_price);
//	int change = 1000 - Jelly_price;
//	printf("�Ž����� : %d\n", change);
//	int coin_500 = change / 500;
//	change %= 500;
//	int coin_100 = change / 100;
//	change %= 100;
//	int coin_50 = change / 50;
//	change %= 50;
//	int coin_10 = change / 10;
//	change %= 10;
//	printf("500�� %d��\n", coin_500);
//	printf("100�� %d��\n", coin_100);
//	printf("50�� %d��\n", coin_50);
//	printf("10�� %d��\n", coin_10);
//	return 0;
//
//
//}
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int randInt = rand() % 10;
//	int nextInt = rand() % 10;
//	printf("ù���� : %d\n", randInt);
//	printf("�������� : %d", nextInt);
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int randInt = rand() % 10;
//	int nextInt = rand() % 10+50;
//	printf("ù���� : %d\n", randInt);// 0~9
//	printf("�������� : %d", nextInt);// 50~59
//	
//	return 0;
//}
#include <stdio.h>
#include <stdlib.h>;
#include <time.h>
int main()
{
	srand((unsigned int)time(NULL));
	printf("�� �ָӴϿ� �ִ� ����");
	int myMoney = (rand() % 10 + 1) * 1000;  //1000~10000
	printf("%d���̴�.\n", myMoney);
	int coin500 = rand() % 4 * 500; //0 500 1000 1500
	int coin100 = rand() % 5000; //0,100,4900
	coin100 = coin100 / 100 * 100;
	printf("�׸��� ������ ������ ");
	printf("%d���̴�.", coin500 + coin100);
	printf("\n���� ���ڸ� �� �� ������?");
	return 0;
}