#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    clrscr () ;
    printf("Enter the value of n:-\n");
    scanf("%d",&n);
    if (n==1)
    {
        printf("It is Sunday.\n");
    }
    else if (n==2)
    {
        printf("It is Monday.\n");
    }
    else if (n==3)
    {
        printf("It is Tuesday.\n");
    }
    else if (n==4)
    {
        printf("It is Wednesday.\n");
    }
    else if (n==5)
    {
        printf("It is Thursday.\n");
    }
    else if (n==6)
    {
        printf("It is Friday.\n");
    }
    else if (n==7)
    {
        printf("It is Saturday.\n");
    }
    else
    {
        printf("Invalid");
    }
    getch() ;
}
