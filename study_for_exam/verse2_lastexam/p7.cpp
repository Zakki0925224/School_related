//�L�[�{�[�h����0�ȏ�100�ȉ��̐����f�[�^��10���� -> 40�����̐��l�̌���\��
//�f�[�^��0�ȏ�100�ȉ����Ƃ������f�͕K�v�Ȃ�

#include <stdio.h>
#include <windows.h>
int main(void)
{
	int i, num, j=0;
	for (i = 1; i <= 10; i++)
	{
		printf_s("���������...");
		scanf_s("%d", &num);
		if (num < 40)	j++;
	}
	printf_s("40�����̐��l�̌���%d�ł��B\n", j);
	system("pause");
	return 0;
}