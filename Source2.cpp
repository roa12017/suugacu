#include <stdio.h>


/*�֐�

	�֐���1�̎d������������

	�֐��͈������ƌ���
	�^����ꂽ�l�����Ɏd����
	���{���A��l�Ō��ʂ�Ԃ�

	int sub (int x)
	{
		�u
		 1
		 1		����(�d�����e�Fx�����ɏ���
		 1
		 [
		 return�Ԃ�l;
	}

	((��

		int sub(int [x]) 			]
		{			 |		 		1
			int y=0; |		 ]		1�֐�
			y=x*x;��--		 1����	1
			y++;			 1		1
			return [y;]���Ԃ�]		]
		}

		int main(void)
		{
			int x=2;				�l���Ⴄ������
			int a=0;				�A���S���Y���ł����
			a=sub(x);				�����֐��ŏ���������
			printf("%d",a);
			a=sub(3);
			printf("%d",a);
		}
		//�ȈՌv�Z�@
		float Sub(int x, int y)
		{
			int z = 0;
			for (int i = 0; i < y; i++)
				z += x;

			return z;
		}
		int main(void)
		{
			int a = 0;
			a = Sub(2,3) + Sub(4,3);

			printf("%d", a);

			getchar();
			return 0;
		}

*/

//��4���͂����l���}�̒��ł����OK�����łȂ����NO�Əo�͂��Ȃ���
/*
int sub(int x,int y)
{
	
	if (x == 0 && y == 0)
	{
		printf("OK");
	}
	else if (x == 800 && y == 600||x == 600 && y == 800)
	{
		printf("OK");
	}
	else
	{
		printf("NO");
	}
	getchar();
	return y;
}
*/
void sub(int x, int y)
{
	if (x >= 0 && x <= 800 &&y >= 0 && y <= 600)
	{
		printf("OK");
	}
	else
	{
		printf("NO");
	}
	getchar();
	return;
}
int main(void)
{
	int s = 0;
	int z = 0;


	printf("�ŏ��ɐ�������͂��Ă�������\n");
	printf("x=");
	scanf_s("%d", &s);
	printf("������x��������͂��Ă�������\n");
	printf("y=");
	scanf_s("%d", &z);

	sub(s,z);

	 
	getchar();
	return 0;


}