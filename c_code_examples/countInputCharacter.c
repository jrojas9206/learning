#include <stdio.h>

int main(void)
{
    long nc;
    nc = 0;
    while(getchar()!=EOF)
        ++nc;
    printf("Counted characters: %ld \n", nc);
    return(0);
}