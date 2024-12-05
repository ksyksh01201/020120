//#include <stdio.h>
//int main()
//{
//	int apple = 15;
//	if (apple = 15)
//	{
//		printf("apple은 15개 있습니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int apple = 15;
//	if (apple !=17) //apple이 17 아니면 실행
//	{
//		printf("apple은 17개가 아닙니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int apple = 15;
//	if (apple > 7) //apple이 7보다 크면 실행
//	{
//		printf("apple은 7개보다 많습니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int apple = 15;
//	if (apple <20) //apple이 20보다 적으면 실행
//	{
//		printf("apple은 20개보다 적습니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int apple = 15;
//	if (apple) //apple이 0이 아니면 실행
//	{
//		printf("apple은 0개가 아닙니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int apple = 15;
//	if (!apple) //apple이 0이면 실행
//	{
//		printf("apple은 하나도 없습니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int apple = 0;
//	if (apple ==10) //apple이 10이면 실행
//	{
//		printf("apple은 10개 있습니다.\n");
//	}
//	else if (apple == 0) //apple이 0이면 실행
//	{
//		printf("apple은 하나도 없습니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int apple = 15;
//	if (!apple) //apple이 0이면 실행
//	{
//		printf("apple은 하나도 없습니다.\n");
//	}
//	else //if가 틀리면 (apple이 0 아니면) 실행
//	{
//		printf("apple은 0개가 아닙니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int input;
//	printf("숫자를 입력 : ");
//	scanf("%d", &input);
//	if (input>0)
//	{
//		printf("입력한 숫자는 양수입니다.");
//	}
//	else if (input<0)
//	{
//		printf("입력한 숫자는 음수입니다.");
//	}
//	else
//	{
//		printf("입력한 숫자는 0입니다.");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int input;
//	printf("숫자를 입력 : ");
//	scanf("%d", &input);
//	if (input>=10 && input<=99)
//	{
//		printf("input은 두 자리 숫자입니다.");
//	}
//	else
//	{
//		printf("input은 두 자리 숫자가 아닙니다.");
//		return 0;
//	}
//}

//#include <stdio.h>
//int main()
//{
//	int height = 170;
//	if (height > 150)
//	{
//		printf("키가 150 이상입니다.\n");
//	}
//	if (height > 160)
//	{
//		printf("키가 160 이상입니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int height = 170;
//	if (height > 150)
//	{
//		printf("키가 150 이상입니다.\n");
//	}
//	else if (height > 160)
//	{ //else if는 if가 틀렸을떄만 실행된다.
//		printf("키가 160 이상입니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int y_age;
//	printf("나이를 입력 : ");
//	scanf("%d", &y_age);
//	printf("관람 가능한 등급 : \n");
//	if (y_age>=0)
//	{
//		printf("-전체 관람가\n");
//	}
//	if (y_age>=12)
//	{
//		printf("-12세 관람가\n");
//	}
//	if (y_age >= 15)
//	{
//		printf("-15세 관람가\n");
//	}
//	return 0;
//}

#include <stdio.h>
int main()
{
	char initial;
	printf("문자를 입력 : ");
	scanf("%c", &initial);
	if (initial>='a' && initial<='z')
	{
		printf("입력한 문자는 소문자");
	}
    else if (initial>='A' && initial<='Z')
	{
		printf("입력한 문자는 대문자");
	}
	else
	{
		printf("입력한 문자는 알파벳이 아닙니다.");
	}
	return 0;
}
