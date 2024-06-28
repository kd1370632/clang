#include<stdio.h>
main()
{
	int s = 0;
	int i = 1;
	while (s <= 300) {
		s += i;
		i++;
	}
	printf("%d", s);
}