#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int a,c;
	printf("請輸入一個數:");
	
	scanf_s("%d", &a);
	c = a % 2;
	if (c ==  0)
	{
		printf("偶數\n");
	}
	else
	{
		printf("奇數\n");
	}
	system("pause");
	return 0;
}