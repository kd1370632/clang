#include<stdio.h>
main()
{
	char data[10] = "Orange";
	char* p_data;
	char* p = "Apple";
	p_data = data;
	printf("data[ ]=");
	while (*p_data) {
		putchar(*p_data++);
	}
	printf("\n*p=");

	//	p[3] = 'f';		こういったこともできるけどあんまやらんほうがいい

	while (*p) {
		putchar(*p++);
	}
	putchar('\n');
}