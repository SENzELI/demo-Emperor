#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    int num = 1024; //���ͱ���
    int *ptr_num = &num;    //����ָ����� = num�ĵ�ַ
    printf("num��ֵΪ��%d\n", num);
    printf("num���ڴ��ַΪ��%p\n", &num);
    printf("ptr_num��ֵΪ��%p\n",ptr_num);
    printf("ptr_num���ڴ��ַΪ��%p\n", &ptr_num);
    printf("*ptr_numָ���ֵΪ��%d\n", *ptr_num);
    */

    /**
    int num1 = 1024;
    int num2 = 2048;
    int *ptr1, *ptr2;
    ptr1 = &num1;
    ptr2 = &num2;
    printf("num1��ֵ��%d\tnum1�ĵ�ַ��%p\n", num1, ptr1);
    printf("num2��ֵ��%d\tnum2�ĵ�ַ��%p\n", num2, ptr2);

    ptr2 = ptr1;    //�ڴ��ַ�ĸ�ֵ
    //*ptr2 = *ptr1;    //ֵ�ĸ�ֵ        �ȼ��� num2 = num1��
    printf("���¸�ֵ��\n");
    printf("num1��ֵ��%d\tnum1�ĵ�ַ��%p\n", num1, ptr1);
    printf("num2��ֵ��%d\tnum2�ĵ�ַ��%p\n", num2, ptr2);

    *ptr2 = 1111;
    printf("���¸�ֵ��\n");
    printf("num1��ֵ��%d\tnum1�ĵ�ַ��%p\n", num1, ptr1);
    printf("num2��ֵ��%d\tnum2�ĵ�ַ��%p\n", num2, ptr2);
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
    printf("������׵�ַΪ��%p\t����Ԫ�ص��׵�ַ��%p\n",score, &score[0]);
    for(i = 0; i < 5 ; i++)
    {
        //printf("%.lf\n", score[i]);
        //printf("%.lf\n", ptr_score[i]);
        //printf("%.lf\n", *(ptr_score + i));
        printf("%.lf\n", *ptr_score++); //���ַ�ʽ��Ҫ����ָ�� double * ptr_score = score;
    }
    ****/

















    return 0;
}
