#include<stdio.h>
#include<conio.h>
void main()
{
    int n, s=1,r;
    clrscr() ;
    printf("Enter n\n");
    scanf("%d",&n) ;
    while(n>0)
    {
        r=n%10;
        s=s*r;
        n=n/10;
    }
    printf("%d",s);
    getch() ;
}