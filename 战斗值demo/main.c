#include <stdio.h>
#include <stdlib.h>

int main()
{
    double powers[5] = {43211, 45000, 32008, 75001, 100001};
    double deletePower; //Ҫɾ����ս��ֵ
    int indexPower = -1; //Ҫɾ����ս��ֵ���±꣬��һ�������ܵ�ֵ����Ϊ������0
    double insertPower; //Ҫ�����ս��ֵ
    int i, j; //ѭ������
    double temp;//��ʱ����
    int count = 5; //powers����ĸ���

    for(i = 0;i < count;i++)
    {
        printf("%.lf\t", powers[i]);
    }
    printf("\n\n��������Ҫɾ����ս��ֵ:");
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
        printf("��Ǹ,û���ҵ��������ս��ֵ!");
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
    printf("\n��������Ҫ�����ս��ֵ:");
    scanf("%lf", &insertPower);
    powers[count] = insertPower;
    count++;
    for(i = 0;i < count;i++)
    {
        printf("%.2lf\t", powers[i]);
    }

    printf("\n\t**���а�**\n");
    for(i = 0;i < count - 1;i++)  //����
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
