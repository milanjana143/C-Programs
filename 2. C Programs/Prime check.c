#include<stdio.h>
#include<conio.h>
void main()
{
    int  i, r, f=0, n;
    clrscr() ;
    x:
    printf("\nEnter the value of n. \n");
    scanf("%d",&n);
    if (n==0 || n<0) 
    {
      printf("Invalid");
      goto x;
    }
    else
    {
       for(i=2; i<n; i++)
       {
           r=n%i;
           if(r==0)
           {
               f=1;
               break;
           }
       }
       if(f==1)
       {
           printf("%d is not a prime number",n);
       }
       else
       {
          printf("%d is a prime number",n);
       }
    }
   getch() ;
}

