//n�̈قȂ鐔���̕��ו���P�ʂ肠��Ƃ���΁AP=1*2*...*n�ŋ��߂邱�Ƃ��ł���B
//n����͂������A���ו������ʂ肠�邩�\������
//n��0�ȉ� or 10�ȏ�̂Ƃ��͍ē��͂�����A�J��Ԃ��ɂ͖������[�v���g���B

#include <stdio.h>
#include <windows.h>
int main(void)
{
	//�ϐ�i,p�̏����l��1�ɂ���i�v�Z�o�O�h�~�j
	int n, i, p=1;
	while (1)
	{
		printf_s("���ln�����...");
		scanf_s("%d", &n);
		if (n > 0 && n < 10)	break;
	}
	
	//�����l��0�̂Ƃ��́u<�v�u>�v
	//�����l��1�̂Ƃ��́u<=�v�u>=�v
	for (i = 1; i <= n; i++)	p *= i;
	printf_s("���ו���%d�ʂ�ł��B\n", p);

	system("pause");
	return 0;
}