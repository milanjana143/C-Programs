#include<stdio.h>
#include <conio.h>
void main()
{
    int a, b, c, max, min;
    clrscr() ;
    printf("Enter three numbers:\n");
    scanf("%d%d%d", &a, &b, &c);

    if (a >= b && a >= c)
    {
        max = a;
    }
    else if (b >= a && b >= c)
    {
        max = b;
    }
    else
    {
        max = c;
    }

    if (a <= b && a <= c)
    {
        min = a;
    }
    else if (b <= a && b <= c)
    {
        min = b;
    }
    else
    {
        min = c;
    }

    printf("%d is the largest number\n", max);
    printf("%d is the smallest number\n", min);
    getch() ;
}
