#include <stdio.h>
/*関数
　main…全体をする―――――――↓
      ↓　↑  ↑――――返り値|引数
  sub…一部の仕事をする－↑　　 ↓
				 ↑―――――――
 再起関数
 　関数の内で関数をコールして
   再帰的に実行する
   
  void main()		―→sub(int x)←――――
  {	　①	    ②｜	{||				｜	 |
	　↓		 4｜	 || if(x==0)	｜④ |④
	sub( 4);―――	　 ⑤||③ return ;	｜2	 |0
			   ｜		　→sub(x/2);――――
			   ｜			　return ;		
  }			   ｜		}
			   ｜②
  二進数表示   ↓4
  void sub(int x)
  {
	if(x==0)
		return;
	sub(x/2);
	printf("%d"x%2);
  }

  再起関数は引数をメモリに記憶するので
  メモリの負担が大きい
  */

//問　AとBを加算する関数・AとBを減算する関数を作成
//D=(4+5)-3・Dを関数を使用して求めよ
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

// 1/2 と 1/3を加算して出力しなさい
// 1/2 1/3 = 2/6 3/6 = 5/6
int sub(int b,int a,int d,int c)
{
	int r = 0;int u = 0;int w = 0;
	r = c*b;//分子
	u = a*d;//分子
	w = a*c;//分母
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
