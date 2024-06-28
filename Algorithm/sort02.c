#include<stdio.h>
main()
{
	int d[5] = { 30,7,25,16,10 };
	int i, j, w;

	i = 4;
	while (i > 0)
	{
		j = 0;
		while (j < i)
		{
			if (d[j] > d[j+1])
			{
				w = d[j];
				d[j] = d[j+1];
				d[j+1] = w;
			}
			j++;
		}
		i--;
	}
	for (i = 0; i < 5; i++)
	{
		printf("%d ", d[i]);
	}
}