#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <windows.h>

//�Լ�
int game();
int name();
int Player();
int gunStatus();
int FirstPlayer();

//�̸�
char name1[30];
char name2[30];

//�÷��̾� ���
char answer[100];

//����
int gun1;
int gun2;
int i;

//���
char p[10] = {'0', '0', '0', '0', '0', '0', '0', '0', '0', '0'};

int main()
{
    int o = 1;

    srand(time(NULL));

    name();
    i = FirstPlayer();
    gunStatus();
    
    while (o == 1)
    {
        game();
        Player();
        system("cls");
    }
    
    return 0;
}

int game()
{
    printf("�� : %d\n", gun1);
    printf("�� : %d\n", gun2);
    printf("------------------------------------------------------------------------------\n");
    printf("|%s\n", name1);
    printf("|                                                                            |\n");
    printf("|                                                                            |\n");
    printf("|                                                                            |\n");
    printf("|                                                                            |\n");
    printf("|��� : %c %c %c %c %c                                                            |\n", p[0], p[1] ,p[2], p[3], p[4]);
    printf("------------------------------------------------------------------------------\n");
    printf("|��� : %c %c %c %c %c                                                            |\n", p[5], p[6], p[7], p[8], p[9]);
    printf("|                                                                            |\n");
    printf("|                                                                            |\n");
    printf("|                                                                            |\n");
    printf("|                                                                            |\n");
    printf("|%s\n", name2);
    printf("------------------------------------------------------------------------------\n");
    printf("��� : 1\n");
    printf("�� :  2\n");

    return 0;
}

int name()
{
    printf("ù��° �÷��̾� �̸� : ");
    gets(name1);
    printf("�ι�° �÷��̾� �̸� : ");
    gets(name2);
    system("cls");
    printf("�÷��̾� �̸� ���� �Ϸ�!\n");
    printf("������ ���� �մϴ�.\n");
    Sleep(5000);
    system("cls");

    return 0;
}

int FirstPlayer()
{
    int i = rand() % 2;

    if (i == 0)
    {
        printf("%s�� ����\n", name1);
        Sleep(3000);
        system("cls");
    }
    else if (i == 1)
    {
        printf("%s�� ����\n", name2);
        Sleep(3000);
        system("cls");
    }
    
    return i;
}

int Player()
{
    if (i == 0)
    {
        printf("%s�� ���� : ", name1);
        scanf("%s", answer);
        if (strcmp(answer, "1") == 0 || strcmp(answer, "2") == 0 || strcmp(answer, "���") == 0 || strcmp(answer, "��") == 0)
        {
            i = 1;
        }
    }
    else if (i == 1)
    {
        printf("%s�� ���� : ", name2);
        scanf("%s", answer);
        if (strcmp(answer, "1") == 0 || strcmp(answer, "2") == 0 || strcmp(answer, "���") == 0 || strcmp(answer, "��") == 0)
        {
            i = 0;
        }
        
    }
    
    return 0;
}

int gunStatus()
{
    do
    {
        gun1 = 0;
        gun2 = 0;

       for (int i = 0; i < 8; i++)
        {
            int gun = rand() % 3;

            if (gun == 0)
            {
                gun1++;
            }
            else if (gun == 2)
            {
                gun2++;
            }
        } 
    } while (gun1 == 0 || gun2 == 0);
    
    return 0;
}