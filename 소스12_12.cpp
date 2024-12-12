#include <stdio.h>
//int main()
//{
//	char command;
//	printf("<, a 왼쪽 이동\n");
//	printf(">, b 오른쪽 이동\n");
//	scanf("%c", &command);
//	switch (command)
//	{
//	case '<':
//	case 'a': //case를 여러개 써서 같은 코드 실행 가능
//		printf("왼쪽으로 이동합니다.\n");
//		break;
//	case '>':
//	case 'd':
//		printf("오른쪽으로 이동합니다.\n");
//		break;
//	}
//	return 0;
//}

//int main()
//{
//	int input;
//	const int Option = 3;
//	printf("메뉴를 선택하세요.");
//	printf("1.새 게임 2. 이어하기 3. 옵션\n");
//	scanf("%d", &input);
//	switch (input)
//	{
//	case 1:
//		printf("새 게임 시작\n");
//		break;
//	case 2:
//		printf("세이브 데이터 로드\n");
//		break;
//	case Option: //숫자로 하면 모르기 때문에 옵션이라는 변수명을 지정함
//		printf("옵션 세팅\n");
//		break;
//	default: printf("지정된 기능이 없습니다.\n");
//	}
//	return 0;
//}

//int main()
//{
//	int number;
//	printf("0~9사이의 숫자를 입력하세요. : ");
//	scanf("%d", &number);
//	if (number<0 || number>9)
//	{
//		printf("잘못 입력했습니다.0~9사이의 숫자를 입력하세요.\n");
//	}
//	else {
//		switch (number)
//		{
//		default: printf("입력한 숫자는 %d입니다.\n",number);
//			break;
//		case 3:
//		case 6:
//		case 9:
//			printf("짝수입니다.\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	char command = 'x';
//	switch (command)
//	{
//	case 'x':
//		printf("알파벳 x 입력.\n");
//	case 'X': //중복된 case을 사용할 수 없기에 대문자 X를 사용한다.
//		printf("엑스표 입력.\n");
//		break;
//	}
//	return 0;
//}

//int main()
//{
//	int i_menu;
//	printf("1.더하기 2.빼기\n");
//	scanf("%d", &i_menu);
//	switch (i_menu)
//	{
//	case 1:
//		int number1, number2;
//		printf("숫자 두개를 입력하세요.\n");
//		scanf("%d %d", &number1, &number2);
//		printf("%d + %d = %d\n",number1, number2, number1 + number2);
//		break;
//	case 2:
//		int number3, number4;
//		printf("숫자 두개를 입력하세요.\n");
//		scanf("%d %d", &number3, &number4);
//		printf("%d - %d = %d\n", number3, number4, number3 - number4);
//		break;
//	}
//	return 0;
//}

//int main()
//{
//	int i_menu;
//	printf("1.더하기 2.빼기\n");
//	scanf("%d", &i_menu);
//	switch (i_menu)
//	{
//	case 1: { //중괄호 추가
//		int number1, number2;
//		printf("숫자 두개를 입력하세요.\n");
//		scanf("%d %d", &number1, &number2);
//		printf("%d + %d = %d", number1, number2, number1 + number2);
//		break;
//	}
//	case 2: {
//		int number3, number4;
//		printf("숫자 두개를 입력하세요.\n");
//		scanf("%d %d", &number3, &number4);
//		printf("%d + %d = %d", number3, number4, number3 + number4);
//		break;
//	}
//	}
//	return 0;
//}

//int main()
//{
//	char input;
//	printf("문자를 입력하세요.(w,a,d,s,) : ");
//	scanf("%c", &input);
//	switch (input)
//	{
//	case 'w':
//		printf("위 방향키를 입력하셨습니다.\n");
//		break;
//	case 'a':
//		printf("좌 방향키를 입력하셨습니다.\n");
//		break;
//	case 'd':
//		printf("우 방향키를 입력하셨습니다.\n");
//		break;
//	case 's':
//		printf("아래 방향키를 입력하셨습니다.\n");
//		break;
//	default: printf("잘못입력하셨습니다.\n");
//	}
//	return 0;
//}
int main()
{
	int appetizer, mainDish, desseet;
	printf("appetizer를 선택하세요.(1.캐비어 2. 샐러드 3. 푸아그라) : ");
	scanf("%d", &appetizer);
	printf("mainDish를 선택하세요.(1.스테이크 2. 생선요리 3. 양갈비) : ");
	scanf("%d", &mainDish);
	printf("dessert를 선택하세요.(1.케잌 2. 아이스크림 3. 초코릿무스) : ");
	scanf("%d", &desseet);

	switch (appetizer)
	{
	case 1: printf("캐비어"); break;
	case 2: printf("샐러드"); break;
	case 3: printf("푸아그라"); break;
	default: printf("잘못입력하셨습니다.\n");
	}
	switch (mainDish)
	{
	case 1: printf("스테이크"); break;
	case 2: printf("생선요리"); break;
	case 3: printf("양갈비"); break;
	default: printf("잘못입력하셨습니다.\n");
	}
	switch (desseet)
	{
	case 1: printf("케이크"); break;
	case 2: printf("아이스크림"); break;
	case 3: printf("초코릿무스"); break;
	default: printf("잘못입력하셨습니다.\n");
	}
	

	
	return 0;
}
		 