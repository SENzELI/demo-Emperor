#include <stdio.h>
#include <stdlib.h>

int main()
{
    double powers[5] = {43211, 45000, 32008, 75001, 100001};
    double deletePower; //要删除的战斗值
    int indexPower = -1; //要删除的战斗值的下标，赋一个不可能的值，因为可能是0
    double insertPower; //要插入的战斗值
    int i, j; //循环变量
    double temp;//临时变量
    int count = 5; //powers数组的个数

    for(i = 0;i < count;i++)
    {
        printf("%.lf\t", powers[i]);
    }
    printf("\n\n请输入你要删除的战斗值:");
    scanf("%lf",&deletePower);
    for(i = 0;i < count;i++)
    {
        if(deletePower == powers[i])
        {
            indexPower = i;
            break;
        }
    }
    if(indexPower == -1)
    {
        printf("抱歉,没有找到您输入的战斗值!");
    }
    else
    {
        for(i = indexPower;i < count - 1;i++)
        {
            powers[i] = powers[i + 1];
        }
    }
    count--;
    for(i = 0;i < count;i++)
    {
        printf("%.2lf\t", powers[i]);
    }
    printf("\n请输入您要插入的战斗值:");
    scanf("%lf", &insertPower);
    powers[count] = insertPower;
    count++;
    for(i = 0;i < count;i++)
    {
        printf("%.2lf\t", powers[i]);
    }

    printf("\n\t**排行榜**\n");
    for(i = 0;i < count - 1;i++)  //排序
    {
        for(j = 0;j < count - i - 1;j++)
        {
            if(powers[j] < powers[j + 1])
            {
                temp = powers[j];
                powers[j] = powers[j + 1];
                powers[j + 1] = temp;
            }
        }
    }

    for(i = 0;i < count;i++)
    {
        printf("%.2lf\t", powers[i]);
    }










}
