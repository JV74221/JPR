#include <stdio.h>

int main()
{
    char c = 'A';
    char s[] = "FooBar";
    int d[] = {10, 20, 30};
    float f = 40.50;

    FILE *fp = fopen("text.txt", "w+t");

    printf("Sizes: %d, %d, %d, %d, %d\n\n",
           sizeof c, sizeof s, sizeof d, sizeof f, sizeof fp);

    // Write the data
    fputc(c, fp);
    fputs(s, fp);
    fwrite(d, sizeof d[0], 3, fp);
    fprintf(fp, "Float: %f", f);

    // Get or set the position
    printf("Position: %ld\n\n", ftell(fp));
    fseek(fp, 0L, SEEK_SET);

    // Read the data
    char c1;
    char s1[7];
    int d1[3];
    float f1;

    c1 = fgetc(fp);
    fgets(s1, sizeof s1, fp);
    fread(d1, sizeof d1[3], 3, fp);
    fscanf(fp, "Float: %f", &f1);

    printf("Character: %c\n", c1);
    printf("String: %s\n", s1);
    printf("Integers: %d, %d, %d\n", d1[0], d1[1], d1[2]);
    printf("Float: %f", f1);

    fclose(fp);
}

// Mode: Types
// Text: rt, wt, at, r+t, w+t, a+t, wxt, wx+t ('t' is optional)
// Binary: rb, wb, ab, r+b, w+b, a+b, wxb, wx+b

// Mode: Description
// 'r' and 'r+' = Read(+write) only if the file exists.
// 'w' and 'w+' = Overwrite(+read) if the file exists; else, create it.
// 'a' and 'a+' = Append(+read) if the file exists; else, create it.
// 'wx' and 'wx+' = Write(+read) only if the file does not exist,
//                  which means create it.

// Rules
// 1. Do not use the rewind() function, as it is language-dependent.

// References
// 1. https://en.wikipedia.org/wiki/C_file_input/output
// 2. https://en.cppreference.com/w/c/io
