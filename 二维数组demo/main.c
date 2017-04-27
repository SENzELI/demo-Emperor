#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*********
    int i, j;
    double scores[4][3] =
    {
        {75,85,90},
        {65,95,85},
        {59,91,75},
        {66,98,100}
    };
    printf("语文\t数学\t英语\n");
    for(i = 0;i < 4;i++)
    {
        for(j = 0;j < 3;j++)
        {
            printf("%-8.lf", scores[i][j]); //-8代表占用8个位置，正8的话是右对齐占8个位置
        }
    printf("\n");
    }
    **********/

    int i, j;
    double scores[4][3] =
    {
        {},
        {},
        {},
        {}
    };
    printf("语文\t数学\t英语\n");
    for(i = 0;i < 4;i++)
    {
        for(j = 0;j < 3;j++)
        {
            scanf("%.lf", &scores[i][j]); //-8代表占用8个位置，正8的话是右对齐占8个位置
        }
    printf("\n");
    }















    return 0;
}
