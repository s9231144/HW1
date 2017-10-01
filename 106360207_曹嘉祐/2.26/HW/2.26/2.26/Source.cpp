#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int a, b,c;
	printf("請輸入一個數:");

	scanf_s("%d%d", &a,&b);
	c = a%b;
	if (c == 0)
	{
		printf("%d為%d的倍數\n",a,b);
	}
	else
	{
		printf("%d不為%d的倍數\n",a, b);
	}
	system("pause");
	return 0;
}