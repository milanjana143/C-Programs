#include<stdio.h>
#include<conio.h>
void main()
{
    int a[2][2], i,j;
    clrscr () ;
    printf("Enter numbers:-\n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Matrix is:-\n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            printf(" %d",a[i][j]);
        }
        printf("\n");
    }
    getch() ;
}