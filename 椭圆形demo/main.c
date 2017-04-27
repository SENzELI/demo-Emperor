#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j;
    for(i = 0;i <= 3;i++)
    {
        for(j = 0;j <= 7 - i;j++)
        {
            printf(" ");
        }
            for(j = 0;j <= i * 2 + 2;j++)
            {
                if(i == 0 || j == 0 || j ==i * 2 + 2)
                printf("%c", '*');
                else
                printf(" ");
            }

                printf("\n");
    }
    //中间部分
    for(i = 0;i < 9;i++)
    {
        for(j = 0;j <= 4;j++)
        {
            printf(" ");
        }
        for(j = 0;j < 9;j++)
        {
            if(i == 0 || i == 8 || j == 0 || j == 8)
            printf("%c", '*');
            else
            printf(" ");
        }
    printf("\n");
    }

        for(i = 0;i < 4;i++)
    {
        for(j = 0;j <= i + 5;j++)   // 改变“2”可以向右移动
        {
            printf(" ");
        }
            for(j = 0;j <= 6 - i * 2;j++)
            {
                if(j == 0 || j == 6 - i * 2) //挖空
                printf("%c", '*');
                else
                printf(" ");
            }
        printf("\n");
    }
















    return 0;
}
