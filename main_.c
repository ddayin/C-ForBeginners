#include <stdio.h>

int main()
{
    int out = Process(1);
    //printf(out);
    return out;
}

int Process(int input)
{
    int output = input + 1;
    printf("Hello Geek! %d", output);

    return output;
}