#include<stdio.h>

#define SWAP(a,b) {(a)=(a)+(b);(b)=(a)-(b);(a)=(a)-(b);}

/*return
 *      0 success*/
int selection_sort(int array[], int n)
{
    int i = 0;
    int j = 0;
    int small = 0;

    for(i=0; i<n-2; i++)
    {
        small = i;
        /*select the small after i*/
        for(j=i+1; j<n-1; j++)
        {
            if(array[j] < array[small])
            {
                small = j;
            }
        }
        //printf("small[%d]\n",small);

        /*the i be the small*/
        if(array[i] > array[small])
            SWAP(array[i], array[small])
    }
    return 0;
}

/*return
 *      0 success*/
int insertion_sort(int array[], int n)
{
    int i,j,cur;
    /*begin from the 2ed*/
    for(i=1;i<n;++i)
    {
        /*move to the right loction*/
        for(j=i; j>0 && array[j-1]>array[j]; --j)
        {
            SWAP(array[j],array[j-1])
        }
    } 
    return 0;
}


/*return
 *      0 success*/
int bubble_sort(int array[], int n)
{
    int i = 0;
    int j = 0;
    for(i=0;i<n;i++)
    {
        for(j=n-1;j>i;j--)
        {
            if(array[j] < array[j-1])
                SWAP(array[j],array[j-1])
        }
    }
}


static void merge(int a[],int l,int mid,int r)
{
    int aux[r-l+1],i,j,k;

    /*2 part, part 1: l~mid, part 2: mid+1~r*/
    for(k=l;k<=r;k++)
        aux[k-l]=a[k];

    i=l;
    j=mid+1;
    for(k=l;k<=r;k++)
    {
        /*part 1 have no data*/
        if(i>mid)
        {
            a[k]=aux[j-l];
            j++;
        }
        /*part 2 have no data*/
        else if(j>r)
        {
            a[k]=aux[i-l];
            i++;
        }
        /*normal*/
        else if(aux[i-l]>aux[j-l])
        {
            a[k]=aux[j-l];
            j++;
        }
        /*normal*/
        else
        {
            a[k]=aux[i-l];
            i++;
        }
    } 
}


#if 0
static int merge(int array[], int start, int middle, int end)
{
    int arr_a[middle-start];
    int arr_b[end-middle+1];
    int i = 0;
    int j = 0;
    int k = 0;

    printf("array:\t");
    for(i=start;i<middle;i++)
    {
        arr_a[i-start] = array[i];
        printf("%d\t",arr_a[i-start]);
    }
    printf("\t\t");
    for(i=middle;i<=end;i++)
    {
        arr_b[i-middle] = array[i+middle];
        printf("%d\t",arr_b[i-middle]);
    }
    printf("\n");
    //memcpy(arr_a, array, sizeof(int)*(middle-start+1));
    //memcpy(arr_a, array, sizeof(int)*(middle-start+1));
    //memcpy(arr_b, array+(middle-start+1), sizeof(int)*(end-middle));

    for(i=start;i<=end;i++)
    {
        if(arr_a[j] <= arr_b[k])
        {
            array[i-start] = arr_a[j];
            j++;
        }
        else
        {
            array[i] = arr_b[k];
            k++;
        }
    }

    return 0;
}
#endif
/*return
 *      0 success*/
int merge_sort(int array[], int start, int end)
{
    int middle = 0;

    /*only one return*/
    if(start >= end)
        return 0;

    middle = (start + end)/2;
    merge_sort(array, start, middle);
    merge_sort(array,  middle+1, end);
    merge(array, start, middle, end);
    return 0;
}


/*return the reference index*/
static int partition(int a[], int l, int r)
{
    int i = l, j = r, x = a[l];//初始值 x is the reference
    while (i < j) {//只要i<j就一直循环从后往前找，从前往后找； 
        while(i < j && a[j]>= x) // 从右向左找第一个小于x的数
            j--;
        if(i < j)
            a[i++] = a[j];//进行填数 
        while(i < j && a[i]< x) // 从左向右找第一个大于等于x的数
            i++;
        if(i < j)
            a[j--] = a[i];//进行填数 
    }
    a[i] = x;
    return i;

#if 0
    /*use the r as the reference value*/
    int q = l;
    int i = 0;
    for(i=l;i<=r-1;i++)
    {
        if(a[i] < a[r])
        {
            SWAP(a[i],a[q])
                q++;
        }
    }
    SWAP(a[r],a[q])
        return q;
#endif
}
/*return
 *      0 success*/
int quick_sort(int arr[], int l, int r)
{
    int mid = 0;
    if(l >= r)
        return 0;
    mid = partition(arr,l,r);
    quick_sort(arr,l,mid-1);
    quick_sort(arr,mid+1,r);
}
