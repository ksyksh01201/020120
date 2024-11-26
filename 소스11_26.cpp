/*#include <stdio.h>
int main()
{
	int upper;
	int lower;
	int height;
	printf("윗변의 길이 : ");
	scanf("%d", &upper);
	printf("밑변의 길이 : ");
	scanf("%d", &lower);
	printf("높이의 길이 : ");
	scanf("%d", &height);
	float extent = (upper + lower) * height / 2.0;
	printf("사다리꼴 넓이 : %.1f\n", extent);
	return 0;
}*/

/*#include <stdio.h>
int main()
{
	int a = 15;
	int b = 3;
	printf("%d + %d = %d\n", a, b, a + b);
	printf("%d - %d = %d\n", a, b, a - b);
	printf("%d * %d = %d\n", a, b, a * b);
	printf("%d / %d = %d\n", a, b, a / b);
	printf("%d %% %d = %d\n", a, b, a % b);
	return 0;

}*/

/*#include <stdio.h>
int main()
{
	int a = 0;
	printf("%d\n", a++);
	printf("%d\n", a);
	return 0;
}*/

/*#include <stdio.h>
int main()
{
	int a = 0;
	printf("%d\n", ++a);
	printf("%d\n", a);
	return 0;
}*/

/*#include <stdio.h>
int main()
{
	int number = 1;
	number = number + 3;
	printf("%2d\n", number);
	number -= 2;
	printf("%2d\n", number);
	number--;
	printf("%2d\n", number);
	return 0;

}*/

/*#include <stdio.h>
int main()
{
	int a;
	int b;
	printf("a의 값 : ");
	scanf("%d", &a);
	printf("b의 값 : ");
	scanf("%d", &b);
	printf("%d + %d = %d\n", a, b, a + b);
	printf("%d - %d = %d\n", a, b, a - b);
	printf("%d * %d = %d\n", a, b, a * b);
	printf("%d / %d = %d\n", a, b, a / b);
	printf("%d %% %d = %d\n", a, b, a % b);
	return 0;

}*/

/*#include <stdio.h>
int main()
{
	int first = 1 % 4;
	printf("%d=1%%4\n", first);
	int second = 5 % 3;
	printf("%d=5%%3\n", second);
	int third = 4 % 2;
	printf("%d=4%%2\n", third);
	return 0;
}*/

/*#include <stdio.h>
int main()
{  //앞에 있는 수가 3의 배수일시 결과값은 0으로 된다.
	int first = 1 % 3;
	printf("%d=1%%3\n", first);
	int second = 2 % 3;
	printf("%d=2%%3\n", second);
	int third = 3 % 3;
	printf("%d=3%%3\n", third);
	int fourth = 4 % 3;
	printf("%d=4%%3\n", fourth);
	int fifth = 5 % 3;
	printf("%d=5%%3\n", fifth);
	int sixth = 6 % 3;
	printf("%d=6%%3\n", sixth);
	return 0;


}*/

/*#include <stdio.h>
int main()
{
	int number;
	printf("숫자를 입력 : ");
	scanf("%d", &number);
	printf("50으로 나눈 나머지 : %d\n",number % 50);
	return 0;

}*/

/*#include <stdio.h>
int main()
{ // /= 몫의 값
	int data1 = 6 / 2;  
	printf("%d=6/2\n", data1); //3 6/2=3(몫) 결과값
	int data2 = 6 / 3;
	printf("%d=6/3\n", data2); //2
	int data3 = 6 / 4;
	printf("%d=6/4\n", data3); //1
	return 0;
}*/

/*#include <stdio.h>
int main()
{
	int coin;
	printf("돈을 입력해주세요.(원)");
	scanf("%d", &coin);

	int coin10000 = coin / 10000;
	coin = coin % 10000;
	int coin5000 = coin / 5000;
	coin = coin % 5000;
	int coin1000 = coin / 1000;
	printf("만원권 %d개, ", coin10000);
	printf("오천원권 %d개, ", coin5000);
	printf("천원권 %d개, ", coin1000);
	printf("나머지는 동전입니다." );
	
	return 0;


	
}*/

#include <stdio.h>
int main()
{
	int jelly_price;
	int change;
	int coin_500, coin_100, coin_50, coin_10;
	printf("젤리 가격(천원 미만) : ");
	scanf("%d", &jelly_price);
	int change = 1000 - jelly_price;
	coin_500 = change / 500;
	coin_100 = change / 100;
	coin_50 = change / 50;
	coin_10 = change / 10;
	printf("오백원 %d개", coin_500);
	printf("백원 %d개", coin_100);
	printf("오십원 %d개", coin_50);
	printf("십원 %d개", coin_10);
	return 0;
	
	


}