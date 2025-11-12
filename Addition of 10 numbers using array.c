#include<stdio.h>
#include<conio.h>
void main()
{
    int n[10], i, s=0;
    clrscr() ;
    printf("Enter ten integers number:-\n");
    for(i=0; i<10; i++)
    {
        scanf("%d",&n[i]);
        s+=n[i];
    }
    printf("Sum=%d",s);
    getch() ;
}