#include<stdio.h>
#include<stdlib.h>		
#include<time.h>
main()
{
		int i, w,ta,data[20];
		srand(time(0));
		i = 0;
		while (i < 20) {
			data[i] = i + 1;
			i++;
		}
		i=0;
		while (i < 20) {
			ta = rand() % 20;
			w = data[i];
			data[i]= data[ta];
			data[ta] = w;
			i++;
		}
		printf("%d", w);
}