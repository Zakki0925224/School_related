//����N�i�S�����̐����j����͂��A���̔N�����邤�N���ǂ���
//4�A400�Ŋ���؂��΂��邤�N
//100�Ŋ���؂��΂��邤�N�ł͂Ȃ�

#include <stdio.h>
#include <windows.h>
int main(void)
{
	int year;
	printf_s("��������...");
	scanf_s("%d", &year);
	//��
	if ((year % 4 == 0) || (year % 400 == 0) && (year % 100 != 0))	printf_s("���邤�N�ł��B\n");
	else	printf_s("���邤�N�ł͂���܂���B\n");
	system("pause");
	return 0;

}