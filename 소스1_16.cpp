//#include <stdio.h>
//int main()
//{  (3)
//	
//	int y = 2;
//	int i = 1;
//	for (int x = 1; x <= y; x++)
//	{
//		printf(" ");
//	}
//	for (int x = 1; x <= i; x++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	y--;
//	i+=2;
//	for (int x = 1; x <= y; x++)
//	{
//		printf(" ");
//	}
//	for (int x = 1; x <= i ; x++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	y--;
//	i+=2;
//	for (int x = 1; x <= y; x++)
//	{
//		printf(" ");
//	}
//	for (int x = 1; x <= i ; x++)
//	{
//		printf("*");
//	}
//	printf("\n");
//
//}

//#include <stdio.h>
//int main()
//{  
//	int Line = 3;
//	scanf("%d", &Line);
//	int i = 1;  
//	
//
//	for (int y = Line-1; y >= 1;y--)
//	{   
//		for (int x = 1; x <= y; x++)
//		{ 
//			printf(" ");
//		}
//		for (int x = 1; x <= i; x++)
//		{
//			printf("*");
//		}
//		printf("\n");
//		i+=2;
//	}
//}

//#include <stdio.h>
//int main()
//{  (1)
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("\n");
//	printf(" ");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("\n");
//	printf(" ");
//	printf(" ");
//	printf("*");
//
//}

//#include <stdio.h>
//int main()
//{   
//	for (int x = 1; x <=0 ; x++)
//	{
//		printf(" ");
//	}
//	for (int x = 1; x <=5 ; x++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	for (int x = 1; x <=1 ; x++)
//	{
//		printf(" ");
//	}
//	for (int x = 1; x <=3 ; x++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	for (int x = 1; x <=2 ; x++)
//	{
//		printf(" ");
//	}
//	for (int x = 1; x <=1 ; x++)
//	{
//		printf("*");
//	}
//}

//#include <stdio.h> 
//int main()
//{ (3)
//	int y = 0;
//	int i = 5;
//	for (int x = 1; x <= y; x++)
//	{
//		printf(" ");
//	}
//	for (int x = 1; x <= i; x++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	y++;
//	i-=2;
//	for (int x = 1; x <= y; x++)
//	{
//		printf(" ");
//	}
//	for (int x = 1; x <= i ; x++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	y++;
//	i-=2;
//	for (int x = 1; x <= y; x++)
//	{
//		printf(" ");
//	}
//	for (int x = 1; x <= i ; x++)
//	{
//		printf("*");
//	}
//	printf("\n");
//
//}
    




#include <stdio.h>
int main()
{
    int y = 0; 
    int i = 5;
    for (; y < 3;) {
        for (int x = 1; x <= y; x++) { 
            printf(" ");
        }
        for (int x = 1; x <= i; x++) { 
            printf("*");
        }
        printf("\n");
        y++; 
        i-=2; 
    }

    return 0;
}
