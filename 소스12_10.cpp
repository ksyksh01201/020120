//#include<stdio.h>
//int main()
//{
//	int number, answer;
//	scanf("%d%d", &number, &answer);
//	if (number>answer)
//	{
//		printf("숫자1이 숫자2보다 큽니다\n");
//	}
//	else //number <= answer 인 경우 else 실행
//	{
//		if (number<answer)
//		{
//			printf("숫자2가 숫자1보다 큽니다.\n");
//		}
//		else
//		{
//			printf("숫자1과 숫자2가 같습니다.\n");
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int number, answer;
//	scanf("%d%d", &number, &answer);
//	if (number > answer)
//	{
//		printf("숫자1이 숫자2보다 큽니다\n");
//	}
//	else if (number < answer)
//	{
//		printf("숫자2가 숫자1보다 큽니다\n");
//	}
//	else
//	{
//		printf("숫자1과 숫자2가 같습니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int score = 75;
//	if (score > 90)
//	{
//		printf("성적은 A등급입니다.\n");
//	}
//	else if (score > 80)
//	{
//		printf("성적은 B등급입니다.\n");
//	}
//	else if (score > 70)
//	{
//		printf("성적은 C등급입니다.\n");
//	}
//	else if (score > 60)
//	{
//		printf("성적은 D등급입니다.\n");
//	}
//	else
//	{
//		printf("성적은 F등급입니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int number = -11;
//	if (number > 0)
//	{
//		printf("number는 양수입니다.\n");
//	}
//	else if (number < 0)
//	{
//		printf("number는 음수입니다.\n");
//	}
//	else
//	{
//		printf("number는 0입니다.\n");
//	}
//	if (number%2 == 0) //2로 나눈 나머지가 0이면 짝수
//	{
//		printf("number는 짝수입니다.\n");
//	}
//	else //2로 나눈 나머지가 1이면 홀수
//	{
//		printf("number는 홀수입니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char input;
//	printf("문자를 입력하세요 : ");
//	scanf("%c", &input);
//	if (input =='w')
//	{
//		printf("위 방향키를 입력하셨습니다.\n");
//	}
//	else if (input == 'a')
//	{
//		printf("좌 방향키를 입력하셨습니다.\n");
//	}
//	else if (input == 'd')
//	{
//		printf("우 방향키를 입력하셨습니다.\n");
//	}
//	else if (input == 's')
//	{
//		printf("아래 방향키를 입력하셨습니다.\n");
//	}
//	else
//	{
//		printf("잘못 입력하셨습니다\n");
//	}
//	return 0;
//	
//}

//#include <stdio.h>
//int main()
//{
//	int gauge;
//	printf("숫자를 입력하세요 : ");
//	scanf("%d", &gauge);
//	if (gauge>=45 && gauge<=55)
//	{
//		printf("Perfect");
//	}
//	else if (gauge>=35 && gauge<=65)
//	{
//		printf("Excellent");
//	}
//	else
//	{
//		printf("good");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int input;
//	printf("숫자를 입력하세요 : ");
//	scanf("%d", &input);
//	if (input %3 ==0)
//	{
//		printf("input은 3의 배수입니다\n");
//
//		if (input % 6 == 0)
//		{
//			printf("input은 6의 배수입니다\n");
//		}
//		if (input % 9 == 0)
//		{
//			printf("input은 9의 배수입니다\n");
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char command = 'i';
//	switch (command)
//	{
//	case 'i':
//		printf("아이템창 오픈\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char command = 'i';
//	switch (command)
//	{
//	case 'i':
//		printf("아이템창 오픈\n");
//	case 'm':
//		printf("지도창 오픈\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char comand = 'm';
//	switch (comand)
//	{
//	case 'i':printf("아이템창 오픈\n");
//	case 'm':printf("지도창 오픈\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char command = 'm';
//	switch (command)
//	{
//	case 'i': printf("아이템창 오픈\n");
//		break; //break로 멈춤
//	case 'm':printf("지도창 오픈\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char command;
//	printf("커맨드를 입력하세요 : ");
//	scanf("%c", &command);
//	switch (command)
//	{
//	case 'i': printf("아이템창 오픈\n");
//		break; //break로 멈춤
//	case 'm':printf("지도창 오픈\n");
//		break;
//	default: printf("지정된 기능이 없습니다.\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int number = 1;
//	switch (number)
//	{
//	case 1: printf("one\n"); break;
//	case 2: printf("two\n"); break;
//	case 3: printf("tree\n"); break;
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int input1, input2;
//	char oper;
//	printf("숫자를 입력하세요 : ");
//	scanf("%d", &input1);
//	printf("기호를 입력하세요(+,-,*,/,%) : ");
//	scanf(" %c", &oper); //앞에 공백
//	printf("숫자를 입력하세요 : ");
//	scanf("%d", &input2);
//	int result;
//	
//	switch (oper)
//	{
//	case '+': result = input1 + input2;
//		break;
//	case '-': result = input1 - input2;
//		break;
//	case '*': result = input1 * input2;
//		break;
//	case '/': result = input1 / input2;
//		break;
//	case '%': result = input1 % input2;
//		break;
//	default: 
//		printf("잘못입력하셨습니다.\n");
//		return -1;
//	}
//	
//	printf("결과 : %d", result);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int month;
//	printf("숫자를 입력하세요 : ");
//	scanf("%d", &month);
//	switch (month)
//	{
//	case 1:printf("january");
//		break;
//	case 2:printf("february");
//		break;
//	case 3:printf("March");
//		break;
//	case 4:printf("april");
//		break;
//	case 5:printf("May");
//		break;
//	case 6:printf("June");
//		break;
//	case 7:printf("July");
//		break;
//	case 8:printf("August");
//		break;
//	case 9:printf("September");
//		break;
//	case 10:printf("october");
//		break;
//	case 11:printf("November");
//		break;
//	case 12:printf("december");
//		break;
//	}
//	return 0;
//}
#include <stdio.h>
int main()
{
	char command;
	printf("<, a 왼쪽 이동\n");
	printf(">, d 오른쪽 이동\n");
	scanf("%c", &command);
	switch (command)
	{
	case '<' : 
	case 'a':
		printf("왼쪽으로 이동합니다.\n");
		break;
	case '>' : 
	case 'd':
		printf("오른쪽으로 이동합니다.\n");
		break;
	}
	return 0;
}