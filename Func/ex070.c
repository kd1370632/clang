#include<stdio.h>
int add(int a, int b);	//プロトタイプ宣言
main()
{
	int a, b, kotae;
	printf("整数を２つ空白を開けて入力");
	scanf("%d%d", &a, &b);
	kotae = add(a, b);
	printf("合計は%dです\n", kotae);

	printf("合計は%dです\n", add(a, b));
}

//関数addの記述
int add(int a, int b)
{
	//int ans;
	//ans = a + b;
	//return ans;

	return a+b;		//省略して１行で書くことも可能
}