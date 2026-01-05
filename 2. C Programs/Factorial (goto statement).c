#include<stdio.h>
#include<conio.h>
void main()
{
    int i, n;
    long int f=1;
    clrscr() ;
x:
    printf("\nEnter n\n");
    scanf("%d",&n) ;
    if (n<0)
    {
        printf("Wrong input & try again");
        goto x;
    }
    else if (n==0)
    {
        printf("Factorial Value=0");
    }
    else
    {
        for (i=1; i<=n; i++)
        {
            f=f*i;
        }
        printf("Factorial value=%ld",f);
    }
    getch() ;
}