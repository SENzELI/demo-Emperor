#include <stdio.h>
#include <stdlib.h>
//#define N 5  //5代表数量

int main()
{


    /*
    double score[N];
    int i;
    for(i = 0;i < N;i++)
    {
        printf("请输入第%d门课的成绩：", i + 1);
        scanf("%lf",&score[i]);
    }
    for(i = 0;i < N;i++)
    {
        printf("第%d门课的成绩是：%.2lf\n",i + 1,score[i]);
    }
    */




    /*有一个数列:8  4  2  1  23  344  12
    循环输出数列的值
    求数列中所有数值的和及平均值
    猜数游戏：从键盘中任意输入一个数据，判断数列中是否包含此数*/

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
    printf("\n\n所有数值的和是：%d\n", sum);
    printf("所有数值的平均值是：%lf\n", avg_num);

    while(1)
    {
    printf("请输入你想查找的数值：");
    scanf("%d",&searchNum);
    for(i = 0;i < 7;i++)
    {
        if(searchNum == nums[i])
        {
            printf("找到了!\n");
            break;
        }
    }
    if(i == 7)
    {
        printf("没有找到!\n");
    }
    }
    */

    /*
    int i, j; //循环变量
    int nums[5] = {13, 16, 10, 81, 52};
    int temp;  //临时变量
    for(i = 0;i < 5 - 1;i++)
    {
        for(j = 0;j < 5 - i - 1;j++)
        {
            if(nums[j] < nums[j + 1]) //如果当前一个数值小于后面一个数值，就交换
            {
                temp = nums[j];  //数值的交换
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
            }
        }
    }
    printf("降序:\t");
    for(i = 0;i < 5;i++)
    {
        printf("%d\t",nums[i]);
    }
    printf("\n******************************************************\n");


    for(i = 0;i < 5 - 1;i++)
    {
        for(j = 0;j < 5 - i - 1;j++)
        {
            if(nums[j] > nums[j + 1]) //如果当前一个数值小于后面一个数值，就交换
            {
                temp = nums[j];  //数值的交换
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
            }
        }
    }
    printf("升序:\t");
    for(i = 0;i < 5;i++)
    {
        printf("%d\t",nums[i]);
    }
    */

    /*
    int i, j; //循环变量
    int nums[5] = {13, 16, 10, 81, 52};
    int temp;  //临时变量
    printf("逆转前的顺序是：");
    for(i = 0;i < 5;i++)
    {
        printf("%d\t", nums[i]);
    }
    for(i = 0;i < 5 / 2;i++)  //只逆转转一半，也就是一次
    {
            temp = nums[i];  //第一个后最后一个互换，第二个和倒数第二个互换，以此类推
            nums[i] = nums[5 - i - 1];
            nums[5 - i - 1] = temp;

    }
    printf("\n逆转后的顺序是：");
    for(i = 0;i < 5;i++)
    {
        printf("%d\t", nums[i]);
    }
    */
























    return 0;
}
