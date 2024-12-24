#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//#include <stdlib.h>
//#include <time.h>
//int main()
//{
//	int input;
//	int total = 0;
//	int turn = 1;
//	printf("베스킨라빈스 31게임을 시작!\n");
//	
//	while (1) {
//		if (turn == 1)
//		{
//			printf("A: ");
//		}
//		else
//		{
//			printf("B: ");
//		}
//		scanf("%d", &input);
//
//		if (input <1 || input>3)
//		{
//			printf("1~3숫자만 입력해주세요!\n");
//			continue;
//		}
//
//		total += input;
//		printf("=> %d\n", total);
//
//		if (turn == 1)
//		{
//			turn = 2;
//		}
//		else
//		{
//			turn = 1;
//		}
//		if (total >= 31)
//		{
//			if (turn == 1) {
//				printf("A가 31을 말해 B가 승리!\n");
//			}
//			else
//			{
//				printf("B가 31을 말해 A가 승리!\n");
//			}
//			break;
//		}
//		
//	}
//	return 0;
//
//}

//int main()
//{
//	int number;
//	int count = 0;
//	printf("숫자를 입력: ");
//	scanf("%d", &number);
//	while (number != 0) {
//		number /= 10;
//		count++;
//	}
//	printf("입력한 숫자의 개수 : %d\n", count);
//	return 0;
//}
//int main()
//{
//	int select;
//	do {
//		printf("\n사용자 인터베이스\n");
//		printf("1. 로그인\n");
//		printf("2. 회원가입\n");
//		printf("3. 옵션\n");
//		printf("4. 만든 사람들\n");
//		printf("다른 값을 입력하면 종료됩니다\n");
//		printf("select: ");
//		scanf("%d", &select);
//
//		switch (select)
//		{
//		case 1:
//			printf("로그인을 선택함\n");break;
//		case 2:
//			printf("회원가입을 선택함\n");break;
//		case 3:
//			printf("옵션을 선택함\n");break;
//		case 4:
//			printf("만든 사람들을 선택함\n");break;
//
//
//		}
//	}
//	while (select >= 1 && select <= 4);
//	printf("프로그램을 종료합니다.\n");
//
//}

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
//		case 2:
//			printf("도서관에서 ");break;
//		case 3:
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

int main()
{
	srand((unsigned int)time(NULL));
	int command;
	int day = 0;
	int study = 0;
	do
	{
		printf("\n%d번째 날!\n", ++day);
		printf("오늘은 뭐할까요?\n");
		printf("1.코딩공부한다.\n");
		printf("2.운동을 한다.\n");
		printf("3.독서를 한다.\n");
		printf("4.게임을 한다.\n");
		printf("그 외. 끝낸다.\n >> ");
		scanf("%d", &command);
		if (command <1 || command >4) break;
		switch (command)
		{
		case 1:
			printf("코딩 공부를 선택하셨습니다.\n");
			
			study++;
			break;
		case 2:
			printf("운동을 선택하셨습니다. 몸이 건강해짐\n ");break;
		case 3:
			printf("독서를 선택하셨습니다 마음이 풍요로짐.\n");
		case 4:
			printf("게임을 선택하셨습니다. 스트레스를 품\n ");break;
		default:
			break;

		int randInt = rand() % 5 + 1;
		switch (randInt)
		{
		case 1:
			printf("기분이 좋네요.\n");break;
		case 2:
			printf("도서관에서 ");break;
		case 3:
			printf("기분이 나빠요.\n");break;
		case 4:
			printf("카페에서 ");break;
		case 5:
			printf("학원에서 ");break;

		}
		if (command ==1) printf("코딩공부합니다\n");
		
		
	} while (1);
	if (day <= 3)
	{
		printf("그대로 입니다...\n");
	}
	else
	{
		int level = study / 8;
		switch (level)
		{
		case 0:
			printf("코딩새싹이 되었습니다!\n");
			break;
		case 1:
			printf("프로그래머가 되었습니다!\n");
			break;
		case 2:
			printf("프론트 개발자가 되었습니다!\n");
			break;
		case 3:
			printf("운동 선수가 되었습니다!\n");
			break;
		case 4:
			printf("E스포츠 선수가 되었습니다!\n");
			break;
		case 5:
			printf("작가가 되었습니다!\n");
			break;
		case 6:
			printf("백앤드 개발자가 되었습니다!\n");
			break;
		default:
			printf("풀스택 개발자가 되었습니다.\n");
			break;
		}
	}
	return 0;
}

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
//				printf("기분이 좋네요.\n");break;
//			case 2:
//				printf("도서관에서.\n");break;
//			case 3:
//				printf("기분이 나빠요.\n");break;
//			case 4:
//				printf("카페에서.\n");break;
//			case 5:
//				printf("학원에서.\n");break;
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

//int main()
//{
//	int sheep;
//	for (sheep = 1; sheep <= 50; sheep++) {
//		if (sheep %10 == 0)
//		{
//			printf("%d마리...깜빡 졸았어요\n", sheep);
//
//		}
//		else if (sheep == 45)
//		{
//			printf("%d마리...잠들었습니다.\n", sheep);
//			break;
//		}
//		else
//		{
//			printf("%d마리\n", sheep);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int num;
//	for  (num = 1; num <= 50; num++)
//	{
//		int tens = num / 10;
//		int ones = num % 10;
//
//		if (tens ==3 || tens ==6 || tens == 9 || ones == 3 || ones ==6 || ones == 9)
//		{
//			printf("%d: 박수\n", num);
//		}
//
//	}
//	return 0;
//}
//int main()
//{
//	int select;
//	do
//	{
//		printf("\n사용자 인터베이스\n");
//		printf("1. 로그인\n");
//		printf("2. 회원가입\n");
//		printf("3. 옵션\n");
//		printf("4. 만든사람들\n");
//		printf("다른 값을 입력하면 종료\n");
//		printf("select: ");
//		scanf("%d", &select);
//		
//		switch (select)
//		{
//		case 1:
//			printf("로그인을 선택함\n");
//			break;
//		case 2:
//			printf("회원가입을 선택함\n");
//			break;
//		case 3:
//			printf("옵션을 선택함\n");
//			break;
//		case 4:
//			printf("만든사람을 선택함\n");
//			break;
//		default:
//			printf("프로그램을 종료\n");
//			break;
//
//		}
//
//	} while (select>=1 && select<=4);
//	return 0;
//}


