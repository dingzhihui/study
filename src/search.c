/* param: 
 *        ayr search in the array
 *        n   the number of the array  
 *        x   value of the search
 * return:
 *        -1 search no result
 *        >0 the index of the result that searched*/
int linear_search(int array[], int n, int x)
{
	int i;
	int answer = -1;
	for(i=0; i<n; i++)
	{
		if(x == array[i])
			answer  = i;
	}
	return answer;
}

/* param: 
 *        ayr search in the array
 *        n   the number of the array  
 *        x   value of the search
 * return:
 *        -1 search no result
 *        >0 the index of the result that searched*/
int better_linear_search(int array[], int n, int x)
{
	int i;
	for(i=0; i<n; i++)
	{
		if(x == array[i])
			return i;
	}
	return -1;
}

/* param: 
 *        ayr search in the array
 *        n   the number of the array  
 *        x   value of the search
 * return:
 *        -1 search no result
 *        >0 the index of the result that searched*/
int sentinel_linear_search(int array[], int n, int x)
{
	int i = 0;
	int last = array[n-1];
	array[n-1] = x;
	while(array[i] != x && i < n)
	{
		i++;
	}
	array[n-1] = last;
	if(i<n-1 || array[n-1] == x)
		return i;
	else
		return -1;
}

/* search x in the array from i to n
 * param: 
 *        ayr search in the array
 *        n   the number of the array  
 *        i   start index of the array 
 *        x   value of the search
 * return:
 *        -1 search no result
 *        >0 the index of the result that searched*/
int recursive_linear_search(int array[], int n, int i, int x)
{
	if(i > n)
		return -1;
	else if(i <= n && array[i] == x)
		return i;
	else
		recursive_linear_search(array, n, i+1, x);
}

/* search x in the array from i to n, the array need be sorted,little to big
 * param: 
 *        ayr search in the array
 *        n   the number of the array  
 *        x   value of the search
 * return:
 *        -1 search no result
 *        >0 the index of the result that searched*/
int binary_search(int array[], int n, int x)
{
	int left = 0;
	int right = n;
	int middle = 0;
	while(left <= right)
	{
		middle = (left + right)/2;
		if(x > array[middle])
		{
			left = middle + 1;
		}
		else if(x < array[middle])
		{
			right = middle - 1;
		}
		else
		{
			return middle;
		}
	}
	return -1;
}

/* search x in the array from i to n, the array need be sorted,little to big
 * param: 
 *        ayr search in the array
 *        left,right  range of the array
 *        x   value of the search
 * return:
 *        -1 search no result
 *        >0 the index of the result that searched*/
int recursive_binary_search(int array[], int left, int right, int x)
{
	int middle = 0;
	if(left > right)
	{
		return -1;
	}
	while(left <= right)
	{

		middle = (left + right)/2;
		if(x > array[middle])
		{
			return(array, middle+1, right, x);
		}
		else if(x < array[middle])
		{
			return(array, left, middle-1, x);
		}
		else
		{
			return middle;
		}
	}
}
