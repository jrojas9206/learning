#include "inc/sorting.h"

void insertion_sort(int* A, int array_sz, int verbose)
{
    int i,
        key;

    for(int j=1; j<array_sz; j++)
    {
        key = A[j];
        i = j-1;
        while (i>-1 && A[i]>key)
        {
            A[i+1] = A[i];
            i--;
        }
        A[i+1] = key;  
        if(verbose==1)
        {
            printf("--%d--\n", j);
            for(int v=0; v < array_sz; v++)
            {
                printf("A[%d]: %d\n", v, A[v]);
            }
            printf("-----\n"); 
        }
     
    }
}