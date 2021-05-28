#include "inc/sorting.h"
#define verbose 1

int main(void)
{
    printf("Testing the Sort Algorithms\n");
    int array2sort[] = {10,3,5,4,2,1},
        correctArr[] = {1,2,3,4,5,10},
        arr_sz, 
        cntrErr;
    
    arr_sz  = 6;
    cntrErr = 0;

    insertion_sort(array2sort, arr_sz, verbose);

    for(int i = 0; i<arr_sz; i++)
    {
        if(correctArr[i] != array2sort[i])
            ++cntrErr;    
    }
    printf("Errors on sorting: %d\n", cntrErr);
    return(0);
}