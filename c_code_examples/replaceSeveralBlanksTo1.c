#include <stdio.h>

int main(void)
{
    int in_ch, 
        bck_ch;
    in_ch = getchar();
    while(in_ch != EOF)
    {
        printf("Hola: %c\n", in_ch );
        in_ch = getchar();
    }

    return(0);
}