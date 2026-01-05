#include<stdio.h>
#include<conio.h>
void main()
{
    int m;
    clrscr() ;
    printf("Enter marks\n");
    scanf("%d",&m);
    if (m<=100 && m>=90)
    {
        printf("A+");
    }
    else if(m<90 && m>=80)
    {
        printf("A");
    }
    else if(m<80 && m>=70)
    {
        printf("B");
    }
    else if(m<70 && m>= 60)
    {
        printf("C");
    }
    else if(m<60 && m>=50)
    {
        printf("D");
    }
    else
    {
        printf("Fail");
    }
    getch() ;
}