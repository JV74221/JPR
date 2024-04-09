#include <stdio.h>

int main()
{
    int a[11] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int b = 0;

    for (b = 0; b < 10; b += 1)
    {
        if (a[b] == 30)
        {
            continue;
        }
        else if (a[b] <= 60)
        {
            printf("%d\n", a[b]);
        }
        else
        {
            break;
        }
    }

    b = -1;
    printf("\n");

    while (b <= 10)
    {
        b += 1;

        if (a[b] == 30)
        {
            continue;
        }
        else if (a[b] <= 60)
        {
            printf("%d\n", a[b]);
        }
        else
        {
            break;
        }
    }

    return 0;
}

// Rules
// 1. Do not use the "do" clause before the "while" loop, as it decreases
//    readability and is language-dependent.

// References
// 1. https://en.wikipedia.org/wiki/Control_flow
