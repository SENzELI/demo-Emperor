#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <mmsystem.h>
#pragma comment(lib, "Winmm.lib")
#define MAX 6 //常量MAX 表示系统要求妃子的最大数量
#define DAY_COUNT 10
#include <string.h> //字符串的查找，需要引入<string.h>文件
int main()
{   /*
    PlaySound(TEXT("sounds\\翻牌.wav"),
              NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
    */

    int i, j, temp; //临时变量
    int count = 5;
    int currDay = 0;   //存放游戏天数
    int tempCount = 0;  //存放好感度低于60的妃子的个数
    int index = -1;          //用来做查找，判断名字是否存在的索引
    char emperorName[50]; //皇帝的名号  50代表50个字符
    char names[MAX][20] = {"黑心老板", "大头鱼", "地产大亨", "马柏豪", "万达强"};  //爱妃的名字
    char levelNames[5][20] = {"贵人", "嫔妃", "贵妃", "皇贵妃", "皇后"};     //爱妃的名号
    char tempName[20];
    int levels[MAX] = {0, 0, 0, 0, 0, -1};   //爱妃的等级
    int loves[MAX] = {100, 100, 100, 100, 100, -1}; //爱妃的初始好感度
    int choice; //皇帝的选择
    int searchIndex = -1;

    printf("\n\t\t游戏开始~~\n\n");
    Sleep(150);
    printf("请输入登基皇帝的名号:");
    scanf("%s", emperorName);  //录入字符串时，不需要&定位符
    do
    {
        PlaySound(TEXT("sounds\\背景音乐.wav"),
                  NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
        Sleep(150);
        printf("\n\n\t\t皇帝执政第 %d 天\n\n\t皇帝<%s>驾临，有事上奏，无事退朝。~\n", ++currDay, emperorName);
        printf("\n*********************************************\n\n");
        Sleep(150);
        printf("\t\t*后宫佳丽三千*\n\n");
        Sleep(150);
        printf("\t%-12s级别\t好感度\n","姓名");
        printf("\t------------------------------\n");
        Sleep(150); //小技巧  -12左对齐12个字符
        for(i = 0;i < count;i++)
        {
            printf("\t%-12s%s\t%d\n", names[i], levelNames[levels[i]], loves[i]);
            Sleep(150);
        }
        printf("\n*********************************************\n\n");
        printf("1、下旨选妃! \t\t\t(增加功能)\n");
        Sleep(150);
        printf("2、宠幸爱妃! \t\t\t(修改状态)\n");
        Sleep(150);
        printf("3、打入冷宫! \t\t\t(删除功能)\n");
        Sleep(150);
        printf("4、召见爱妃! \t\t\t(查找功能)\n");
        Sleep(150);
        printf("\n陛下，请选择:");
        scanf("%d",&choice);
        switch(choice)
            {
            case 1:
                PlaySound(TEXT("sounds\\选妃.wav"),
                  NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
                //1、下旨选妃! \t\t(增加功能)\n
                //1.增加前要判断数组是否有空间
                //2.增加的元素（names、levels、loves）
                if(count < MAX) //可以使用这个 if(count >= sizeof(level)/sizeof(int))
                {
                    printf("\n请输入爱妃的名讳：");
                    scanf("%s", names[count]); //执行添加操作
                    levels[count] = 0;         //等级初始为0
                    loves[count] = 100;        //好感度初始为100

                }
                else
                {
                    printf("\n陛下,保重龙体阿,后宫已经人满为患了!\n\n");
                    break;
                }
                printf("\n新增妃子<%s>\n\n其他爱妃好感度-10！\n", names[count]);
                for(i = 0; i < count; i++)
                {
                    loves[i] -= 10;
                }
                count++;                   //添加完元素后，记得添加计数器
                break;
            case 2:
                PlaySound(TEXT("sounds\\宠幸.wav"),
                  NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
                printf("\n请输入您要宠幸的妃子：");
                scanf("%s", tempName);
                for(i = 0;i < count;i++)
                {
                    if(strcmp(tempName, names[i]) == 0)
                    {
                        index = i;
                        break;
                    }
                }
                if(index == -1)
                {
                    printf("\n陛下，不存在的！\n");
                }
                else
                {
                    levels[index] == 4 ? 4 : levels[index]++; //大于4就等于4，小于就+1
                    //level[index] == 4 ? 4 : level[index]++;
                    loves[index] += 30; //因为后面减少多一次，所以这里多加10，实际是加了20
                    for(i = 0;i < count;i++)
                    {
                        loves[i] -= 10;
                    }
                    printf("\n经过一夜翻云覆雨，爱妃<%s>好感度+20，升级为%s！\n\n其他娘娘好感度-10！\n",names[index], levelNames[levels[index]]);
                }
                index = -1;
                break;
            case 3:
                PlaySound(TEXT("sounds\\冷宫.wav"),
                  NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
                //1.查找
                //2.后面一个元素赋值给前一个元素，总数--
                //3.修改其他妃子的状态
                printf("\n请输入您要打入冷宫的妃子：");
                scanf("%s",tempName);
                {   //循环查找
                    for(i = 0;i < count;i++)
                    {
                        if(strcmp(tempName, names[i]) == 0) //比较字符串是否相等
                        {
                            index = i;
                            break;
                        }
                    }
                    if(index == -1)
                    {
                        printf("\n兄弟，不存在的~\n");
                    }
                    else
                    {
                        printf("\n妃子<%s>被打入阴森森的广寒宫~\n\n其他妃子幸灾乐祸，好感度+20", names[i]);
                        for(i = index;i < count - 1;i++)
                        {
                            //names[i] = names[i + 1];因为是字符数组，C语言中不支持数组的直接赋值，
                            //需要使用strcpy函数实现数组的赋值，同样需要<string.h>
                            strcpy(names[i], names[i + 1]);
                            levels[i] = levels[i + 1];
                            loves[i] = loves[i + 1];
                        }
                        for(i = 0;i < count;i++)
                        {
                            loves[i] += 20;
                        }
                        count--;
                    }
                }
                index = -1;
                break;
            case 4:
                PlaySound(TEXT("sounds\\一笑倾城.wav"),
                  NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
                //增加改妃子的好感度即可
                printf("\n请输入您要召见的妃子：");
                scanf("%s", tempName);
                for(i = 0;i < count;i++)
                {
                    if(strcmp(tempName, names[i]) == 0) //比较字符串是否相等
                        {
                            index = i;
                            break;
                        }
                }
                    if(index == -1)
                    {
                        printf("\n兄弟，不存在的~\n");
                    }
                    else
                    {
                        loves[i] += 15;
                        printf("\n在一个夜黑风高的夜晚~~~~~~~\n");
                        printf("\n爱妃<%s>的好感度+15~\n", names[i]);
                        break;
                    }
                index = -1;
            break;
        default:
        printf("\n\t“君无戏言,陛下三思!”\n");
        }

        //将信息显示出来之前先进行排序
        for(i = 0;i < count - 1;i++)
        {
            for(j = 0;j < count - i - 1;j++)
            {
                //按照妃子的级别进行排序，冒泡排序法
                //要排序的元素有：姓名，级别，好感度
                if(levels[i] < levels[i + 1])
                {
                    temp = levels[i];
                    levels[i] = levels[i + 1];
                    levels[i + 1] = temp;
                    temp = loves[i];
                    loves[i] = loves[i + 1];
                    loves[i + 1] = temp;
                    strcpy(tempName, names[i]);
                    strcpy(names[i], names[i + 1]);
                    strcpy(names[i + 1], tempName);
                }
            }
        }
        for(i = 0;i < count;i++)
        {
            if(loves[i] < 60)
            {
                tempCount++;
            }
        }
        if(tempCount >= 3)
        {
            printf("\n后宫叛乱~妃子们成群结队向皇帝奔去~~\n");
            time_t timep;
            struct tm * p;
            time(&timep);
            p = gmtime(&timep);
            printf("\n公元%d年%d月%d日，皇帝卒！共执政%d天~\n", 1900+p->tm_year, 1+p->tm_mon, p->tm_mday, currDay);
            exit(0);
        }
    }while(currDay < DAY_COUNT);
    printf("皇帝登基10天来，五谷丰登、风调雨顺、妻妾成群。。。。。\n");
    printf("没羞没臊的生活继续进行着。。。。。。。\n");
    printf("\n*********************************************\n\n");
    Sleep(100);
    printf("\t\t*后宫佳丽三千*\n\n");
    Sleep(100);
    printf("\t%-12s级别\t好感度\n","姓名");
    printf("\t------------------------------\n");
    Sleep(100); //小技巧  -12左对齐12个字符
    for(i = 0;i < count;i++)
    {
        printf("\t%-12s%s\t%d\n", names[i], levelNames[levels[i]], loves[i]);
        Sleep(100);
    }
    printf("\n*********************************************\n\n");
    return 0;
}
