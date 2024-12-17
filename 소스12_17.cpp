
/*int main()
{
	int appetizer, mainDish, desseet;
	printf("appetizer를 선택하세요.(1.캐비어 2. 샐러드 3. 푸아그라) : ");
	scanf("%d", &appetizer);
	printf("mainDish를 선택하세요.(1.스테이크 2. 생선요리 3. 양갈비) : ");
	scanf("%d", &mainDish);
	printf("dessert를 선택하세요.(1.케잌 2. 아이스크림 3. 초코릿무스) : ");
	scanf("%d", &desseet);

	printf("주문한 음식은 ");
	switch (appetizer)
	{
	case 1: printf("캐비어, "); break;
	case 2: printf("샐러드, "); break;
	case 3: printf("푸아그라, "); break;
	default: printf("잘못입력하셨습니다.\n");
	}
	switch (mainDish)
	{
	case 1: printf("스테이크, "); break;
	case 2: printf("생선요리, "); break;
	case 3: printf("양갈비, "); break;
	default: printf("잘못입력하셨습니다.\n");
	}
	switch (desseet)
	{
	case 1: printf("케이크입니다"); break;
	case 2: printf("아이스크림입니다"); break;
	case 3: printf("초코릿무스입니다"); break;
	default: printf("잘못입력하셨습니다.\n");
	}
	return 0;
}
	*/	 
//int main()
//{
//	while (0) //0 == false
//	{
//		printf("조건이 참일경우 반복출력\n");
//	}
//	return 0;
//}

//int main()
//{
//	while (1) //0이 아닌 수 == true
//	{
//		printf("조건이 참일경우 반복출력\n");
//	}
//	return 0;
//}
//

//int main()
//{
//	int count = 0;
//	
//	while (count < 3) //count가 0,1,2일떄 실행
//	{
//		printf("현재 count : %d\n", count);
//		printf("count가 3보다 작은동안 반복\n");
//		count++; //count를 증가시켜 조건을 만족하지 못하게 함
//	}
//	return 0;
//}

//int main()
//{
//	int count = 3;
//
//	while (count > 0) //count가 3,2,1일떄 실행
//	{
//		printf("현재 count : %d\n", count);
//		printf("count가 0보다 큰 동안 반복\n");
//		count--; //count를 감소시켜 조건을 만족하지 못하게 함
//	}
//	return 0;
//}

//int main()
//{     //문제 while을 사용해 C를 6번 출력        
//	int count = 0;
//	while (count < 6)
//	{
//		printf("C\n");
//		count++;
//	}
//	return 0;
//}

//#include <stdio.h>     //문제 while을 사용하여 -10이상 0이하의 수를 전부 출력
//int main()
//{
//	int count = -10; //-10부터 시작
//	while (count <= 0)  //0이하까지 실행
//	{
//		printf("%d\n",count);
//		count++;
//	}
//	return 0;
//}

//#include <stdio.h> //while을 사용하여 0이상 100이하의 5의 배수들을 출력
//int main()
//{
//	int count = 0; //0부터 시작
//	while (count <= 100) //100이하까지 실행
//	{
//		printf("%d\n", count);
//		count += 5;  //5씩 증가
//
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int count = 3;
//	while (count) //count가 0일떄 반복문이 끝남
//	{
//		if (count == 1) //count가 1이면 {} 실행
//		{
//			break; //반복문 탈출
//		}
//		printf("현재 count : %d\n", count);
//		printf("count가 0이 아니면 반복\n");
//		count--;
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char alphabet;
//	while (1) {  //무한반복
//		printf("알파벳을 입력해주세요(다른 것 입력시 다시 입력) :");
//		scanf("%c", &alphabet);
//		if (alphabet >= 'a' && alphabet <= 'z')
//		{
//			printf("소문자를 입력하셨습니다\n");
//		}
//		else if (alphabet >= 'A' && alphabet <= 'Z')
//		{
//			printf("대문자를 입력하셨습니다\n");
//		}
//		else
//		{
//			continue;
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int number, total = 0;
//	while (1) //무한반복
//	{
//		printf("양수를 입력해주세요(0입력시 종료) :");
//		scanf("%d", &number);
//		if (number == 0)
//		{
//			break;
//		} //number가 0이면 반복문 탈출
//		else if (number < 0)
//		{
//			continue;  //number가 음수이면 다시 입력받음
//		}  
//		total = total + number;
//		printf("%d\n", total);
//	}
//	return 0;
//}

#include <stdio.h>
int main()
{
	int number = 1;
	int multi = 1;
	while (1)
	{
		multi *= number;
		if (multi >= 50000)
			break;
		number++;
	}
	printf("multi가 처음 50000이상이 된 떄의 number값 : %d\n", number);
	return 0;
}