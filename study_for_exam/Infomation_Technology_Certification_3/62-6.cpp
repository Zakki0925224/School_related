//3���̐��̐�������͂��āA�e�ʂ̐���\��
#include <stdio.h>
int main(void)
{
	int a, syou100, syou10, syou1, amari;

	scanf_s("%d", &a);

	syou100 = a / 100;
	amari = a - syou100 * 100;
	syou10 = amari / 10;
	amari = amari - syou10 * 10;
	syou1 = amari;

	printf_s("100�̈�->%d\n10�̈�->%d\n1�̈�->%d\n", syou100, syou10, syou1);
	return 0;
}