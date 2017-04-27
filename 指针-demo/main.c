#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    int num = 1024; //整型变量
    int *ptr_num = &num;    //整型指针变量 = num的地址
    printf("num的值为：%d\n", num);
    printf("num的内存地址为：%p\n", &num);
    printf("ptr_num的值为：%p\n",ptr_num);
    printf("ptr_num的内存地址为：%p\n", &ptr_num);
    printf("*ptr_num指向的值为：%d\n", *ptr_num);
    */

    /**
    int num1 = 1024;
    int num2 = 2048;
    int *ptr1, *ptr2;
    ptr1 = &num1;
    ptr2 = &num2;
    printf("num1的值是%d\tnum1的地址是%p\n", num1, ptr1);
    printf("num2的值是%d\tnum2的地址是%p\n", num2, ptr2);

    ptr2 = ptr1;    //内存地址的赋值
    //*ptr2 = *ptr1;    //值的赋值        等价于 num2 = num1；
    printf("重新赋值后：\n");
    printf("num1的值是%d\tnum1的地址是%p\n", num1, ptr1);
    printf("num2的值是%d\tnum2的地址是%p\n", num2, ptr2);

    *ptr2 = 1111;
    printf("重新赋值后：\n");
    printf("num1的值是%d\tnum1的地址是%p\n", num1, ptr1);
    printf("num2的值是%d\tnum2的地址是%p\n", num2, ptr2);
    **/

    /***
    char *strs[] = {"abcd","ef","gh","ijk"};
    int i;
    for(i = 0;i < 10;i++)
    {
        printf("%c",*strs[i]);
    }
    ***/

    /****
    int i;
    double score[] = {5, 15, 25, 35, 45};
    double * ptr_score = score;
    printf("数组的首地址为：%p\t数组元素的首地址：%p\n",score, &score[0]);
    for(i = 0; i < 5 ; i++)
    {
        //printf("%.lf\n", score[i]);
        //printf("%.lf\n", ptr_score[i]);
        //printf("%.lf\n", *(ptr_score + i));
        printf("%.lf\n", *ptr_score++); //这种方式需要重置指针 double * ptr_score = score;
    }
    ****/

















    return 0;
}
