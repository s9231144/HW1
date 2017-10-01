#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	double a, b, c, d, e, f,g,h,i;
	printf("共乘節約計算工具\n");
	printf("每天行駛哩程:");
	scanf_s("%lf",&a);
	printf("每加侖汽油價格:");
	scanf_s("%lf", &b);
	printf("每天加侖汽油行駛哩程數:");
	scanf_s("%lf",&c);
	printf("每天的停車費:");
	scanf_s("%lf",&d);
	printf("每天的過路費:");
	scanf_s("%lf",&e);
	printf("每天開車總花費:%.1lf\n",a*b*c+(d+e));
	printf("共乘人數:");
	scanf_s("%lf", &f);
	printf("總共節省:%.1lf元\n", (a*b*c + (d + e)) - ((a*b*c + (d + e)) / f));
	system("pause");
	return 0;
}