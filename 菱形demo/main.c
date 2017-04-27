#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j;
    for(i = 0;i < 5;i++)
    {
        for(j = 0;j <= 5 - i;j++)  // 改变“5“可以向右移动
        {
            printf(" ");
        }
            for(j = 0;j <= i * 2;j++)
            {
                if( i == 0 || j == 0 || j == i * 2)  //挖空
                printf("%c", '*');
                else
                printf(" ");

            }
        printf("\n");
    }

    for(i = 0;i < 4;i++)
    {
        for(j = 0;j <= i + 2;j++)   // 改变“2”可以向右移动
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





