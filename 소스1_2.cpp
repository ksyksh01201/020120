//#include <stdio.h>
//int main()
//{  //입력한 횟수만큼 반복하는 방법
//	int count;
//	int number;
//	printf("반복할 횟수를 입력하세요 :");
//	scanf("%d", &count);
//	for ( number = 0; number < count; number++)
//	{  //조건식에 number < 입력한 수 를 넣어 횟수만큼 반복
//		//for(number = 1; number <= count; number++)도 가능
//		printf("삐약 ");
//	}
//	printf("\n");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{   // 문제: 10~99의 두 자리 숫자를 모두 출력하라.
//  	int number;
//	for ( number = 10; number <=99 ; number++)
//	{
//		printf("%d\n", number);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{ 
//	// 문제: 3~8까지의 숫자를 모두 곱한 값을 출력
//	int result = 1;
//	for (int i = 3; i <=8; i++)
//	{
//		result *= i;
//	}
//	printf("3에서 8까지의 숫자를 모두 곱한 값: %d", result);
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{    // 문제: 1~50 이하의 369게임에서 박수를 쳐야하는 숫자를 모두 출력 
//	int i;
//	for (i = 1; i <=50 ; i++)
//	{
//		int tens = i / 10;
//		int ones = i % 10;
//
//		if(tens && tens %3==0 || ones && ones % 3 == 0)
//		//if (tens == 3 || tens == 6 || tens == 9 || ones == 3 || ones == 6 || ones == 9)
//		{
//			printf("%d (박수)\n", i);
//		}
//	}
//	
//	return 0;
//}

//#include <stdio.h>
//int main()
//{ 
//	int number;
//	printf("100 이하의 제곱수를 출력합니다\n"); //제곱수는 자연수를 제곱하여 나온 수
//	for ( number = 1; (number*number) <=100 ; number++)
//	{ //조건식에 계산식이 포함되어도 된다.
//		printf("%d\n", number*number);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int number;
//	for ( number = 7; number <=100 ; number+=7)
//	{ //증감조건이 ++나 --가 아니어도 된다.
//		printf("%d\n",number);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char input;
//	for (;;)
//	{ //조건문을 적지 않으면 무한반복이 되므로 ;;을 넣어야 한다.
//		scanf("%c", &input);
//		switch (input)
//		{
//		case 's':
//			printf("START GAME");
//			break;
//		case 'e':
//			printf("EXIT GAME");
//			return 0; //e 입력 시 프로그램 종료 //main안에서 return시 프로그램이 종료된다.
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int exitFor, number;
//	printf("1부터 10까지 곱한 수 출력 : ");
//	for ( number = 10, exitFor = number-1;
//		exitFor; number *= exitFor, exitFor--)
//	{
//		//초기화와 증감식에 여러 줄의 코드가 들어갈 수 있다.
//		//조건식에 변수 하나가 들어가면 0이될때 반복이 멈춘다.
//		//{}안에 코드가 없어도 조건문과 증감식은 실행된다.
//	}
//	printf("%d\n", number);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	printf("1부터 10까지 곱한 수 출력 : "); 
//	for (int number = 10, int exitFor = number-1;  //변수 선언을 for문 내부에서 하면
//		exitFor; number *= exitFor,exitFor--) //for문 내부에서만 변수가 존재하게 된다.
//	{                                            
//	}
//	printf("%d\n", number);  //떄문에 for문 밖에서는 사용 불가능 //(if문이나 while문도 동일)
//	
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int count;
//	for ( count = 0; count < 5; count++)  //for()옆에 ;을 쓰지 않도록 주의하자.
//	{                                     //while이나 if, else if도 마찬가지.
//		printf("%d\n", count);            //단 do- while문은 ;을 찍어야한다.                         
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{   //문제: 200 이하의 11의 배수를 모두 출력.
//	int i;
//	for (i = 11; i <=200; i+=11)
//	{
//		printf("%d\n", i);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{  //문제: 정사각형 둘레가 21이하일때 sqline 값을 모두 출력
//	float sqLine;  
//	for  (sqLine = 0.1; sqLine * 4 <=21; sqLine += 0.1)
//	{
//		printf("sqLine : %.1f, perimeter: %.1f\n", sqLine, sqLine * 4);
//	}
//	return 0;
//} 

//#include <stdio.h>
//int main()
//{
//	printf("1반 1번\n");
//	printf("1반 2번\n");
//	printf("1반 3번\n");
//	printf("2반 1번\n");
//	printf("2반 2번\n");
//	printf("2반 3번\n");
//	
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int myClass = 1;
//	int student = 1;
//	printf("%d반 %d번\n", myClass, student); student++;
//	printf("%d반 %d번\n", myClass, student); student++;
//	printf("%d반 %d번\n", myClass, student); student++;
//	myClass++; student = 1; //학번 초기화
//	printf("%d반 %d번\n", myClass, student); student++;
//	printf("%d반 %d번\n", myClass, student); student++;
//	printf("%d반 %d번\n", myClass, student); student++;
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int myClass = 1;
//	int student;
//	for ( student = 1; student <=3 ; student++)
//	{
//		printf("%d반 %d번\n", myClass, student);
//	} //student++는 for문 ()안에 있음
//	myClass++; //초기화는 for문 ()안에 있음
//	for ( student = 1; student <=3; student++)
//	{
//		printf("%d반 %d번\n", myClass, student);
//	}
//	return 0;
//
//}

//#include <stdio.h>
//int main()
//{
//	int myClass;
//	int student;
//	for (myClass = 1; myClass <=2 ; myClass++)
//	{  //myClass++는 바깥 for문()안에 있음
//		for ( student = 1; student <=2 ; student++)
//		{
//			printf("%d반 %d번\n", myClass, student);
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int myClass;
//	int student;
//	for ( myClass = 1; myClass <=8 ; myClass++)
//	{
//		for (student = 1; student <=30 ; student++)
//		{
//			printf("%d반 %d번\n", myClass, student);
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int grade;
//	int myClass;
//	int student;
//	for (grade = 1; grade <=3 ; grade++)
//	{
//		for (myClass = 1; myClass <=8; myClass++)
//		{
//			for (student = 1; student <=30 ; student++)
//			{
//				printf("%d학년 %d반 %d번\n", grade, myClass, student);
//			}
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{  //문제: 구구단을 출력
//	int i, j;
//	for (i = 2; i <=9 ; i++)
//	{
//		for (j = 1; j <=9; j++)
//		{
//			printf("%d*%d=%d\n", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

#include <stdio.h>
int main()
{  //문제: 구구단을 출력
	int i, j;
	for (i = 1; i <= 9; i++)
	{
		for (j = 2; j <= 9; j++)
		{
			printf("%2dX%2d=%2d", j, i, j* i);
		}
		printf("\n");
	}
	return 0;
}