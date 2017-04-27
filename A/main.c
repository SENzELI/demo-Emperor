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
        printf("请输入密码：\n");
        scanf("%d", &password);
        if(i == 3)
        {
            printf("密码错误4次，请30分钟后尝试！\n");
            break;
        }
        if(123456 != password)
        {
            printf("密码错误，还有%d次机会！\n", 3 - i);
        }

        if(123456 == password)
        {
            printf("密码正确！\n");
            break;
        }
        i++;
    }
    *****************/

    /***********************************************
    //某宝双十一2015年的交易额为800亿，每年递增25%
    //问：按此速度哪年交易额达到2000亿？
    int year = 2015;
    double money = 800;

    while(money <= 2000)
    {
        year++;
        money *= 1.25;//money = money * 1.25

    }
        printf("按此速度%d年交易额可以达到2000亿。\n", year);
    ************************************************/

    //随机函数  需要在开始导入 #include <time.h>
    //使用时间作为种子，产生不一样的随机数字
    //rand取值范围：0-32767

    //srand(time(NULL)); //srand((unsigned)time(NULL));//注意大小写
    //printf("随机数字：%d\n", rand() % 11 + 5);  //%是取余数，%10就是0-9 %11就是0-10
                                                //公式：(b - a + 1) + a



    /******************************************************************************
    int hp1 = 100, hp2 = 100; //1P和2p的初始血量
    int att1, att2;           //1P和2P的攻击
    int i = 1;                  //对战轮数字
        printf("\t\t游戏开始!!!\n");
    while(hp1 >= 0 && hp2 >= 0)
    {

        //默认1P首先攻击

        att1 = rand() % 11 + 5;
        att2 = rand() % 11 + 5;

        hp2 -= att1; //玩家1攻击，玩家2掉血
        if(hp2 <= 0)
        {   printf("*************************\n");
            printf("KO!~游戏结束!\t玩家1获胜!\n");
            printf("*************************\n");
            break;    //continue; 跳出当前循环
        }
        hp1 -= att2; //玩家2攻击，玩家1掉血
        if(hp1 <= 0)
        {   printf("*************************\n");
            printf("KO!~游戏结束!\t玩家2获胜!\n");
            printf("*************************\n");
            break;
        }

        printf("***********************************************\n");
        printf("第%d回合\n", i);
        printf("玩家1攻击力为：%d\t玩家2剩余血量为：%d\n", att1, hp2);
        printf("玩家2攻击力为：%d\t玩家1剩余血量为：%d\n", att2, hp1);
        printf("***********************************************\n");

        i++;
        Sleep(500);//休眠500毫秒  注意大小写
    }
    ********************************************************************************/

    /**************************
    while(1)
    {
        int choice;
            printf("性格测试：\n");
            printf("你是一位君王，你希望的伴侣是：\n");
            printf("1.只有一位妻子\n2.两位以上的伴侣\n3.后宫佳丽三千\n");

            do{
                printf("请选择：");
                scanf("%d", &choice);

                if(choice <= 0 || choice > 3)
                {
                    printf("请选择1-3的数字!\n");
                }

            }while(choice <= 0 || choice > 3);
            switch(choice)
            {
            case 1:
                printf("你是一个好老公!\n");
                break;
            case 2:
                printf("你个花心大萝卜!\n");
                break;
            case 3:
                printf("野心很博大，现实很残酷!\n");
                break;
            }
    }
    ***************************/

        /*****************************************
        int num = 123456789;
        //将数字中的每一位数取出来
        printf("个位：%d\n", num % 10);
        printf("十位：%d\n", num / 10 % 10);
        printf("百位：%d\n", num / 100 % 10);
        printf("千位：%d\n", num / 1000 % 10);
        //规律：先除10去尾数，再模10取余数

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
        printf("\n请输入一个数：");   //实现数字反转 比如 123-321
        scanf("%d", &value);
        if(value <= 0)
            printf("必须为正数！\n");
    }while(value <= 0);
    printf("\n反转的数为：");
    do
    {
        right_num = value % 10;  //实际上是利用循环取余数去尾数
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
        printf("\n请输入一个数字：");
        scanf("%d", &value);
        if(value <= 0)
            printf("必须为整数！\n");
    }printf("\n反转后的数字为：");
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
    double salary; //工资
    double total_salary; //工资的合计
    double avg_salary;  //平均工资
    for(i = 0;i < 6;i++)
    {
        printf("\n请输入第%d个月的工资：", i + 1);
        scanf("%lf", &salary);
        total_salary += salary;
    }
        avg_salary = total_salary / 6;
        printf("\n半年的平均工资为%.2lf", avg_salary);
    **********************/

    /*******************************************************
    int i;
    int num;
        printf("\t\t\t简易打印加法表\n请输入一个数字:");
        scanf("%d", &num);

    for(i = 0;i < num;i++)
    {
        printf("%d + %d = %d", i , (num - i), num); //公式 例如输入8  0+(8-0)=8 / i+(mun-i)=num
        if(i % 2 == 0)  //当i为偶数时，没有余数，反之奇数不符合循环条件
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
    书写一个猜商品价格的小游戏
    1.我们设定一个商品的价格。让用户去猜
    2.用户输入猜测的价格后，系统给出大、小的提示
    3.如果在5轮内就猜到正确的价格，给予奖励提示。
    ***************************/


    int price; //用户输入的价格
    int goods_price; //商品的价格
    int i;
        printf("请输入商品的价格：");
        srand((unsigned)time(NULL)); //时间随机
        goods_price = rand() % 1000; //取3位数
        //printf("%d", goods_price); //便于查看

    for(i = 0;i < 5;i++)
    {
        scanf("%d", &price);
        if(price < goods_price)
            printf("大\n");
        if(price > goods_price)
            printf("小\n");
        else if(price == goods_price)
            printf("恭喜您!猜对了，给你一个超大的么么哒!\n");
    }
        printf("很抱歉，您与奖品插肩而过~\n");


    /************************
    int age;
    int count = 0;
    int i;
    for(i = 0;i < 5;i++)
    {
        printf("请输入年龄：");
        scanf("%d", &age);
        if(age >= 0)
            continue;
        count++;
    }
        printf("错误的次数为：%d", count);
    ************************/


    /*********************************
    //求1-100之间的偶数和
    int num = 0;
    int sum = 0;
    for(num = 0;num <= 100;num++)
    {
        if(num % 2 != 0) //奇数的情况跳过
            continue;
        sum += num;
    }
        printf("1-100之间的偶数和是:%d", sum);
    **********************************/



























    return 0;
}
