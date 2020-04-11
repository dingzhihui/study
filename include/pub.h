#ifndef __PUB_H_
#define __PUB_H_
/* param: 
 *        ayr search in the array
 *        n   the number of the array  
 *        x   value of the search
 * return:
 *        -1 search no result
 *        >0 the index of the result that searched*/
int linear_search(int array[], int n, int x);

/* param: 
 *        ayr search in the array
 *        n   the number of the array  
 *        x   value of the search
 * return:
 *        -1 search no result
 *        >0 the index of the result that searched*/
int better_linear_search(int array[], int n, int x);

/* param: 
 *        ayr search in the array
 *        n   the number of the array  
 *        x   value of the search
 * return:
 *        -1 search no result
 *        >0 the index of the result that searched*/
int sentinel_linear_search(int array[], int n, int x);

/* search x in the array from i to n
 * param: 
 *        ayr search in the array
 *        n   the number of the array  
 *        i   start index of the array 
 *        x   value of the search
 * return:
 *        -1 search no result
 *        >0 the index of the result that searched*/
int recursive_linear_search(int array[], int n, int i, int x);

/* search x in the array from i to n, the array need be sorted
 * param: 
 *        ayr search in the array
 *        n   the number of the array  
 *        x   value of the search
 * return:
 *        -1 search no result
 *        >0 the index of the result that searched*/
int binary_search(int array[], int n, int x);

/* search x in the array from i to n, the array need be sorted,little to big
 * param: 
 *        ayr search in the array
 *        left,right  range of the array
 *        x   value of the search
 * return:
 *        -1 search no result
 *        >0 the index of the result that searched*/
int recursive_binary_search(int array[], int left, int right, int x);


int selection_sort(int array, int n);

#endif
