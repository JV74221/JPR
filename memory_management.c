#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Automatic memory allocated in the stack
    int *a;
    float *b;
    float *c;

    // Dynamic memory allocated in the heap
    a = (int *)malloc(3 * sizeof(int));

    printf("Addresses of a:\n"
           "%u = %u = %u,\n"
           "%u = %u,\n"
           "%u = %u,\n"
           "%u\n\n",
           a, a + 0, &a[0],
           a + 1, &a[1],
           a + 2, &a[2],
           &a);

    printf("Values of a:\n"
           "g/%d = g/%d = g/%d,\n"
           "g/%d = g/%d,\n"
           "g/%d = g/%d\n\n",
           *a, *(a + 0), a[0],
           *(a + 1), a[1],
           *(a + 2), a[2]);

    b = (float *)calloc(3, sizeof(float));

    b[0] = 1.2;
    b[1] = 3.4;

    printf("Addresses of b:\n"
           "%u = %u = %u,\n"
           "%u = %u,\n"
           "%u = %u,\n"
           "%u\n\n",
           b, b + 0, &b[0],
           b + 1, &b[1],
           b + 2, &b[2],
           &b);

    printf("Values of b:\n"
           "%f = %f = %f,\n"
           "%f = %f,\n"
           "g/%f = g/%f\n\n",
           *b, *(b + 0), b[0],
           *(b + 1), b[1],
           *(b + 2), b[2]);

    // Dynamic memory reallocated in the heap
    c = (float *)realloc(b, 4 * sizeof(float));

    c[2] = 5.6;
    c[3] = 7.8;

    printf("Addresses of c:\n"
           "%u = %u = %u,\n"
           "%u = %u,\n"
           "%u = %u,\n"
           "%u = %u,\n"
           "%u\n\n",
           c, c + 0, &c[0],
           c + 1, &c[1],
           c + 2, &c[2],
           c + 3, &c[3],
           &c);

    printf("Values of c:\n"
           "%f = %f = %f,\n"
           "%f = %f,\n"
           "%f = %f,\n"
           "%f = %f",
           *c, *(c + 0), c[0],
           *(c + 1), c[1],
           *(c + 2), c[2],
           *(c + 3), c[3]);

    // Dynamic memory released from the heap
    free(a);
    free(c);

    return 0;
}

// Notes
// 1. The "g/" represents garbage value.
// 2. Do not use the free() function after calling the realloc() function on a
//    pointer.

// References
// 1. https://en.wikipedia.org/wiki/C_dynamic_memory_allocation
