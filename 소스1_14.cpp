//#include <stdio.h>
//int main()
//{  //(1)
//	printf("*****");
//	printf("\n");
//	printf("****");
//	printf("\n");
//	printf("***");
//	printf("\n");
//	printf("**");
//	printf("\n");
//	printf("*");
//}

//#include <stdio.h>
//int main()
//{    //(2)
//	for (int x = 1; x <=5 ; x++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	for (int x = 1; x <=4 ; x++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	for (int x = 1; x <=3 ; x++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	for (int i = 1; i <=2 ; i++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	for (int x = 1; x <=1 ; x++)
//	{
//		printf("*");
//	}
//	printf("\n");
//}

//#include <stdio.h>
//int main()
//{  //(3)
//	int y = 5;
//	for (int i = 1; i <=y ; i++)
//	{
//		printf("*");
//	}
//	y--;
//	printf("\n");
//	for (int i = 1; i <=y ; i++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	y--;
//	for (int i = 1; i <=y ; i++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	y--;
//	for (int i = 1; i <=y ; i++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	y--;
//	for (int i = 1; i <=y ; i++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	
//}
//#include <stdio.h>
//int main()
//{  //(4)
//	int y = 5;
//	for (; y >= 1;)
//	{ 
//		for (int x = 1; x <= y; x++)
//		{
//			printf("*");
//		}
//		printf("\n");
//		y--;
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{ //(5)
//	for (int y = 5; y >= 1; y--)
//	{
//		for (int x = 1; x <= y; x++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//}

//#include <stdio.h>
//int main()
//{ //(6)
//	int Line = 5;
//	printf(">>");
//	scanf("%d", &Line); 
//	for (int y = Line; y >=1 ; y--)
//	{  
//		for (int x = 1; x <=y ; x++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	
//}

//#include <stdio.h>
//int main()
//{ 
//	printf(" ");
//	printf(" ");
//	printf("*");
//	printf("\n");
//	printf(" ");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("\n");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("\n");
//}

//

//#include <stdio.h>
//int main()
//{  //(2) 
//	for (int x = 1; x <=2 ; x++)
//	{
//		printf(" ");
//	}
//	for (int x = 1; x <=1 ; x++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	for (int x = 1; x <= 1; x++)
//	{
//		printf(" ");
//	}
//	for (int x = 1; x <= 3; x++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	for (int x = 1; x <= 0; x++)
//	{
//		printf(" ");
//	}
//	for (int x = 1; x <= 5; x++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	
//}

#include <stdio.h>
int main()
{
	int y = 2;

	for (int x = 1; x <=y ; x++)
	{
		printf(" ");
	}
	for (int x = 1; x <=1 ; x++)
	{
		printf("*");
	}
	printf("\n");
	y--;

	for (int x = 1; x <= y; x++)
	{
		printf(" ");
	}
	for (int x = 1; x <= 3; x++)
	{
		printf("*");
	}
	printf("\n");
	y--;

	for (int x = 1; x <= y; x++)
	{
		printf(" ");
	}
	for (int x = 1; x <= 5; x++)
	{
		printf("*");
	}
	printf("\n");
	y--;
}



