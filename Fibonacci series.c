#include <stdio.h>
#include <conio.h>
void main()
{
    int a =0, b=1, i, range, c;
    clrscr() ;
    printf("Enter the range of the fibonacci series:-");
    scanf("%d", &range);
    printf("The fibonacci series: %d %d \t", a,b);
    for (i=1; i<=range-2; i++)
    {
        c=a+b;
        a=b;
        b = c;
        printf ("%d\t", c);
    }
    getch ();
}