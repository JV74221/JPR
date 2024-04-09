def main() -> None:
    a: list[int] = [10, 20, 30, 40, 50, 60, 70, 80, 90, 100]
    b: int = 0

    for b in a:
        if b == 30:
            continue
        elif b <= 60:
            print(b)
        else:
            break

    b = -1
    print()

    while b < 10:
        b += 1

        if a[b] == 30:
            continue
        elif a[b] <= 60:
            print(a[b])
        else:
            break


if __name__ == "__main__":
    main()

# Rules
# 1. Do not use the "else" clause after the "for" and "while" loops, as it
#    decreases readability and is language-dependent.

# References
# 1. https://docs.python.org/tutorial/controlflow.html
