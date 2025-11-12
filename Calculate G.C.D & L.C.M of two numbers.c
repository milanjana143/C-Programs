#include <stdio.h>
#include<conio.h>
void main()
{
    int a, b, gcd, lcm, x, y;
    printf("Enter two number:-\n");
    scanf("%d%d",&a,&b);
    x=a;
    y=b;
    while (a != b)
    {
        if(a>b)
        {
            a=a-b;
        }
        else
        {
            b=b-a;
        }
    }
    gcd=a;
    lcm=(x*y) /gcd;
    printf("GCD is=%d\n",gcd);
    printf("LCM is=%d\n",lcm);
    getch() ;
}