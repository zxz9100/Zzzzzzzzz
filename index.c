#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include<windows.h>

//�Լ�
int gameitem();
int gameitemm();
int gameitemmm();
int gameitemmmm();
int gameitemmmmm();
int gameitemmmmmm();
int gameitemmmmmmm();
int gameitemmmmmmmm();
int winorlose();
int plrname();
int maingame();
int first();
int bullet();
int order();
int game();
int order2();
char YYY();

//����
int item1;
int item2;
int item3;
int item4;
int itemm1;
int itemm2;
int itemm3;
int itemm4;
char name[50] = "";
char namee[50] = "";
int bullet1 = 0;
int bullet2 = 0;
int bullet3 = 0;
int plr = 0;
char GGG[15];

//������ ����
char p1[15];
char p2[15];
char p3[15];
char p4[15];
char p5[15];
char p6[15];
char p7[15];
char p8[15];

//�÷��̾� ��� ����
char BBB[50];

//�÷��̾� 1
char o1[5] = "0";
char o2[5] = "0";
char o3[5] = "0";
char o4[5] = "0";
char o5[5] = "0";

//�÷��̾� 2
char c1[5] = "0";
char c2[5] = "0";
char c3[5] = "0";
char c4[5] = "0";
char c5[5] = "0";

int main()
{
    srand(time(NULL));
    first();
    bullet();
    YYY();
    printf("���� ������\n");
    Sleep(2000);
    order();
    Sleep(8000);
    system("cls");

    while (o1 != " " & o2 != " " & o3 != " " & o4 != " " & o5 != " " || c1 != " " & c2 != " " & c3 != " " & c4 != " " & c5 != " ")
    {
        maingame();
        order2();
        game();
        system("cls");
    }
    winorlose();
    
}

int maingame()
{
    plrname();
    printf("�� : %d\n", bullet1);
    printf("�� : %d\n", bullet2);
    printf("------------------------------------------------------------------------------------------\n");
    printf("|%s %s %s %s %s\n", name, p1, p2, p3, p4);
    printf("|                                          %s|                                            |\n", o5);
    printf("|                                          %s|                                            |\n", o4);
    printf("|                                          %s|                                            |\n", o3);
    printf("|                                          %s|                                            |\n", o2);
    printf("|                                          %s|                                            |\n", o1);
    printf("|                                           |                                            |\n");
    printf("|                                           |                                            |\n");
    printf("|                                           |                                            |\n");
    printf("|                                           |                                            |\n");
    printf("|                                           |                                            |\n");
    printf("|                                           |                                            |\n");
    printf("|                                           |                                            |\n");
    printf("|                                           |%s                                           |\n", c1);
    printf("|                                           |%s                                           |\n", c2);
    printf("|                                           |%s                                           |\n", c3);
    printf("|                                           |%s                                           |\n", c4);
    printf("|                                           |%s                                           |\n", c5);
    printf("|%s %s %s %s %s\n", namee, p5, p6, p7, p8);
    printf("------------------------------------------------------------------------------------------\n");
    printf("��� : 1\n");
    printf("�� : 2\n");

    return 0;
}
int order2()
{
    if (plr == 0)
    {
        strcpy(GGG, name);
        if (strcmp(BBB, "1") == 0 || strcmp(BBB, "���") == 0 || strcmp(BBB, "2") == 0 || strcmp(BBB, "��") == 0)
        {
            plr = 1;
        }
        
    }
    else if (plr == 1)
    {
        strcpy(GGG, namee);
        if (strcmp(BBB, "1") == 0 || strcmp(BBB, "���") == 0 || strcmp(BBB, "2") == 0 || strcmp(BBB, "��") == 0)
        {
            plr = 0;
        }
    }
    
    return 0;
}
int game()
{
    printf("%s�� ���� : ", GGG);
    scanf("%s", BBB);

    if (strcmp(BBB, "1") == 0 || strcmp(BBB, "���") == 0)
    {
        printf("gkgkgkg\n");
    }
    else if (strcmp(BBB, "2") == 0 || strcmp(BBB, "��") == 0)
    {
        printf("gkgkgkg\n");
    }
    else if (strcmp(BBB, "����") == 0)
    {
        if (strcmp(GGG, name) == 0)
        {
            printf("sakjbadk");
            Sleep(3000);
        }
        
    }
    else if (strcmp(BBB, "����") == 0)
    {
        printf("gkgkgkg\n");
    }
    else if (strcmp(BBB, "������") == 0)
    {
        printf("gkgkgkg\n");
    }
    else if (strcmp(BBB, "���") == 0)
    {
        printf("gkgkgkg\n");
    }
    else if (strcmp(BBB, "��") == 0)
    {
        printf("gkgkgkg\n");
    }
    else if (strcmp(BBB, "������") == 0)
    {
        printf("gkgkgkg\n");
    }
    else if (strcmp(BBB, "�ι���") == 0)
    {
        printf("gkgkgkg\n");
    }
    else if (strcmp(BBB, "�Ƶ巹����") == 0)
    {
        printf("gkgkgkg\n");
    }
    else if (strcmp(BBB, "���Ѿ�") == 0 || strcmp(BBB, "���� ��") == 0)
    {
        printf("gkgkgkg\n");
    }
    else
    {
        printf("�ٽ� �����ÿ�\n");
        Sleep(3000);
    }
    
    return 0;
    
}

