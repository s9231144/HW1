#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int a,c;
	printf("叫块计:");
	
	scanf_s("%d", &a);
	c = a % 2;
	if (c ==  0)
	{
		printf("案计\n");
	}
	else
	{
		printf("计\n");
	}
	system("pause");
	return 0;
}