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
    printf("����\t��ѧ\tӢ��\n");
    for(i = 0;i < 4;i++)
    {
        for(j = 0;j < 3;j++)
        {
            printf("%-8.lf", scores[i][j]); //-8����ռ��8��λ�ã���8�Ļ����Ҷ���ռ8��λ��
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
    printf("����\t��ѧ\tӢ��\n");
    for(i = 0;i < 4;i++)
    {
        for(j = 0;j < 3;j++)
        {
            scanf("%.lf", &scores[i][j]); //-8����ռ��8��λ�ã���8�Ļ����Ҷ���ռ8��λ��
        }
    printf("\n");
    }















    return 0;
}
