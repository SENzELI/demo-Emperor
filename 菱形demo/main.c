#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j;
    for(i = 0;i < 5;i++)
    {
        for(j = 0;j <= 5 - i;j++)  // �ı䡰5�����������ƶ�
        {
            printf(" ");
        }
            for(j = 0;j <= i * 2;j++)
            {
                if( i == 0 || j == 0 || j == i * 2)  //�ڿ�
                printf("%c", '*');
                else
                printf(" ");

            }
        printf("\n");
    }

    for(i = 0;i < 4;i++)
    {
        for(j = 0;j <= i + 2;j++)   // �ı䡰2�����������ƶ�
        {
            printf(" ");
        }
            for(j = 0;j <= 6 - i * 2;j++)
            {
                if(j == 0 || j == 6 - i * 2) //�ڿ�
                printf("%c", '*');
                else
                printf(" ");
            }
        printf("\n");
    }

    return 0;
}