int order()
{
    printf("������ ���� �մϴ�.\n");
    printf("���� �� �÷��̾� ���ϴ� ��(�ð��� �ɸ� �� ����)\n");
    Sleep(2000);

    srand(time(NULL));
    plr = rand() % 2;

    if (plr == 0)
    {
        printf("%s���� ���� ������ ���� �Ͻðڽ��ϴ�.\n", name);
    }
    else if (plr == 1)
    {
        printf("%s���� ���� ������ ���� �Ͻðڽ��ϴ�.\n", namee);
    }

    return 0;

}

int first()
{
    

    printf("�� ������ 2���� �÷��� �ϴ� ���� �Դϴ�.\n�÷��̾� �̸��� �����ֽʽÿ�\n");
    printf("ù��° �÷��̾� �̸� : ");
    scanf("%s", name);
    printf("�ι�° �÷��̾� �̸� : ");
    scanf("%s", namee);

    printf("�÷��̾� �̸� ���� �Ϸ�!\n");
    Sleep(2000);
    system("cls");

    return 0;
}

int winorlose()
{
    if (o1 == " " & o2 == " " & o3 == " " & o4 == " " & o5 == " ")
    {
        printf("%s�� �¸�!!", namee);
    }
    else if (c1 == " " & c2 == " " & c3 == " " & c4 == " " & c5 == " ")
    {
        printf("%s�� �¸�!!", name);
    }
    
    return 0;
}

int plrname()
{
    printf("ù��° �÷��̾� �̸� : %s\n�ι�° �÷��̾� �̸� : %s\n", name, namee);
}

