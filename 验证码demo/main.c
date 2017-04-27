#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i,num;
    int sum = 0;
    srand((unsigned)time(NULL));
    for(i = 0;i < 4;i++)
    {
        num = rand() % 9 + 1 ;
        if(i == 1)
            num = num * 10;
        if(i == 2)
            num = num * 100;
        if(i == 3)
            num = num * 1000;
        sum += num;
    }
    printf("4位验证码为%d", sum);





    return 0;
}
