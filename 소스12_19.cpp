//#include <stdio.h>
//int main()     //whlie을 사용하여 A부터 Z까지의 알파벳을 출력. 단 F는 출력안됨
//{            
//	char ch = 'A';
//	while (ch <= 'Z') {
//		
//			if (ch != 'F') {
//				printf("%c", ch);
//			}
//			ch++;
//		
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int total = 0;
//	int input;
//	int turn = 0;
//
//	printf("베스킨라빈스 31 게임을 시작합니다.\n");
//	while (1) {
//		printf("%c: ", 'A' + turn);
//		scanf("%d", &input);
//		total += input;
//		printf("=> %d\n", total);
//		turn = !turn;
//
//		if (input < 0 || input >3)
//		{
//			printf("3~1 사이의 숫자를 다시 입력해주세요\n");
//			continue;
//		}
//
//		if (total>=31)
//		{
//			break;
//		}
//	}
//	printf("%c가 31 이상을 말해 %c가 승리입니다.", 'A' + !turn, 'A' + turn);
//	return 0;
//}

#include <stdio.h>
int main()
{
	int num;
	printf("숫자를 여러 개 입력 : ");
	scanf("%d", &num);
	printf("입력한 숫자의 개수 : %d\n", num);
	return 0;
}