#include<stdio.h>
#include<conio.h>
void main()
{
    int x,y,z;
    clrscr() ;
    printf("Enter x & y\n");
    scanf("%d%d",&x,&y) ;
    z=(x>y? 20:25) ;
    printf("z=%d",z);
    getch() ;
}