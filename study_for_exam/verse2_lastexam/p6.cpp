//0�܂��͕��������͂����܂łɓ��͂��������f�[�^�̂����A�ő�l��\������

#include <stdio.h>
#include <windows.h>
int main(void)
{
	double num, max = 0;
	while (1)
	{
		printf_s("�l�����...");
		scanf_s("%lf", &num);
		
		//num���������Ƃ������Ƃ��m�F -> �ő�l�̏���
		if (num <= 0)
			break;
		if (max < num)
			max = num;
	}
	printf_s("�ő�l��%lf�ł��B\n", max);
	system("pause");
	return 0;
}