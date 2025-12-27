#include<stdio.h>
#include<conio.h>
void main()
{
    int n, s=0,r;
    printf("Enter n\n");
    scanf("%d",&n) ;
    do
    {
        r=n%10;
        s=s+r;
        n=n/10;
    }
    while(n>0) ;
    printf("%d",s);
    getch() ;
}