#include<stdio.h>
main()
{
	int a = 100;
	int* p_a;

	p_a = &a;


	printf("a = %d &a = %p\n", a, &a);
	printf("p_a = %d *p_a =%p &p_a = %p\n", p_a, *p_a, &p_a);
}