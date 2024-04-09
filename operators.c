#include <stdio.h>

int main()
{
    int a = 5;
    int b = 4;

    // Arithmetic Operators
    printf("Addition: %d\n", a + b);
    printf("Subtraction: %d\n", a - b);
    printf("Multiplication: %d\n", a * b);
    printf("Division: %d\n", a / b);
    printf("Modulo: %d\n\n", a % b);

    // Comparison/Relational Operators
    printf("Equal to: %d\n", a == b);
    printf("Not equal to: %d\n", a != b);
    printf("Greater than: %d\n", a > b);
    printf("Less than: %d\n", a < b);
    printf("Greater than or equal to: %d\n", a >= b);
    printf("Less than or equal to: %d\n\n", a <= b);

    // Logical Operators
    printf("Logical NOT: %d\n", !(a > b));
    printf("Logical AND: %d\n", (a > b) && (a < b));
    printf("Logical OR: %d\n\n", (a > b) || (a < b));

    // Bitwise Operators
    printf("Bitwise NOT: %d\n", ~a);
    printf("Bitwise AND: %d\n", a & b);
    printf("Bitwise OR: %d\n", a | b);
    printf("Bitwise XOR: %d\n", a ^ b);
    printf("Bitwise Left Shift: %d\n", a << 2);
    printf("Bitwise Right Shift: %d\n\n", a >> 2);

    // Augmented/Compound Arithmetic Assignment Operators
    a += 2;
    printf("Addition Assignment: %d\n", a);

    a -= 4;
    printf("Subtraction Assignment: %d\n", a);

    a *= 5;
    printf("Multiplication Assignment: %d\n", a);

    a /= 4;
    printf("Division Assignment: %d\n", a);

    a %= 2;
    printf("Modulo Assignment: %d\n\n", a);

    // Augmented/Compound Bitwise Assignment Operators
    b &= 7;
    printf("Bitwise AND Assignment: %d\n", b);

    b |= 8;
    printf("Bitwise OR Assignment: %d\n", b);

    b ^= 10;
    printf("Bitwise XOR Assignment: %d\n", b);

    b <<= 2;
    printf("Bitwise Left Shift Assignment: %d\n", b);

    b >>= 3;
    printf("Bitwise Right Shift Assignment: %d", b);

    return 0;
}

// Truth Table {ref: 2}
// +---+---+------+-----+------+
// | p | q | AND  | OR  | XOR  |
// +---+---+------+-----+------+
// | 1 | 1 | 1    | 1   | 0    |
// | 1 | 0 | 0    | 1   | 1    |
// | 0 | 1 | 0    | 1   | 1    |
// | 0 | 0 | 0    | 0   | 0    |
// +---+---+------+-----+------+

// Rules
// 1. Do not use the ternary conditional operator, as it decreases readability
//    and is language-dependent.

// References
// 1. https://en.wikipedia.org/wiki/Operators_in_C_and_C++
// 2. https://en.wikipedia.org/wiki/Truth_table
