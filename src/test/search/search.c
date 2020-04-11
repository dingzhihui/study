#include<stdio.h>
#include"pub.h"
int main(int argc, char *argv)
{
	int array[15] = {13,2,31,90,1,6,76,5,93,55,63,43,54,88,99};
	int array_sort[15] = {13,22,31,40,42,60,76,85,93,95,96,99,100,110,119};


	printf("linear_search search value 55 should return 9 actual return [%d]\n", linear_search(array, 15, 55));
	printf("linear_search search value 99 should return 14 actual return [%d]\n", linear_search(array, 15, 99));
	printf("linear_search search value 100 should return -1 actual return [%d]\n", linear_search(array, 15, 100));

	printf("better_linear_search search value 55 should return 9 actual return [%d]\n", better_linear_search(array, 15, 55));
	printf("better_linear_search search value 99 should return 14 actual return [%d]\n", better_linear_search(array, 15, 99));
	printf("better_linear_search search value 100 should return -1 actual return [%d]\n", better_linear_search(array, 15, 100));

	printf("sentinel_linear_search search value 55 should return 9 actual return [%d]\n", sentinel_linear_search(array, 15, 55));
	printf("sentinel_linear_search search value 99 should return 14 actual return [%d]\n", sentinel_linear_search(array, 15, 99));
	printf("sentinel_linear_search search value 100 should return -1 actual return [%d]\n", sentinel_linear_search(array, 15, 100));

	printf("recursive_linear_search search value 55 should return 9 actual return [%d]\n", recursive_linear_search(array, 15, 0, 55));
	printf("recursive_linear_search search value 99 should return 14 actual return [%d]\n", recursive_linear_search(array, 15, 0, 99));
	printf("recursive_linear_search search value 100 should return -1 actual return [%d]\n", recursive_linear_search(array, 15, 0, 100));

	printf("binary_search search value 40 should return 3 actual return [%d]\n", binary_search(array_sort, 15, 40));
	printf("binary_search search value 119 should return 14 actual return [%d]\n", binary_search(array_sort, 15, 119));
	printf("binary_search search value 44 should return -1 actual return [%d]\n", binary_search(array_sort, 15, 44));

	printf("recursive_binary_search search value 40 should return 3 actual return [%d]\n", recursive_binary_search(array_sort, 0, 14, 40));
	printf("recursive_binary_search search value 119 should return 14 actual return [%d]\n", recursive_binary_search(array_sort, 0, 14, 119));
	printf("recursive_binary_search search value 44 should return -1 actual return [%d]\n", recursive_binary_search(array_sort, 0, 14, 44));

	printf("end of success\n");
	return 0;
}
