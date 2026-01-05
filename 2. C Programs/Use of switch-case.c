#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    clrscr() ;
    printf("Enter n. \n");
    scanf(" %d", &n);
    switch(n/10)
    {
    case 10:
    case 9:
    case 8:
        printf("A+\n");
        break;
    case 7:
    case 6:
        printf("A\n");
        break;
    case 5:
        printf("B+\n");
        break;
    case 4:
        printf("B\n");
        break;
    default:
        printf("Fail\n");
        break;
    }
    getch();
}
