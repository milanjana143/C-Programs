#include <stdio.h>
#include <conio.h>
void main()
{
    int n1, n2, num;
    clrscr() ;
    printf("Enter two positive integens:- \n");
    scanf("%d%d", &n1, &n2);
    num = (n1>n2)? n1:n2;
    while (1)
    {
        if (num % n1 == 0 && num % n2 ==0)
        {
            printf ("L.C.M is %d", num);
            break;
        }
        num++;
    }
    getch() ;
}