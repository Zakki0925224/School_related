//float�^��double�^�̕ϐ���錾��������
//���ꂼ���0.01���P��������āA�덷���m�F�B

#include <stdio.h>
#include <windows.h>
int main(void)
{
	float num1 = 0;
	double num2 = 0;
	int i;
	//���ő�l�́u<=�v�ɒ���
	//�ő�l�𒴂���ƃI�[�o�[�t���[����
	for (i = 1; i <= 10000; i++)
	{
		num1 = num1 + 0.01;
		num2 = num2 + 0.01;
	}
	printf_s("float ->%f\ndouble ->%lf\n", num1, num2);
	system("pause");
	return 0;

}