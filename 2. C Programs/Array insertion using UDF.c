#include<stdio.h>
#include<conio.h>
void arrayinsert (int a[ ], int, int, int);
void main()
{
    int a[50], n, k, i, item;
    clrscr();
    printf("Enter the size of array:- \n");
    scanf ("%d", &n);
    printf("Enter the array elements:- \n");
    for (i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the inserting position:\n");
    scanf ("%d", &k);
    printf("Enter the inserting item:\n");
    scanf("%d", &item);
    printf ("Before inserting the array is:-\n");
    for (i=0; i<n; i++)
    {
        printf(" %d", a[i] );
    }
    printf("\nAfter insertion the array is:- \n");
    arrayinsert(a, n, k, item) ;
    getch();
}
void arrayinsert (int a[ ], int n, int k, int item)
{
    int i;
    for (i=n-1; i>=k-1 ; i--)
    {
        a[i+1]= a[i];
    }
    a[i+1]= item;
    n=n+1;
    for(i=0; i<n ; i++)
    {
        printf("%d ", a[i]);
    }
}