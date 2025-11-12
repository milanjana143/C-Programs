#include <stdio.h>
#include<conio.h>
void main()
{
int a[50][50], i, j, p, q;
clrscr() ;
printf("Enter Row & Column size:- \n");
scanf("%d %d",&p,&q);
printf("Enter Matrix :- \n");
for (i=0; i<p; i++)
{
    for (j=0; j<q; j++)
    {
        scanf ("%d", &a[i][j] );
    }
}
printf("Matrix is. \n");
for (j=0; j<q; j++)
{
    for (i=0; i<p; i++)
    {
        printf ("%d", a[i][j]);
    }
    printf ("\n");
}
getch();
}