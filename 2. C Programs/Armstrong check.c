#include <stdio.h>
#include <conio.h>
void main ()
{
    int num, i, r, sum=0;
    clrscr() ;
    printf("Enter any integer:-\n ");
    scanf("%d", &num);
    r = num;
    while (r != 0)
    {
        i=r% 10;
        sum= sum+i*i*i;
        r=r/10;
    }
    if (sum == num)
    {
        printf("%d is a armstrong number", num);
    }
    else
    {
        printf ("%d is not a armstrong number.", num);
    }
    getch() ;
}