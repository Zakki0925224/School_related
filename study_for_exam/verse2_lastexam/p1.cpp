//p84�@�ߖ����
//�L�[�{�[�h���琮������͂������A���̐����R�̔{�����ǂ������o�͂���v���O����������Ȃ����B�������A�������Z�q���g�킸�ɏ������L�q���Ȃ����B

#include <stdio.h>
#include <windows.h>
int main(void)
{
	int num;
	printf_s("���������...");
	scanf_s("%d", &num);
	if (num % 3)	printf_s("3�̔{���ł��B\n");
	else			printf_s("3�̔{���ł͂���܂���B\n");
	
	system("pause");
	return 0;
}