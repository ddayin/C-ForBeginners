#include <stdio.h>

int main()  // 프로그램의 진입지점
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