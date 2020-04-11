#include<stdio.h>
#include"pub.h"

static void print_array(int argv[],int n)
{
    int i = 0;

    for(i=0;i<n;i++)
    {
        printf("%d\t", argv[i]);
    }
    printf("\n");
}

int main(int argc, char *argv)
{
	int array[15] = {13,2,31,90,1,6,76,5,93,55,63,43,54,88,99};
	int array_sort[15] = {13,22,31,40,42,60,76,85,93,95,96,99,100,110,119};
    int i = 0;

#if 0
    printf("selection sort\n");
    print_array(array,sizeof(array)/sizeof(int));
	selection_sort(array,15);
    print_array(array,sizeof(array)/sizeof(int));
    
    printf("insertion sort\n");
    print_array(array,sizeof(array)/sizeof(int));
	insertion_sort(array,15);
    print_array(array,sizeof(array)/sizeof(int));

    printf("bubble sort\n");
    print_array(array,sizeof(array)/sizeof(int));
	bubble_sort(array,15);
    print_array(array,sizeof(array)/sizeof(int));

    printf("merge sort\n");
    print_array(array,sizeof(array)/sizeof(int));
	merge_sort(array,0,14);
    print_array(array,sizeof(array)/sizeof(int));
#endif

    printf("quick sort\n");
    print_array(array,sizeof(array)/sizeof(int));
	quick_sort(array,0,14);
    print_array(array,sizeof(array)/sizeof(int));

#if 0
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
#endif

	printf("end of success\n");
	return 0;
}
