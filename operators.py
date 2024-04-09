def main() -> None:
    a: int = 5
    b: int = 4

    # Arithmetic Operators
    print(f"Addition: {a + b:d}")
    print(f"Subtraction: {a - b:d}")
    print(f"Multiplication: {a * b:d}")
    print(f"Division: {a // b:d}")
    print(f"Modulo: {a % b:d}\n")

    # Comparison/Relational Operators
    print(f"Equal to: {a == b:d}")
    print(f"Not equal to: {a != b:d}")
    print(f"Greater than: {a > b:d}")
    print(f"Less than: {a < b:d}")
    print(f"Greater than or equal to: {a >= b:d}")
    print(f"Less than or equal to: {a <= b:d}\n")

    # Logical Operators
    print(f"Logical NOT: {not (a > b):d}")
    print(f"Logical AND: {(a > b) and (a < b):d}")
    print(f"Logical OR: {(a > b) or (a < b):d}\n")

    # Bitwise Operators
    print(f"Bitwise NOT: {~a:d}")
    print(f"Bitwise AND: {a & b:d}")
    print(f"Bitwise OR: {a | b:d}")
    print(f"Bitwise XOR: {a ^ b:d}")
    print(f"Bitwise Left Shift: {a << 2:d}")
    print(f"Bitwise Right Shift: {a >> 2:d}\n")

    # Augmented/Compound Arithmetic Assignment Operators
    a += 2
    print(f"Addition Assignment: {a:d}")

    a -= 4
    print(f"Subtraction Assignment: {a:d}")

    a *= 5
    print(f"Multiplication Assignment: {a:d}")

    a //= 4
    print(f"Division Assignment: {a:d}")

    a %= 2
    print(f"Modulo Assignment: {a:d}\n")

    # Augmented/Compound Bitwise Assignment Operators
    b &= 7
    print(f"Bitwise AND Assignment: {b:d}")

    b |= 8
    print(f"Bitwise OR Assignment: {b:d}")

    b ^= 10
    print(f"Bitwise XOR Assignment: {b:d}")

    b <<= 2
    print(f"Bitwise Left Shift Assignment: {b:d}")

    b >>= 3
    print(f"Bitwise Right Shift Assignment: {b:d}")


if __name__ == "__main__":
    main()

# Truth Table {ref: 1}
# +---+---+------+-----+------+
# | p | q | AND  | OR  | XOR  |
# +---+---+------+-----+------+
# | T | T | T    | T   | F    |
# | T | F | F    | T   | T    |
# | F | T | F    | T   | T    |
# | F | F | F    | F   | F    |
# +---+---+------+-----+------+

# Rules
# 1. Do not use the ternary conditional operator, as it decreases readability
#    and is language-dependent.
# 2. Do not use the exponentiation operator, as it is language-dependent.
# 3. Use the floor division when both the operands are of type int;
#    otherwise, use the regular division if any operand is of type float.
# 3.1. The regular division produces an accurate result of type float,
#      regardless of any given type of operands.
# 3.2. The floor division rounds the result down to the nearest whole number,
#      which can be of type int or float when any given operand is of type
#      float.

# References
# 1. https://en.wikipedia.org/wiki/Truth_table
