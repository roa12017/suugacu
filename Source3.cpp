#include <stdio.h>
/*�֐�
�@main�c�S�̂�����\�\�\�\�\�\�\��
      ���@��  ���\�\�\�\�Ԃ�l|����
  sub�c�ꕔ�̎d��������|���@�@ ��
				 ���\�\�\�\�\�\�\
 �ċN�֐�
 �@�֐��̓��Ŋ֐����R�[������
   �ċA�I�Ɏ��s����
   
  void main()		�\��sub(int x)���\�\�\�\
  {	�@�@	    �A�b	{||				�b	 |
	�@��		 4�b	 || if(x==0)	�b�C |�C
	sub( 4);�\�\�\	�@ �D||�B return ;	�b2	 |0
			   �b		�@��sub(x/2);�\�\�\�\
			   �b			�@return ;		
  }			   �b		}
			   �b�A
  ��i���\��   ��4
  void sub(int x)
  {
	if(x==0)
		return;
	sub(x/2);
	printf("%d"x%2);
  }

  �ċN�֐��͈������������ɋL������̂�
  �������̕��S���傫��
  */

//��@A��B�����Z����֐��EA��B�����Z����֐����쐬
//D=(4+5)-3�ED���֐����g�p���ċ��߂�
/*
int D(int w ,int s,int a)
{
	int d = 0;

	d = (w + s) - a;
	printf("%d", d);
	getchar();
	return d;
	printf("\n");
}
void main()
{
	int x=4;
	int s=5;
	int a=3;
	D(x,s,a);
}*/

// 1/2 �� 1/3�����Z���ďo�͂��Ȃ���
// 1/2 1/3 = 2/6 3/6 = 5/6
int sub(int b,int a,int d,int c)
{
	int r = 0;int u = 0;int w = 0;
	r = c*b;//���q
	u = a*d;//���q
	w = a*c;//����
	int f = 0;
	f = r + u;
	printf("%d/%d", f, w);

	getchar();
	return f;
}

void main()
{
	int x[] = { 1,2 };
	int y[] = { 1,3 };

	sub(x[0], x[1], y[0], y[1]);

}
