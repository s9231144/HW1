#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	printf("�п�J�T�Ӽ�:");
	int a, b, c;
	scanf_s("%d%d%d", &a, &b, &c);
	if (a>b)
	{
		if (b > c){
			printf("�̤j��%d\n�̤p��%d\n", a, c);
		}
		else
		{
			if (a > c){
				printf("�̤j��%d\n�̤p��%d\n", a, b);
			}
			else
			{
				printf("�̤j��%d\n�̤p��%d\n", c, b);
			}
		}
	}
	else
	{
		if (a > c){
			printf("�̤j��%d\n�̤p��%d\n", b, c);
		}
		else
		{
			if (b > c){
				printf("�̤j��%d\n�̤p��%d\n", b, a);
			}
			else
			{
				printf("�̤j��%d\n�̤p��%d\n", c, a);
			}
		}
	}
	
	system("pause");
	return 0;
}