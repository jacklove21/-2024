#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//int main()
//{
//	int n = 100;222222222222222222222222222222222
//	printf("%d\n", n);//printf��ӡ����
//	printf("%c\n", 'q');//printf��ӡ�ַ�
//	printf("%lf\n", 3.14);//printf��ӡ˫���ȸ�����
//}
//ctrl��k�ټ�c�Ǽ�ע�ͣ�ctrl��k�ټ�u������ע��
//int main()
//{
//	int i = 0;
//	for (i = 32 ;  i <= 127; i++)
//	{
//		printf("%c", i);
//		if (i % 16 == 15)
//			printf("\n");
//	}
//	return 0;
//}
//�����ַ��Ĵ�ӡ������%c��ָ����ʽ
//int main()
//{
//	printf("%s\n", "hello,world!");
//	return 0;
//
// }
//  \0���ַ����ĳ���  ����
//int main()
//{
//	char arr1[] = { 'a','b','c','\0'};
//	char arr2[] = "abc";
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	return 0;
//}
//int main()
//{
//	printf("abc\\ndef");
//	return 0;
//}
//int main()
//{
//	printf("%c\n", '\'');
//	printf("%s\n", "\"");
//	printf("c:\\test\\code\\test.c\n");
//	printf("\a");
//	printf("%c\n", '\130');
//	printf("c\n", '\x30');
//}
//int main()
//{
//	int a = 20;
//	int b = 0;
//	b = a + 5;
//	printf("%d\n", b);
//	return  0;
//}
//int add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	printf("hehe\n");
//	int ret = add(2, 3);
//	return 0;
// }
//void printf(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++);
//	{
//		printf("%d", arr[i]);
//	}
//}
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 }
//	;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = 10 - i;
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//short [int]
//[signed] short [int]
//unsigned short [int]//������
////����
//int
//[signed] int
//unsigned [int]
////������
//long [int]
//[signed] long [int] 
//unsigned loog [int]
////������
//float float float float 
//double double double double
//long double long double long double long double
////��������
//_bool
//�������͵�ʹ�õð���ͷ�ļ�<stdbool.h>
//�������ͱ�����ȡֵ�ǣ�true����false
//#define bool _bool
//#define false 0
//#define true 1
//_bool flag = true;
//if (flag);
//printf("i like c");
//int main()
//{
//	int a = 10;
//	printf("%zd\n", sizeof(a));
//	printf("%zd\n", sizeofa);
//	printf("%zd\n", sizeof(int));
//	printf("%zd\n", sizeof(3+3.5));
//	return 0;
//}

//int func(int a, int b)
//{
//	return(a + b);
//}
// int main()
//{
//	int x = 2;
//	int y = x;
//	int z = 8;
//	int r =0;
//	r = func(func(x, y), func(y, z));
//	printf(" % d\n", r);
//}
//void fun(int x, int y)
//{
//	 x = x + y;
//	 y = x - y;
//	 x = x - y;
//	printf("%d,%d\n", x, y);
//}
//int main()
//{
//	int x = 2;
//	int y = 3;
//	fun(x, y);
//	printf("%d,%d\n", x, y);
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d\n", i);
//		i++;
//	} while (i <= 10);
//	return 0;
////}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int count = 0;
//	do
//	{
//	count++;
//	n = n / 10;
//} while (n);
//		printf("%d\n", count);
//return 0;
//
//}
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		i++;
//		if (i == 5)
//			continue;//��ӡ��5���һֱ������ѭ��
//		printf("%d\n", i);
//		
//	}
//	return 0;//continue����������������ѭ����continue��ߵĴ��룬
//	//ֱ��ȥ�жϲ��֣����Ƿ������һ�ε��ж�
//}
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;
//		printf("%d\n", i);
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		int flag = 1;
//		for (j = 2; j <= i - 1; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d", i); 
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0; 
//}
//int main()
//{ b    
//again:
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//	goto again;
//	return 0;
//}

//int main()
//{
//	srand(2);
//	printf("%d\n", rand());
//	printf("%d\n", rand()); 
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	return 0;
//}
int main()
{
	int i = 1;
	while (i <= 10)
	{
		if (i == 5)
			break;
		printf("%d\n", i);
			i = i + 1;
	}
	return 0;
}