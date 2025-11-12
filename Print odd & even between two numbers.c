#include<stdio.h>
#include<conio.h>
void main()
{
    int  m, n;
    clrscr() ;
    printf("Enter the value of m & n. \n");
    scanf("%d %d",&m, &n);
    while (m<=n)
    {
        if (m%2==0) 
        {
           printf("%d is even number\n",m);
        }
        else 
        {
           printf("%d is odd number\n",m);
        }
        m=m+1;
    }    
    getch() ;
}

    