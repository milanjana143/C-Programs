#include <stdio.h>

void main()
{
    int i;

    // Loop from 1 to 10
    for(i = 1; i <= 10; i++)
    {
        // Skip printing when i is 5
        if(i == 5)
            continue;

        printf("%d\n", i);
    }
}
