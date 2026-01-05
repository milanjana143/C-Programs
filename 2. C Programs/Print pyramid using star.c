#include <stdio.h>
#include <conio.h>
int main()
{
    int n, i, j, space;
    clrscr();
    printf("Enter the number of lines (height of the pyramid): \t");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (space = i; space < n; space++) {
            printf(" ");
        }
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }
    getch();
}