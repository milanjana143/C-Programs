#include<stdio.h>
#include<conio.h>
void main()
{
    int a, b, c;
    clrscr() ;
    printf("Enter three numbers:-\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        {
            printf("%d is large number",a);
        }
        else
        {
            printf("%d is large number",c);
        }
    }
    else if(b>c)
    {
        if(b>a)
        {
            printf("%d is large number",b);
        }
        else
        {
            printf("%d is large number",a);
        }
    }
    else
    {
        printf("%d is large number",c);
    }
    getch() ;
}