#include <stdio.h>


/*関数

	関数は1つの仕事だけをする

	関数は引き数と言う
	与えられた値を元に仕事を
	実施し帰り値で結果を返す

	int sub (int x)
	{
		「
		 1
		 1		処理(仕事内容：xを元に処理
		 1
		 [
		 return返り値;
	}

	((例

		int sub(int [x]) 			]
		{			 |		 		1
			int y=0; |		 ]		1関数
			y=x*x;←--		 1処理	1
			y++;			 1		1
			return [y;]→返す]		]
		}

		int main(void)
		{
			int x=2;				値が違うだけの
			int a=0;				アルゴリズムであれば
			a=sub(x);				同じ関数で処理させる
			printf("%d",a);
			a=sub(3);
			printf("%d",a);
		}
		//簡易計算機
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

//問4入力した値が図の中であればOKそうでなけれなNOと出力しなさい
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


	printf("最初に数字を入力してください\n");
	printf("x=");
	scanf_s("%d", &s);
	printf("もう一度数字を入力してください\n");
	printf("y=");
	scanf_s("%d", &z);

	sub(s,z);

	 
	getchar();
	return 0;


}