#include<stdio.h>
#include<conio.h>
void main()
{
    int  i=1, n;
    clrscr() ;
    printf("Enter the value of n. \n");
    scanf("%d",&n);
    while (i<=n)
    {
        if (i%2==0) 
        {
           printf("%d is even number\n",i);
        }
        else 
        {
           printf("%d is odd number\n",i);
        }
        i=i+1;
    }    
    getch() ;
}

    