#include<stdio.h>
main()
{
	int a = 100, b;		//変数の宣言
	int　*p_a;			//ポインタの宣言  *をつけた右隣だけポインタになる（ｃ言語は）
	p_a = &a;			//アドレスのセット
	b = *p_a;
	printf("a=%d b=%d *p_a=%d\n", a, b, *p_a);
}