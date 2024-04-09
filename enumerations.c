#include <stdio.h>

enum example
{
    hello,
    world,
    lorem = 5,
    ipsum,
    foo = 10,
    bar
};

int main()
{
    enum example a = hello;
    enum example b = world;
    enum example c = lorem;
    enum example d = ipsum;
    enum example e = foo;
    enum example f = bar;

    printf("Values: %d, %d, %d, %d, %d, %d\n",
           a, b, c, d, e, f);

    printf("Sizes: %d, %d, %d, %d, %d, %d",
           sizeof a, sizeof b, sizeof c, sizeof d, sizeof e, sizeof f);

    return 0;
}

// References
// 1. https://en.wikipedia.org/wiki/Enumerated_type
