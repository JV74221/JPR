#include <stdio.h>

union example
{
    char c;
    int d;
    double lf;
};

int main()
{
    union example obj = {'A', .d = 10};
    obj.lf = 1.2;

    union example *objp = &obj;

    printf("Addresses:\n"
           "%u = %u = %u = %u = %u = %u = %u = %u =\n"
           "%u = %u = %u = %u =\n"
           "%u = %u = %u = %u,\n"
           "%u\n\n",
           &obj, objp, objp + 0, &objp[0],
           &obj.c, &(objp->c), &((objp + 0)->c), &(objp[0].c),

           &obj.d, &(objp->d), &((objp + 0)->d), &(objp[0].d),

           &obj.lf, &(objp->lf), &((objp + 0)->lf), &(objp[0].lf),

           &objp);

    printf("Values:\n"
           // "%c = %c = %c = %c\n\n",
           // "%d = %d = %d = %d\n\n",
           "%lf = %lf = %lf = %lf\n\n",
           // obj.c, objp->c, (objp + 0)->c, objp[0].c);
           // obj.d, objp->d, (objp + 0)->d, objp[0].d);
           obj.lf, objp->lf, (objp + 0)->lf, objp[0].lf);

    printf("Sizes:\n%d + %d + %d = %d",
           sizeof obj.c, sizeof obj.d, sizeof obj.lf, sizeof obj);

    return 0;
}

// References
// 1. https://en.wikipedia.org/wiki/Union_type
