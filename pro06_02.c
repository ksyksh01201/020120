//#include <stdio.h> / //p 333 06.02
//double c_to_f(double c_temp); // <- 함수 원형. 밑 함수 그대로 복사
//int main()
//{
//	printf("섭씨 %lf도는 화씨 %lf입니다.\n", 36.0, c_to_f(36.0));
//	return 0;
//}
//
//double c_to_f(double c_temp)
//{
//	return 9.0 / 5.0 * c_temp + 32;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//int main()  //로또 번호 랜덤
//{
//	srand((unsigned)time(NULL));
//	for (int i = 0; i < 6; i++)
//	
//		printf("%d ", rand()%45 );
//	printf("\n");
//	return 0;
//	
//}

//#include <stdio.h>  // p362 13번 sqrt 계산
//#include <math.h>
//
//double x1, y1, x2, y2;
//double get_distance(x1, y1, x2, y2)
//{
//	
//}
//int main()
//{
//	int larger;
//	printf("첫 번째 점의 좌표를 입력 : ");
//	scanf("%lf %lf", &x1,&y1 );
//	printf("첫 번째 점의 좌표를 입력 : ");
//	scanf("%lf %lf", &x2,&y2);
//
//	larger = max(x1, y1, x2, y2);
//	printf("두 점 사이의 거리는 %lf입니다.\n", larger);
//	return 0;
//}


//#include <stdio.h>  // p362 13번 코드답
//#include <math.h>
//
//double get_distance(double x1, double y1,double x2,double y2)
//{
//	double result;
//	result = sqrt((x1 - x2)*(x1 - x2)+(y1 - y2)*(y1 -y2));
//	return result;
//}
//int main()
//{
//	double x1, y1, x2, y2;
//	double dist;
//	printf("첫 번째 점의 좌표 2개 입력 : ");
//	scanf_s("%lf %lf", &x1, &y1);
//	printf("첫 번째 점의 좌표를 2개 입력 : ");
//	scanf_s("%lf %lf", &x2, &y2);
//
//	dist = get_distance(x1, y1, x2, y2);
//	printf("두 점 사이의 거리는 %f입니다.\n", dist);
//	return 0;
//}

//

#include <stdio.h>
 void showMenu() //과제 p363 16번 atm
 {
    printf("********** Welcome to Express ATM **********\n");
    printf("<1> 잔액\n");
    printf("<2> 입금\n");
    printf("<3> 출금\n");
    printf("<4> 종료\n");
}

void menu1() 
{
    printf("잔고는 0원입니다.\n");
}

void menu2() 
{
    int money;
    printf("입금 금액을 입력하시오: ");
    scanf_s("%d", &money);
    printf("잔고는 %d원입니다.\n", money);
}

void menu3() 
{
    int out;
    printf("출금 금액을 입력하시오: ");
    scanf_s("%d", &out);
    printf("잔고는 -%d원입니다.\n", out);
}
void menu4()
{
    printf("이용해주셔서 감사합니다.\n");
}


int main() 
{
    int sel;

    showMenu();
    printf("메뉴를 선택하시오: ");
    scanf_s("%d", &sel);

     if (sel == 1)
         menu1();
     if (sel == 2)
         menu2();
     if (sel == 3)
         menu3();
     else
         menu4();
     
    return 0;
}

