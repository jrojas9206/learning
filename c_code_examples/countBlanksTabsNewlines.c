#include <stdio.h>

int main(void)
{
    int cntr_blanks,
        cntr_tabs,
        cntr_newLines,
        bck_char;

    cntr_blanks = 0;
    cntr_tabs   = 0;
    cntr_newLines = 0;

    bck_char = getchar();

    while(bck_char != EOF)
    {
        if(bck_char == '\n')
        {
            ++cntr_newLines;
        }
        else if(bck_char == '\t')
        {
            ++cntr_tabs;
        }
        else if(bck_char == ' ' ) 
        {
            ++cntr_blanks;
        }
        bck_char = getchar();
    }
    printf("Blanks: %d, Tabs: %d, New Lines: %d\n", cntr_blanks, cntr_tabs, cntr_newLines);
    return(0);
}