/*#include <stdio.h>

int main()
{
	int apple = 1;
	printf("사과 %d개\n", apple);
	return 0;
}/*/

/*#include <stdio.h>

int main()
{
	printf("키보드 3개\n");
	printf("마우스 2개\n");
	return 0;
}*/

/*#include <stdio.h>

int main()
{
	int keyboard = 3;
	int mouse = 2;
	printf("키보드 %d개\n", keyboard);
	printf("마우스 %d개\n", mouse);
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
	//원의 넓이: 반지름*반지름*3.14
	float extent = radius * radius * pi;
	printf("원의 넓이: %.2f\n", extent);
	//원의 둘레: 2*3.14*반지름
	float circumference = 2 * pi * radius;
	printf("원의 둘레: %.2f\n", circumference);
	return 0;
		
}*/

/*#include <stdio.h>
int main()
{
	int upper = 5; //윗변 길이
	int lower = 3; //아랫변 길이
	int height = 7; //높이 길이
	// 사다리꼴 넓이 : 윗변+아랫변*7/2
	float extent = (upper + lower) * height / 2; //계산값
	printf("사디리꼴 넓이 : %.2f\n", extent); //계산결과
	return 0;
	



}*/

/*#include <stdio.h>
int main()
{
	int k;
	printf("원하는 숫자를 입력 : ");
	scanf("%d", &k);
	printf("원하는 숫자는 : %d\n", k);
	return 0;
}*/

/*#include <stdio.h>
int main()
{
	char a, b, c;
	printf("문자 두개 입력 : ");
	scanf("%c%c%c", &a, &b, &c);
	printf("문자출력 : %c%c%c\n", a, b, c);
	return 0;
}*/

/*#include <stdio.h>
int main()
{
	int y, x;
	printf("더하고 싶은 값 2개 입력 : ");
	scanf("%d %d", &y, &x);
	printf("두 값의 핪은 %d 입니다.\n", y+x);
	return 0;
}*/

#include <stdio.h>
int main()
{
	int radius; //반지름
	float pi = 3.14; //원주율
	printf("반지름 길이 : ");
	scanf("%d", &radius);
	float extent = radius * radius * pi;
	printf("원의 넓이 : %.2f\n", extent);
	float circumference = 2 * pi * radius;
	printf("원의 둘레 : %.2f\n", circumference);
	return 0;






}

