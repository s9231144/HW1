#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int a, b,c;
	printf("�п�J�@�Ӽ�:");

	scanf_s("%d%d", &a,&b);
	c = a%b;
	if (c == 0)
	{
		printf("%d��%d������\n",a,b);
	}
	else
	{
		printf("%d����%d������\n",a, b);
	}
	system("pause");
	return 0;
}