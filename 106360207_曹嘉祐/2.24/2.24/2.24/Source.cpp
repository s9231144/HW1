#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int a,c;
	printf("�п�J�@�Ӽ�:");
	
	scanf_s("%d", &a);
	c = a % 2;
	if (c ==  0)
	{
		printf("����\n");
	}
	else
	{
		printf("�_��\n");
	}
	system("pause");
	return 0;
}