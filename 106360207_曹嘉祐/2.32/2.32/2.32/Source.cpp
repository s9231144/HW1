#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	double a, b,c;
	printf("�п�J����(m)�M�魫(kg):");
	scanf_s("%lf%lf",&a,&b);
	
	printf("�z��BMI:%.1lf\n", b / (a*a));
	printf("BMI VALUS\nUnderweight: less than 18.5\nNormal:      between 18.5 and 24.9\nOverwight:   between 25 and 29.9\nObese:       30 or greater\n");
	system("pause");
	return 0;
}