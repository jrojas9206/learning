#include <stdio.h>

int main(void)
{
    int ch, cntr_nl;
    ch = getchar();
    cntr_nl = 0;
    while(ch != EOF)
    {
        if(ch == '\n')
        {
            cntr_nl++;
        }
        ch = getchar();
    }
    printf("Counted Lines: %d\n", cntr_nl );
    return(0);
}