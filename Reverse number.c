#include <stdio.h>
#include <conio.h>
void main()
{
    int num, r, rnum=0;
    clrscr();
    printf("Enter any integers:- \n");
    scanf("%d", &num);
    while (num != 0)
    {
        r=num %10;
        num = num/10;
        rnum = rnum*10+r;
    }
    printf("The reverse number is=%d", rnum );
    getch();
}