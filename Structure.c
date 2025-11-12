#include<stdio.h>
#include<conio.h>
struct student
{
    char name [20] ;
    int roll ;
    char city [20];
    int pin ;
    char phone [13] ;
}
void main()
{
    struct student s, *d;
    clrscr() ;
    printf("Enter student's name:- \n");
    gets ( d -> name) ;
    printf("Enter student's roll no:- \n");
    scanf("%d",&d -> roll);
    printf("Enter student's city:- \n");
    scanf("%s", d -> city);
    printf("Enter student's pin no:- \n");
    scanf("%d",&d -> pin);
    printf("Enter student's phone no:- \n");
    scanf("%s" , d -> phone);

    printf("\n");

    printf("Name:- %s\n", d -> name);
    printf("Roll:- %d\n", d -> roll);
    printf("City:- %s\n", d -> city);
    printf("Pin no:- %d\n", d -> pin);
    printf("Phone no:- %s\n", d -> phone);
    getch() ;
}