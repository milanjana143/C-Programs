#include <stdio.h>
#include<conio.h>
void main()
{
    int a[4][4], i, j;
    clrscr() ;
    printf("Enter Matrix :- \n");
    for (i=0; i<4; i++)
    {
        for (j=0; j<4; j++)
        {
            scanf ("%d", &a[i][j] );
        }
    }
    printf("Matrix is. \n");
    for (i=0; i<4; i++)
    {
        for (j=0; j<4; j++)
        {
            printf ("%d", a[i][j]);
        }
        printf ("\n");
    }
    getch();
}