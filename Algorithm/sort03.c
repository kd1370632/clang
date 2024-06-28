#include<stdio.h>
main()
{
	int d[5] = { 30,7,25,16,10 };
	int i, j, w;
	i = 1;
	while (i < 5){
		j = i-1;
		while (j>=0){
			if (d[j+1] >= d[j]){
				break;
			}
				w = d[j];
				d[j] = d[j + 1];
				d[j + 1] = w;
			j--;
		}
		i++;
	}
	for (i = 0; i < 5; i++)
	{
		printf("%d ", d[i]);
	}
}