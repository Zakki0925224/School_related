//�L�[�{�[�h����Q�̐���a,b����͂������Aa��b�̌v�Z���s���A���Ƃ��܂��\������
//b��0�̂Ƃ��u���̓~�X�ł��I�v�ƕ\�����I��

#include <stdio.h>
#include <windows.h>
int main(void)
{
	int a, b, ans1,ans2;
	printf_s("����a�����...");
	scanf_s("%d", &a);
	printf_s("����b�����...");
	scanf_s("%d", &b);

	if (b == 0)
	{
		printf_s("���̓~�X�ł��I\n");
		system("pause");
		return 0;
	}
	else
	{
		ans1 = a / b;
		ans2 = a % b;
		printf_s("��...%d\n���܂�...%d\n", ans1, ans2);
	}
	system("pause");
	return 0;
}
