//#include <stdio.h>
//int main()     //whlie�� ����Ͽ� A���� Z������ ���ĺ��� ���. �� F�� ��¾ȵ�
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
//	printf("����Ų��� 31 ������ �����մϴ�.\n");
//	while (1) {
//		printf("%c: ", 'A' + turn);
//		scanf("%d", &input);
//		total += input;
//		printf("=> %d\n", total);
//		turn = !turn;
//
//		if (input < 0 || input >3)
//		{
//			printf("3~1 ������ ���ڸ� �ٽ� �Է����ּ���\n");
//			continue;
//		}
//
//		if (total>=31)
//		{
//			break;
//		}
//	}
//	printf("%c�� 31 �̻��� ���� %c�� �¸��Դϴ�.", 'A' + !turn, 'A' + turn);
//	return 0;
//}

#include <stdio.h>
int main()
{
	int num;
	printf("���ڸ� ���� �� �Է� : ");
	scanf("%d", &num);
	printf("�Է��� ������ ���� : %d\n", num);
	return 0;
}