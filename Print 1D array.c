#include<stdio.h>
#include<conio.h>
void main()
{
    int a[3], i;
    clrscr () ;
    printf("Enter numbers:-\n");
    for(i=0; i<3; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Numbers are:-\n");
    for(i=0; i<3; i++)
    {
        printf(" %d",a[i]);
    }
    getch() ;
}