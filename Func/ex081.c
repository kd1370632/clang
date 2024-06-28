#include<stdio.h>
int get_max(int* array, int size);
int get_min(int* array, int size);

main()
{
	int data[8] = { 6,10,8,2,9,5,1,7 };
	printf("Å‘å’l=%d\n", get_max(data, 8));
	printf("Å¬’l=%d\n", get_min(data, 8));
}

int get_max(int* array, int size)
{
	int i, max;

	for (max = *array, i = 1; i < size; i++) {
		if (max < *(array + i)) {
			max = *(array + i);
		}
	}
	return max;
}

int get_min(int* array, int size)
{
	int i, min;
	for (min = *array, i = 1; i < size; i++) {
		if (min = *(array + i)) {
			min = *(array + i);
		}
	}
	return min;
}