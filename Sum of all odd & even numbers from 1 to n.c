#include<stdio.h>
#include<conio.h>
void main()
{
    int p, n, i=1, e=0, f=0 ;
    clrscr() ;
    printf("Enter the value of n. \n");
    scanf("%d",&n);
    while (i<=n)
    {
        if (i%2==0) 
        {
           printf("%d is even number\n",i);
           e=e+i;
        }
        else 
        {
           printf("%d is odd number\n",i);
           f=f+i;
        }
        i=i+1;
    }    
    printf("Sum of all the even number is=%d\n",e);
    printf("Sum of all the odd number is=%d\n",f);
    getch() ;
}

    