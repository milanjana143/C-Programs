#include <stdio.h>

void main()
{
    int i;

    // Loop from 1 to 10
    for(i = 1; i <= 10; i++)
    {
        // Stop loop when i becomes 5
        if(i == 5)
            break;

        printf("%d\n", i);
    }
}
