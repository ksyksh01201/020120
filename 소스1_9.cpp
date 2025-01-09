//#include <stdio.h>
//int main()
//{  //문제: 구구단을 출력
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
//{ //문제: 구구단 3단을 제외한 나머지를 출력
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
//{     //문제: 1~4의 눈을 가진 4면 주사위 한 개와 1~6의 눈을 가진 6면 주사위 한개가 있다.
//              //두 주사위를 던져 나올 수있는 경우를 모두 출력하라.
//    for (int dice4 = 1; dice4 <= 4; dice4++) { // 4면 주사위 (1~4)
//        for (int dice6 = 1; dice6 <= 6; dice6++) { // 6면 주사위 (1~6)
//            printf("4면 - %d, 6면 - %d\n", dice4, dice6);
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
//		printf("%d번쨰 내부 반복문 진입\n", outer); //내부 for문 앞에 넣은 코드는 그 전에 실행
//		for ( inter = 0; inter < 5; inter++)
//		{
//			printf("내부 반복문 %d번 반복\n", inter);
//		}                                          //내부 for문 뒤에 넣은 코드는 그 후에 실행
//		printf("%d번째 내부 반복문 탈출\n\n", outer);
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
//			printf("*"); //안쪽 반복문 반복시마다 *찍힘
//		}                 //내부 for문 뒤의 코드는 내부 for문 반복 끝나고 실행        
//		printf("\n");     //바깥 반복문 반복시마다 줄바뀜
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
//		{                   //내부 반복문 조건문에서 외부반복문의 outer 사용
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
//			printf(" ");  //반복하여 ''(스페이스키)출력
//		}
//		for ( inter2 = 0; inter2 < outer+1; inter2++)
//		{
//			printf("*");  //반복문 안에 여러개의 for문 사용
//		}              
//		printf("\n");
//	}
//	return 0;
//}

#include <stdio.h>
int main()
{  //1단계
	/*printf("*");
	printf("\n");
	printf("*");
	printf("*");
	printf("\n");
	printf("*");
	printf("*");
	printf("*");
	printf("\n");*/

     // 2단계
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

	 //3단계
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

	//4단계
	int y = 1;

	for (;y<=3;) {
		for (int x = 1; x <= y; x++) {
			printf("*");
		}
		printf("\n");
		y++;
	}

	
	//5단계
	/*for (int y = 1; y <= 3; y++) {
		for (int x = 1; x <= y; x++) {
			printf("*");
		}
		printf("\n");
	}*/

	//6단계
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


