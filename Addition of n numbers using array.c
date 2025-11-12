#include<stdio.h>
#include<conio.h>
void main()
{
    int x[50], i, s=0, p;
    clrscr();
    printf("Enter how many numbers you want to add:-\n");
    scanf("%d",&p);
    printf("Enter numbers:-\n");
    for(i=0; i<p; i++)
    {
        scanf("%d",&x[i]);
        s=s+x[i];
    }
    printf("Addition is=%d\n",s);
    getch();
}