#include <stdio.h>

int main(int argc, char** argv)
{
    int c, val;
    printf("EOF: %i\n", EOF);
    val = getchar() != EOF; //the EOF in the keyboard is represented: Ctrl + d
    printf("Boolean operation: %d\n", val);
    return 0;
}