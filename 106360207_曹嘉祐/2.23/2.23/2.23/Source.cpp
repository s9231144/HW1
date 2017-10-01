#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	printf("叫块计:");
	int a, b, c;
	scanf_s("%d%d%d", &a, &b, &c);
	if (a>b)
	{
		if (b > c){
			printf("程%d\n程%d\n", a, c);
		}
		else
		{
			if (a > c){
				printf("程%d\n程%d\n", a, b);
			}
			else
			{
				printf("程%d\n程%d\n", c, b);
			}
		}
	}
	else
	{
		if (a > c){
			printf("程%d\n程%d\n", b, c);
		}
		else
		{
			if (b > c){
				printf("程%d\n程%d\n", b, a);
			}
			else
			{
				printf("程%d\n程%d\n", c, a);
			}
		}
	}
	
	system("pause");
	return 0;
}