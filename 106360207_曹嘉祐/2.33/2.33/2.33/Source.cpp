#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	double a, b, c, d, e, f,g,h,i;
	printf("�@���`���p��u��\n");
	printf("�C�Ѧ�p���{:");
	scanf_s("%lf",&a);
	printf("�C�[�ڨT�o����:");
	scanf_s("%lf", &b);
	printf("�C�ѥ[�ڨT�o��p���{��:");
	scanf_s("%lf",&c);
	printf("�C�Ѫ������O:");
	scanf_s("%lf",&d);
	printf("�C�Ѫ��L���O:");
	scanf_s("%lf",&e);
	printf("�C�Ѷ}���`��O:%.1lf\n",a*b*c+(d+e));
	printf("�@���H��:");
	scanf_s("%lf", &f);
	printf("�`�@�`��:%.1lf��\n", (a*b*c + (d + e)) - ((a*b*c + (d + e)) / f));
	system("pause");
	return 0;
}