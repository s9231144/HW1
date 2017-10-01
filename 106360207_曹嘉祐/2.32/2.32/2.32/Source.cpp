#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	double a, b,c;
	printf("請輸入身高(m)和體重(kg):");
	scanf_s("%lf%lf",&a,&b);
	
	printf("您的BMI:%.1lf\n", b / (a*a));
	printf("BMI VALUS\nUnderweight: less than 18.5\nNormal:      between 18.5 and 24.9\nOverwight:   between 25 and 29.9\nObese:       30 or greater\n");
	system("pause");
	return 0;
}