char YYY()
{
    int item1 = gameitem();
    int item2 = gameitemm();
    int item3 = gameitemmm();
    int item4 = gameitemmmm();
    int itemm1 = gameitemmmmm();
    int itemm2 = gameitemmmmmm();
    int itemm3 = gameitemmmmmmm();
    int itemm4 = gameitemmmmmmmm();

    if (item1 == 1)
    {
        strcpy(p1, "����");
    }
    else if (item1 == 2)
    {
        strcpy(p1, "����");
    }
    else if (item1 == 3)
    {
        strcpy(p1, "������");
    }
    else if (item1 == 4)
    {
        strcpy(p1, "���");
    }
    else if (item1 == 5)
    {
        strcpy(p1, "��");
    }
    else if (item1 == 6)
    {
        strcpy(p1, "������");
    }
    else if (item1 == 7)
    {
        strcpy(p1, "�ι���");
    }
    else if (item1 == 8)
    {
        strcpy(p1, "�Ƶ巹����");
    }
    else if (item1 == 9)
    {
        strcpy(p1, "���Ѿ�");
    }
/////////////////////////////////////////////
    if (item2 == 1)
    {
        strcpy(p2, "����");
    }
    else if (item2 == 2)
    {
        strcpy(p2, "����");
    }
    else if (item2 == 3)
    {
        strcpy(p2, "������");
    }
    else if (item2 == 4)
    {
        strcpy(p2, "���");
    }
    else if (item2 == 5)
    {
        strcpy(p2, "��");
    }
    else if (item2 == 6)
    {
        strcpy(p2, "������");
    }
    else if (item2 == 7)
    {
        strcpy(p2, "�ι���");
    }
    else if (item2 == 8)
    {
        strcpy(p2, "�Ƶ巹����");
    }
    else if (item2 == 9)
    {
        strcpy(p1, "���Ѿ�");
    }
/////////////////////////////////////////////
    if (item3 == 1)
    {
        strcpy(p3, "����");
    }
    else if (item3 == 2)
    {
        strcpy(p3, "����");
    }
    else if (item3 == 3)
    {
        strcpy(p3, "������");
    }
    else if (item3 == 4)
    {
        strcpy(p3, "���");
    }
    else if (item3 == 5)
    {
        strcpy(p3, "��");
    }
    else if (item3 == 6)
    {
        strcpy(p3, "������");
    }
    else if (item3 == 7)
    {
        strcpy(p3, "�ι���");
    }
    else if (item3 == 8)
    {
        strcpy(p3, "�Ƶ巹����");
    }
    else if (item3 == 9)
    {
        strcpy(p3, "���Ѿ�");
    }
/////////////////////////////////////////////
    if (item4 == 1)
    {
        strcpy(p4, "����");
    }
    else if (item4 == 2)
    {
        strcpy(p4, "����");
    }
    else if (item4 == 3)
    {
        strcpy(p4, "������");
    }
    else if (item4 == 4)
    {
        strcpy(p4, "���");
    }
    else if (item4 == 5)
    {
        strcpy(p4, "��");
    }
    else if (item4 == 6)
    {
        strcpy(p4, "������");
    }
    else if (item4 == 7)
    {
        strcpy(p4, "�ι���");
    }
    else if (item4 == 8)
    {
        strcpy(p4, "�Ƶ巹����");
    }
    else if (item4 == 9)
    {
        strcpy(p4, "���Ѿ�");
    }
//////////////////////////////////////////////
if (itemm1 == 1)
    {
        strcpy(p5, "����");
    }
    else if (itemm1 == 2)
    {
        strcpy(p5, "����");
    }
    else if (itemm1 == 3)
    {
        strcpy(p5, "������");
    }
    else if (itemm1 == 4)
    {
        strcpy(p5, "���");
    }
    else if (itemm1 == 5)
    {
        strcpy(p5, "��");
    }
    else if (item1 == 6)
    {
        strcpy(p5, "������");
    }
    else if (itemm1 == 7)
    {
        strcpy(p5, "�ι���");
    }
    else if (itemm1 == 8)
    {
        strcpy(p5, "�Ƶ巹����");
    }
    else if (itemm1 == 9)
    {
        strcpy(p5, "���Ѿ�");
    }
/////////////////////////////////////////////
    if (itemm2 == 1)
    {
        strcpy(p6, "����");
    }
    else if (itemm2 == 2)
    {
        strcpy(p6, "����");
    }
    else if (itemm2 == 3)
    {
        strcpy(p6, "������");
    }
    else if (itemm2 == 4)
    {
        strcpy(p6, "���");
    }
    else if (itemm2 == 5)
    {
        strcpy(p6, "��");
    }
    else if (itemm2 == 6)
    {
        strcpy(p6, "������");
    }
    else if (itemm2 == 7)
    {
        strcpy(p6, "�ι���");
    }
    else if (itemm2 == 8)
    {
        strcpy(p6, "�Ƶ巹����");
    }
    else if (itemm2 == 9)
    {
        strcpy(p6, "���Ѿ�");
    }
/////////////////////////////////////////////
    if (itemm3 == 1)
    {
        strcpy(p7, "����");
    }
    else if (itemm3 == 2)
    {
        strcpy(p7, "����");
    }
    else if (itemm3 == 3)
    {
        strcpy(p7, "������");
    }
    else if (itemm3 == 4)
    {
        strcpy(p7, "���");
    }
    else if (itemm3 == 5)
    {
        strcpy(p7, "��");
    }
    else if (itemm3 == 6)
    {
        strcpy(p7, "������");
    }
    else if (itemm3 == 7)
    {
        strcpy(p7, "�ι���");
    }
    else if (itemm3 == 8)
    {
        strcpy(p7, "�Ƶ巹����");
    }
    else if (itemm3 == 9)
    {
        strcpy(p7, "���Ѿ�");
    }
/////////////////////////////////////////////
    if (itemm4 == 1)
    {
        strcpy(p8, "����");
    }
    else if (itemm4 == 2)
    {
        strcpy(p8, "����");
    }
    else if (itemm4 == 3)
    {
        strcpy(p8, "������");
    }
    else if (itemm4 == 4)
    {
        strcpy(p8, "���");
    }
    else if (itemm4 == 5)
    {
        strcpy(p8, "��");
    }
    else if (itemm4 == 6)
    {
        strcpy(p8, "������");
    }
    else if (itemm4 == 7)
    {
        strcpy(p8, "�ι���");
    }
    else if (itemm4 == 8)
    {
        strcpy(p8, "�Ƶ巹����");
    }
    else if (itemm4 == 9)
    {
        strcpy(p8, "���Ѿ�");
    }
    
    return 0;
}

