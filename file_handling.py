import os


def main() -> None:
    s: str = "FooBar\n"
    l: list[str] = ["10", "20", "\n", "30", "40", "\n"]

    f = open("text.txt", "w+t")

    # Write the data
    if f.writable():
        f.write(s)
        f.writelines(l)

    # Get or set the position
    print(f"Position: {f.tell()}\n")
    if f.seekable():
        f.seek(0, os.SEEK_SET)

    # Read the data: #1
    if f.readable():
        d1: str = f.read(3)
        d2: str = f.read()

    print(f"{d1} | {d2}")

    if f.seekable():
        f.seek(0, os.SEEK_SET)

    # Read the data: #2
    if f.readable():
        d3: str = f.readline(3)
        d4: str = f.readline()

    print(f"{d3} | {d4}")

    if f.seekable():
        f.seek(0, os.SEEK_SET)

    # Read the data: #3
    if f.readable():
        d5: list[str] = f.readlines(1)
        d6: list[str] = f.readlines()

    print(f"{d5} | {d6}")

    if not f.closed:
        f.close()


if __name__ == "__main__":
    main()

# Mode: Types
# Text: rt, wt, at, r+t, w+t, a+t, xt, x+t ('t' is optional)
# Binary: rb, wb, ab, r+b, w+b, a+b, xb, x+b

# Mode: Description
# 'r' and 'r+' = Read(+write) only if the file exists.
# 'w' and 'w+' = Overwrite(+read) if the file exists; else, create it.
# 'a' and 'a+' = Append(+read) if the file exists; else, create it.
# 'x' and 'x+' = Write(+read) only if the file does not exist,
#                which means create it.

# Rules
# 1. Do not use the "with" statement for file handling, as it is
#    language-dependent.

# References
# 1. https://docs.python.org/tutorial/inputoutput.html
# 2. https://docs.python.org/library/functions.html
