#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <mmsystem.h>
#pragma comment(lib, "Winmm.lib")
#define MAX 6 //����MAX ��ʾϵͳҪ�����ӵ��������
#define DAY_COUNT 10
#include <string.h> //�ַ����Ĳ��ң���Ҫ����<string.h>�ļ�
int main()
{   /*
    PlaySound(TEXT("sounds\\����.wav"),
              NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
    */

    int i, j, temp; //��ʱ����
    int count = 5;
    int currDay = 0;   //�����Ϸ����
    int tempCount = 0;  //��źøжȵ���60�����ӵĸ���
    int index = -1;          //���������ң��ж������Ƿ���ڵ�����
    char emperorName[50]; //�ʵ۵�����  50����50���ַ�
    char names[MAX][20] = {"�����ϰ�", "��ͷ��", "�ز����", "��غ�", "���ǿ"};  //����������
    char levelNames[5][20] = {"����", "����", "����", "�ʹ���", "�ʺ�"};     //����������
    char tempName[20];
    int levels[MAX] = {0, 0, 0, 0, 0, -1};   //�����ĵȼ�
    int loves[MAX] = {100, 100, 100, 100, 100, -1}; //�����ĳ�ʼ�øж�
    int choice; //�ʵ۵�ѡ��
    int searchIndex = -1;

    printf("\n\t\t��Ϸ��ʼ~~\n\n");
    Sleep(150);
    printf("������ǻ��ʵ۵�����:");
    scanf("%s", emperorName);  //¼���ַ���ʱ������Ҫ&��λ��
    do
    {
        PlaySound(TEXT("sounds\\��������.wav"),
                  NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
        Sleep(150);
        printf("\n\n\t\t�ʵ�ִ���� %d ��\n\n\t�ʵ�<%s>���٣��������࣬�����˳���~\n", ++currDay, emperorName);
        printf("\n*********************************************\n\n");
        Sleep(150);
        printf("\t\t*�󹬼�����ǧ*\n\n");
        Sleep(150);
        printf("\t%-12s����\t�øж�\n","����");
        printf("\t------------------------------\n");
        Sleep(150); //С����  -12�����12���ַ�
        for(i = 0;i < count;i++)
        {
            printf("\t%-12s%s\t%d\n", names[i], levelNames[levels[i]], loves[i]);
            Sleep(150);
        }
        printf("\n*********************************************\n\n");
        printf("1����ּѡ��! \t\t\t(���ӹ���)\n");
        Sleep(150);
        printf("2�����Ұ���! \t\t\t(�޸�״̬)\n");
        Sleep(150);
        printf("3�������乬! \t\t\t(ɾ������)\n");
        Sleep(150);
        printf("4���ټ�����! \t\t\t(���ҹ���)\n");
        Sleep(150);
        printf("\n���£���ѡ��:");
        scanf("%d",&choice);
        switch(choice)
            {
            case 1:
                PlaySound(TEXT("sounds\\ѡ��.wav"),
                  NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
                //1����ּѡ��! \t\t(���ӹ���)\n
                //1.����ǰҪ�ж������Ƿ��пռ�
                //2.���ӵ�Ԫ�أ�names��levels��loves��
                if(count < MAX) //����ʹ����� if(count >= sizeof(level)/sizeof(int))
                {
                    printf("\n�����밮�������䣺");
                    scanf("%s", names[count]); //ִ����Ӳ���
                    levels[count] = 0;         //�ȼ���ʼΪ0
                    loves[count] = 100;        //�øжȳ�ʼΪ100

                }
                else
                {
                    printf("\n����,�������尢,���Ѿ�����Ϊ����!\n\n");
                    break;
                }
                printf("\n��������<%s>\n\n���������øж�-10��\n", names[count]);
                for(i = 0; i < count; i++)
                {
                    loves[i] -= 10;
                }
                count++;                   //�����Ԫ�غ󣬼ǵ���Ӽ�����
                break;
            case 2:
                PlaySound(TEXT("sounds\\����.wav"),
                  NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
                printf("\n��������Ҫ���ҵ����ӣ�");
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
                    printf("\n���£������ڵģ�\n");
                }
                else
                {
                    levels[index] == 4 ? 4 : levels[index]++; //����4�͵���4��С�ھ�+1
                    //level[index] == 4 ? 4 : level[index]++;
                    loves[index] += 30; //��Ϊ������ٶ�һ�Σ�����������10��ʵ���Ǽ���20
                    for(i = 0;i < count;i++)
                    {
                        loves[i] -= 10;
                    }
                    printf("\n����һҹ���Ƹ��꣬����<%s>�øж�+20������Ϊ%s��\n\n��������øж�-10��\n",names[index], levelNames[levels[index]]);
                }
                index = -1;
                break;
            case 3:
                PlaySound(TEXT("sounds\\�乬.wav"),
                  NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
                //1.����
                //2.����һ��Ԫ�ظ�ֵ��ǰһ��Ԫ�أ�����--
                //3.�޸��������ӵ�״̬
                printf("\n��������Ҫ�����乬�����ӣ�");
                scanf("%s",tempName);
                {   //ѭ������
                    for(i = 0;i < count;i++)
                    {
                        if(strcmp(tempName, names[i]) == 0) //�Ƚ��ַ����Ƿ����
                        {
                            index = i;
                            break;
                        }
                    }
                    if(index == -1)
                    {
                        printf("\n�ֵܣ������ڵ�~\n");
                    }
                    else
                    {
                        printf("\n����<%s>��������ɭɭ�Ĺ㺮��~\n\n�������������ֻ����øж�+20", names[i]);
                        for(i = index;i < count - 1;i++)
                        {
                            //names[i] = names[i + 1];��Ϊ���ַ����飬C�����в�֧�������ֱ�Ӹ�ֵ��
                            //��Ҫʹ��strcpy����ʵ������ĸ�ֵ��ͬ����Ҫ<string.h>
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
                PlaySound(TEXT("sounds\\һЦ���.wav"),
                  NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
                //���Ӹ����ӵĺøжȼ���
                printf("\n��������Ҫ�ټ������ӣ�");
                scanf("%s", tempName);
                for(i = 0;i < count;i++)
                {
                    if(strcmp(tempName, names[i]) == 0) //�Ƚ��ַ����Ƿ����
                        {
                            index = i;
                            break;
                        }
                }
                    if(index == -1)
                    {
                        printf("\n�ֵܣ������ڵ�~\n");
                    }
                    else
                    {
                        loves[i] += 15;
                        printf("\n��һ��ҹ�ڷ�ߵ�ҹ��~~~~~~~\n");
                        printf("\n����<%s>�ĺøж�+15~\n", names[i]);
                        break;
                    }
                index = -1;
            break;
        default:
        printf("\n\t������Ϸ��,������˼!��\n");
        }

        //����Ϣ��ʾ����֮ǰ�Ƚ�������
        for(i = 0;i < count - 1;i++)
        {
            for(j = 0;j < count - i - 1;j++)
            {
                //�������ӵļ����������ð������
                //Ҫ�����Ԫ���У����������𣬺øж�
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
            printf("\n������~�����ǳ�Ⱥ�����ʵ۱�ȥ~~\n");
            time_t timep;
            struct tm * p;
            time(&timep);
            p = gmtime(&timep);
            printf("\n��Ԫ%d��%d��%d�գ��ʵ��䣡��ִ��%d��~\n", 1900+p->tm_year, 1+p->tm_mon, p->tm_mday, currDay);
            exit(0);
        }
    }while(currDay < DAY_COUNT);
    printf("�ʵ۵ǻ�10��������ȷ�ǡ������˳����檳�Ⱥ����������\n");
    printf("û��û����������������š�������������\n");
    printf("\n*********************************************\n\n");
    Sleep(100);
    printf("\t\t*�󹬼�����ǧ*\n\n");
    Sleep(100);
    printf("\t%-12s����\t�øж�\n","����");
    printf("\t------------------------------\n");
    Sleep(100); //С����  -12�����12���ַ�
    for(i = 0;i < count;i++)
    {
        printf("\t%-12s%s\t%d\n", names[i], levelNames[levels[i]], loves[i]);
        Sleep(100);
    }
    printf("\n*********************************************\n\n");
    return 0;
}