int bullet()
{

    do
    {
        bullet3 = rand() % 8 + 1;
    } while (bullet3 <= 2);
    

    

    do
    {
        bullet1 = rand() % 8 + 1;
    }while(bullet1 >= bullet3);

    bullet2 = bullet3 - bullet1;

}

int gameitem()
{
    int randomitem;
    int LL;
    
    randomitem = rand() % 9 + 1;

    if (randomitem >= 1 && randomitem <= 9)
    {
        LL = randomitem;
    }
    
    return LL;
}

int gameitemm()
{
    int randomitem;
    int LL;
    
    randomitem = rand() % 9 + 1;

    if (randomitem >= 1 && randomitem <= 9)
    {
        LL = randomitem;
    }
    
    return LL;
}

int gameitemmm()
{
    int randomitem;
    int LL;
    
    randomitem = rand() % 9 + 1;

    if (randomitem >= 1 && randomitem <= 9)
    {
        LL = randomitem;
    }
    
    return LL;
}

int gameitemmmm()
{
    int randomitem;
    int LL;
    
    randomitem = rand() % 9 + 1;

    if (randomitem >= 1 && randomitem <= 9)
    {
        LL = randomitem;
    }
    
    return LL;
}

int gameitemmmmm()
{
    int randomitem;
    int LL;
    
    randomitem = rand() % 9 + 1;

    if (randomitem >= 1 && randomitem <= 9)
    {
        LL = randomitem;
    }
    
    return LL;
}

int gameitemmmmmm()
{
    int randomitem;
    int LL;
    
    randomitem = rand() % 9 + 1;

    if (randomitem >= 1 && randomitem <= 9)
    {
        LL = randomitem;
    }
    
    return LL;
}

int gameitemmmmmmm()
{
    int randomitem;
    int LL;
    
    randomitem = rand() % 9 + 1;

    if (randomitem >= 1 && randomitem <= 9)
    {
        LL = randomitem;
    }
    
    return LL;
}

int gameitemmmmmmmm()
{
    int randomitem;
    int LL;
    
    randomitem = rand() % 9 + 1;

    if (randomitem >= 1 && randomitem <= 9)
    {
        LL = randomitem;
    }
    
    return LL;
}