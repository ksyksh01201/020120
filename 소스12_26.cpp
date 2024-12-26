//#include <stdio.h>
//int main() {
//	int number, temp, mul = 1;
//	printf("숫자를 입력 : ");
//	scanf("%d", &number);
//
//	temp = number;
//	while (temp >= 10)
//	{
//		mul *= 10;
//		temp /= 10;
//	}
//	while (mul > 0)
//	{
//		int digit = (number / mul);
//		int count = digit * 2;
//
//		while (count > 0)
//		{
//			printf("\u2665");
//			count--;
//		}
//		printf("\n");
//		number = number % mul; 
//	
//
//		mul /= 10;
//
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int input;
//	enum {GAMEOVER, NEWGAME, LOADGAME, OPTION};
//	do
//	{
//		printf("\n메뉴를 선택하세요.\n");
//		printf("1.새 게임 2. 이어하기 3.옵션 (0:게임종료)\n");
//		scanf("%d", &input);
//
//		switch (input)
//		{
//		case NEWGAME:
//			printf("새 게임 시작\n");
//			break;
//		case LOADGAME:
//			printf("세이브 데이터 로드\n");
//				break;
//		case OPTION:
//			printf("옵션 세팅\n");
//			break;
//		}
//	} while (input != GAMEOVER);
//	printf("게임을 종료합니다\n");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int select;
//	do
//	{
//		printf("\n사용자 인터페이스 선택\n");
//		printf("1. 로그인\n");
//		printf("2. 회원가입\n");
//		printf("3. 옵션\n");
//		printf("4. 만든 사람들\n");
//		printf("select: ");
//		scanf("%d", &select);
//
//		switch (select)
//		{
//		case 1:
//			printf("로그인을 선택했습니다.\n"); break;
//		case 2:
//			printf("회원가입을 선택했습니다.\n"); break;
//		case 3:
//			printf("옵션을 선택했습니다.\n"); break;
//		case 4:
//			printf("만든사람들을 선택했습니다.\n"); break;
//		
//		}
//
//
//	} while (select>=1 && select <=4);
//	printf("프로그램을 종료합니다.\n"); 
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int command;
//	int day = 0;
//	int study = 0;
//	do
//	{
//		printf("\n%d번째 날!\n", ++day);
//		printf("오늘은 뭐할까요?\n");
//		printf("1.코딩공부한다.\n");
//		printf("그 외. 끝낸다.\n >> ");
//		scanf("%d", &command);
//		if (command != 1) break;
//
//		int randInt = rand() % 5 + 1;
//		switch (randInt)
//		{
//		case 1:
//			printf("기분이 좋네요.\n");
//		case 3:
//			printf("도서관에서 ");break;
//		case 2:
//			printf("기분이 나빠요.\n");
//		case 4:
//			printf("카페에서 ");break;
//		case 5:
//			printf("학원에서 ");
//
//	 }
//		printf("코딩공부합니다\n");
//		study++;
//	} while (1);
//	if (day <= 3)
//	{
//		printf("그대로 입니다...\n");
//	}
//	else
//	{
//		int level = study / 8;
//		switch (level)
//		{
//		case 0:
//			printf("코딩새싹이 되었습니다!\n");
//			break;
//		case 1:
//			printf("프로그래머가 되었습니다!\n");
//			break;
//		case 2:
//			printf("프론트 개발자가 되었습니다!\n");
//			break; 
//		case 3:
//			printf("백앤드 개발자가 되었습니다!\n");
//			break;
//		default:
//			printf("풀스택 개발자가 되었습니다.\n");
//			break;
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int command;
//	int day = 0;
//	int study = 0;
//	int rest = 0;
//	int hobby = 0;
//
//	do
//	{
//		printf("\n%d번째 날!\n", ++day);
//		printf("오늘은 뭘 할까요?\n");
//		printf("1. 코딩공부 한다.\n");
//		printf("2. 쉬기.\n");
//		printf("3. 취미생활 한다.\n");
//		printf("그외. 끝낸다.\n >> ");
//		scanf("%d", &command);
//
//		if (command != 1 && command != 2 && command != 3) break;
//		if (command ==1)
//		{
//			int randInt = rand() % 5 + 1;
//			switch (randInt)
//			{
//			case 1:
//				printf("기분이 좋네요.\n");
//			case 3:
//				printf("도서관에서.\n"); break;
//			case 2:
//				printf("기분이 나빠요.\n");
//			case 4:  
//				printf("카페에서.\n");break;
//			case 5:
//				printf("학원에서.\n");
//				
//			}
//			printf("코딩공부합니다.\n");
//			study++;
//		}
//		else if (command ==2)
//		{
//			printf("하루 종일 휴식을 취했습니다.\n");
//			rest++; 
//		}
//		else if (command ==3)
//		{
//			printf("취미생활을 즐겼습니다.\n");
//			hobby++; 
//		}
//	} while (1);
//	if (day <=3)
//	{
//		printf("그대로 입니다..\n");
//	}
//	else if (study > rest && study > hobby)
//	{ 
//		int level = study / 8;
//		switch (level)
//		{
//		case 0:
//			printf("코딩새싹이 되었습니다!\n");break;
//		case 1:
//			printf("프로그래머가 되었습니다!\n");break;
//		case 2:
//			printf("프론트앤드 개발자가 되었습니다!\n");break;
//		case 3:
//			printf("백앤드 개발자가 되었습니다!\n");break;
//		default:
//			printf("풀스택 개발자가 되었습니다!\n");break;
//
//		}
//	
//	}
//	else if (rest > study && rest > hobby)
//	{
//		printf("휴식 전문가가 되었습니다.\n");
//
//	}
//	else if (hobby > study && hobby > rest)
//	{
//		printf("취미 마스터가 되었습니다\n");
//	}
//	else
//	{
//		printf("균형 잡힌 삶을 살았습니다!\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int sheep;
//	for (sheep = 0; sheep<5; sheep++)
//	{
//		printf("양 %d마리\n",sheep);
//	}
//	printf("잠들었다!\n");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int sheep;
//	for (sheep = 0; sheep < 5; sheep++)
//	{
//		printf("양 %d마리\n", sheep);
//		if (sheep == 3)
//		{
//			printf("도중에 잠들었다!\n");
//			break;
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int sheep;
//	for (sheep = 0; sheep <5 ; sheep++)
//	{
//		if (sheep == 3) {
//			printf("졸아서 양을 세지 못했다!\n");
//			continue;
//		}
//		printf("양 %d마리\n", sheep);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int sheep;
//	for (sheep = 1; sheep <= 20; sheep++)
//	{
//		printf("양 %d마리\n", sheep);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int sheep;
//	for (sheep = 1; sheep <=50; sheep++)
//	{
//		if (sheep % 10 == 0) {
//			printf("양 %d마리...깜빡 졸았습니다.\n", sheep);
//		}
//		
//		if (sheep == 45)
//		{
//			printf("양 %d마리...잠들었습니다.\n", sheep);
//			break;
//		}
//		printf("양 %d마리\n", sheep);
//	}
//	
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int round;
//	for (round = 0; round < 10; round++)
//	{
//		printf("라운드 %d\n", round);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int round;
//	for (round = 1; round <= 10; round++)
//	{
//		printf("라운드 %d\n", round);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int count;
//	for (count = 101; count < 111; count++)
//	{
//		printf("아파트 %d동\n", count);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int number;
//	int sum_number = 0;
//	for (number = 1; number <=20; number++)
//	{
//		sum_number = sum_number + number;
//	}
//	printf("도합 %d\n", sum_number);
//	return 0;
//}


