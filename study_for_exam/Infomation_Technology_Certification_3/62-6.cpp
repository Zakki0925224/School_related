//3桁の正の整数を入力して、各位の数を表示
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

	printf_s("100の位->%d\n10の位->%d\n1の位->%d\n", syou100, syou10, syou1);
	return 0;
}