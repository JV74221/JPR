#include <stdio.h>

int main()
{
    // Character Type
    char c = 'A';
    char *cp = &c;

    printf("Addresses:\n"
           "%u = %u = %u = %u,\n"
           "%u\n\n",
           &c, cp, cp + 0, &cp[0],
           &cp);

    printf("Values:\n"
           "%c = %c = %c = %c\n\n",
           c, *cp, *(cp + 0), cp[0]);

    // Integer Type
    int d = 10;
    int *dp = &d;
    int **d2p = &dp;
    int ***d3p = &d2p;

    printf("Addresses:\n"
           "%u = %u = %u = %u = %u = %u = %u = %u = %u = %u = %u = %u,\n"
           "%u = %u = %u = %u = %u = %u = %u = %u,\n"
           "%u = %u = %u = %u,\n"
           "%u\n\n",
           &d, dp, *d2p, **d3p, dp + 0, *(d2p + 0), **(d3p + 0),
           &dp[0], &d2p[0][0], &d3p[0][0][0], d2p[0], d3p[0][0],

           &dp, d2p, *d3p, d2p + 0, *(d3p + 0),
           &d2p[0], &d3p[0][0], d3p[0],

           &d2p, d3p, d3p + 0,
           &d3p[0],

           &d3p);

    printf("Values:\n"
           "%d = %d = %d = %d = %d = %d = %d = %d = %d = %d = %d = %d\n\n",
           d, *dp, **d2p, ***d3p, *(dp + 0), **(d2p + 0), ***(d3p + 0),
           dp[0], d2p[0][0], d3p[0][0][0], *d2p[0], *d3p[0][0]);

    // Float Type
    float f[3] = {1.2, 3.4, 5.6};
    float *fp = f;

    printf("Addresses:\n"
           "%u = %u = %u = %u = %u = %u = %u,\n"
           "%u = %u = %u = %u,\n"
           "%u = %u = %u = %u,\n"
           "%u\n\n",
           &f, &f[0], f, fp, f + 0, fp + 0, &fp[0],
           &f[1], f + 1, fp + 1, &fp[1],
           &f[2], f + 2, fp + 2, &fp[2],
           &fp);

    printf("Values:\n"
           "%f = %f = %f = %f = %f = %f,\n"
           "%f = %f = %f = %f,\n"
           "%f = %f = %f = %f",
           f[0], *f, *fp, *(f + 0), *(fp + 0), fp[0],
           f[1], *(f + 1), *(fp + 1), fp[1],
           f[2], *(f + 2), *(fp + 2), fp[2]);

    return 0;
}

// References
// 1. https://en.wikipedia.org/wiki/Pointer_(computer_programming)
