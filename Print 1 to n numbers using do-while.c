#include<stdio.h>
#include<conio.h>
void main()
{
    int i=1, n;
    clrscr() ;
    printf("Enter the value of n. \n");
    scanf("%d",&n);
    do
    {
        printf("%d\n",i);
        i=i+1;
    }
    while (i<=n) ;
    getch() ;
}

