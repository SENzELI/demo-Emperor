#include <stdio.h>
#include <stdlib.h>
//#define N 5  //5��������

int main()
{


    /*
    double score[N];
    int i;
    for(i = 0;i < N;i++)
    {
        printf("�������%d�ſεĳɼ���", i + 1);
        scanf("%lf",&score[i]);
    }
    for(i = 0;i < N;i++)
    {
        printf("��%d�ſεĳɼ��ǣ�%.2lf\n",i + 1,score[i]);
    }
    */




    /*��һ������:8  4  2  1  23  344  12
    ѭ��������е�ֵ
    ��������������ֵ�ĺͼ�ƽ��ֵ
    ������Ϸ���Ӽ�������������һ�����ݣ��ж��������Ƿ��������*/

    /*
    int nums[] = {8, 4, 2, 1, 23, 344, 12};
    int i;
    int sum = 0;
    int searchNum;
    double avg_num;

    for(i = 0;i < 7;i++)
    {
        printf("%d\t",nums[i]);
        sum += nums[i];
    }avg_num = sum / 7.0;
    printf("\n\n***************************************************\n");
    printf("\n\n������ֵ�ĺ��ǣ�%d\n", sum);
    printf("������ֵ��ƽ��ֵ�ǣ�%lf\n", avg_num);

    while(1)
    {
    printf("������������ҵ���ֵ��");
    scanf("%d",&searchNum);
    for(i = 0;i < 7;i++)
    {
        if(searchNum == nums[i])
        {
            printf("�ҵ���!\n");
            break;
        }
    }
    if(i == 7)
    {
        printf("û���ҵ�!\n");
    }
    }
    */

    /*
    int i, j; //ѭ������
    int nums[5] = {13, 16, 10, 81, 52};
    int temp;  //��ʱ����
    for(i = 0;i < 5 - 1;i++)
    {
        for(j = 0;j < 5 - i - 1;j++)
        {
            if(nums[j] < nums[j + 1]) //�����ǰһ����ֵС�ں���һ����ֵ���ͽ���
            {
                temp = nums[j];  //��ֵ�Ľ���
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
            }
        }
    }
    printf("����:\t");
    for(i = 0;i < 5;i++)
    {
        printf("%d\t",nums[i]);
    }
    printf("\n******************************************************\n");


    for(i = 0;i < 5 - 1;i++)
    {
        for(j = 0;j < 5 - i - 1;j++)
        {
            if(nums[j] > nums[j + 1]) //�����ǰһ����ֵС�ں���һ����ֵ���ͽ���
            {
                temp = nums[j];  //��ֵ�Ľ���
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
            }
        }
    }
    printf("����:\t");
    for(i = 0;i < 5;i++)
    {
        printf("%d\t",nums[i]);
    }
    */

    /*
    int i, j; //ѭ������
    int nums[5] = {13, 16, 10, 81, 52};
    int temp;  //��ʱ����
    printf("��תǰ��˳���ǣ�");
    for(i = 0;i < 5;i++)
    {
        printf("%d\t", nums[i]);
    }
    for(i = 0;i < 5 / 2;i++)  //ֻ��תתһ�룬Ҳ����һ��
    {
            temp = nums[i];  //��һ�������һ���������ڶ����͵����ڶ����������Դ�����
            nums[i] = nums[5 - i - 1];
            nums[5 - i - 1] = temp;

    }
    printf("\n��ת���˳���ǣ�");
    for(i = 0;i < 5;i++)
    {
        printf("%d\t", nums[i]);
    }
    */
























    return 0;
}
