#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int main()
{
    /*****************
    int i = 0;
    int sum;
    int password;

    while(i < 4)
    {
        printf("���������룺\n");
        scanf("%d", &password);
        if(i == 3)
        {
            printf("�������4�Σ���30���Ӻ��ԣ�\n");
            break;
        }
        if(123456 != password)
        {
            printf("������󣬻���%d�λ��ᣡ\n", 3 - i);
        }

        if(123456 == password)
        {
            printf("������ȷ��\n");
            break;
        }
        i++;
    }
    *****************/

    /***********************************************
    //ĳ��˫ʮһ2015��Ľ��׶�Ϊ800�ڣ�ÿ�����25%
    //�ʣ������ٶ����꽻�׶�ﵽ2000�ڣ�
    int year = 2015;
    double money = 800;

    while(money <= 2000)
    {
        year++;
        money *= 1.25;//money = money * 1.25

    }
        printf("�����ٶ�%d�꽻�׶���Դﵽ2000�ڡ�\n", year);
    ************************************************/

    //�������  ��Ҫ�ڿ�ʼ���� #include <time.h>
    //ʹ��ʱ����Ϊ���ӣ�������һ�����������
    //randȡֵ��Χ��0-32767

    //srand(time(NULL)); //srand((unsigned)time(NULL));//ע���Сд
    //printf("������֣�%d\n", rand() % 11 + 5);  //%��ȡ������%10����0-9 %11����0-10
                                                //��ʽ��(b - a + 1) + a



    /******************************************************************************
    int hp1 = 100, hp2 = 100; //1P��2p�ĳ�ʼѪ��
    int att1, att2;           //1P��2P�Ĺ���
    int i = 1;                  //��ս������
        printf("\t\t��Ϸ��ʼ!!!\n");
    while(hp1 >= 0 && hp2 >= 0)
    {

        //Ĭ��1P���ȹ���

        att1 = rand() % 11 + 5;
        att2 = rand() % 11 + 5;

        hp2 -= att1; //���1���������2��Ѫ
        if(hp2 <= 0)
        {   printf("*************************\n");
            printf("KO!~��Ϸ����!\t���1��ʤ!\n");
            printf("*************************\n");
            break;    //continue; ������ǰѭ��
        }
        hp1 -= att2; //���2���������1��Ѫ
        if(hp1 <= 0)
        {   printf("*************************\n");
            printf("KO!~��Ϸ����!\t���2��ʤ!\n");
            printf("*************************\n");
            break;
        }

        printf("***********************************************\n");
        printf("��%d�غ�\n", i);
        printf("���1������Ϊ��%d\t���2ʣ��Ѫ��Ϊ��%d\n", att1, hp2);
        printf("���2������Ϊ��%d\t���1ʣ��Ѫ��Ϊ��%d\n", att2, hp1);
        printf("***********************************************\n");

        i++;
        Sleep(500);//����500����  ע���Сд
    }
    ********************************************************************************/

    /**************************
    while(1)
    {
        int choice;
            printf("�Ը���ԣ�\n");
            printf("����һλ��������ϣ���İ����ǣ�\n");
            printf("1.ֻ��һλ����\n2.��λ���ϵİ���\n3.�󹬼�����ǧ\n");

            do{
                printf("��ѡ��");
                scanf("%d", &choice);

                if(choice <= 0 || choice > 3)
                {
                    printf("��ѡ��1-3������!\n");
                }

            }while(choice <= 0 || choice > 3);
            switch(choice)
            {
            case 1:
                printf("����һ�����Ϲ�!\n");
                break;
            case 2:
                printf("������Ĵ��ܲ�!\n");
                break;
            case 3:
                printf("Ұ�ĺܲ�����ʵ�ܲп�!\n");
                break;
            }
    }
    ***************************/

        /*****************************************
        int num = 123456789;
        //�������е�ÿһλ��ȡ����
        printf("��λ��%d\n", num % 10);
        printf("ʮλ��%d\n", num / 10 % 10);
        printf("��λ��%d\n", num / 100 % 10);
        printf("ǧλ��%d\n", num / 1000 % 10);
        //���ɣ��ȳ�10ȥβ������ģ10ȡ����

        int temp;
        while(num > 0)
        {
            printf("%d\n", num % 10);
            num /= 10;
        }
        ******************************************/


    /**************************
    int value,right_num;
    value = 0;
    do
    {
        printf("\n������һ������");   //ʵ�����ַ�ת ���� 123-321
        scanf("%d", &value);
        if(value <= 0)
            printf("����Ϊ������\n");
    }while(value <= 0);
    printf("\n��ת����Ϊ��");
    do
    {
        right_num = value % 10;  //ʵ����������ѭ��ȡ����ȥβ��
        printf("%d", right_num);
        value = value / 10;

    }while( value != 0 );
    printf("\n");
    **************************/


    /***************************************
    int value, right_num;
    value = 0;
    while(value <= 0)
    {
        printf("\n������һ�����֣�");
        scanf("%d", &value);
        if(value <= 0)
            printf("����Ϊ������\n");
    }printf("\n��ת�������Ϊ��");
    while(value != 0 )
    {
        right_num = value % 10;
        printf("%d",right_num);
        value /= 10;
    }
    printf("\n");
    ****************************************/

    /**********************
    int i;
    double salary; //����
    double total_salary; //���ʵĺϼ�
    double avg_salary;  //ƽ������
    for(i = 0;i < 6;i++)
    {
        printf("\n�������%d���µĹ��ʣ�", i + 1);
        scanf("%lf", &salary);
        total_salary += salary;
    }
        avg_salary = total_salary / 6;
        printf("\n�����ƽ������Ϊ%.2lf", avg_salary);
    **********************/

    /*******************************************************
    int i;
    int num;
        printf("\t\t\t���״�ӡ�ӷ���\n������һ������:");
        scanf("%d", &num);

    for(i = 0;i < num;i++)
    {
        printf("%d + %d = %d", i , (num - i), num); //��ʽ ��������8  0+(8-0)=8 / i+(mun-i)=num
        if(i % 2 == 0)  //��iΪż��ʱ��û����������֮����������ѭ������
        {
            printf("\t");
        }
        else
        {
            printf("\n");
        }
    }
    ********************************************************/

    /**************************
    ��дһ������Ʒ�۸��С��Ϸ
    1.�����趨һ����Ʒ�ļ۸����û�ȥ��
    2.�û�����²�ļ۸��ϵͳ������С����ʾ
    3.�����5���ھͲµ���ȷ�ļ۸񣬸��轱����ʾ��
    ***************************/


    int price; //�û�����ļ۸�
    int goods_price; //��Ʒ�ļ۸�
    int i;
        printf("��������Ʒ�ļ۸�");
        srand((unsigned)time(NULL)); //ʱ�����
        goods_price = rand() % 1000; //ȡ3λ��
        //printf("%d", goods_price); //���ڲ鿴

    for(i = 0;i < 5;i++)
    {
        scanf("%d", &price);
        if(price < goods_price)
            printf("��\n");
        if(price > goods_price)
            printf("С\n");
        else if(price == goods_price)
            printf("��ϲ��!�¶��ˣ�����һ�������ôô��!\n");
    }
        printf("�ܱ�Ǹ�����뽱Ʒ������~\n");


    /************************
    int age;
    int count = 0;
    int i;
    for(i = 0;i < 5;i++)
    {
        printf("���������䣺");
        scanf("%d", &age);
        if(age >= 0)
            continue;
        count++;
    }
        printf("����Ĵ���Ϊ��%d", count);
    ************************/


    /*********************************
    //��1-100֮���ż����
    int num = 0;
    int sum = 0;
    for(num = 0;num <= 100;num++)
    {
        if(num % 2 != 0) //�������������
            continue;
        sum += num;
    }
        printf("1-100֮���ż������:%d", sum);
    **********************************/



























    return 0;
}
