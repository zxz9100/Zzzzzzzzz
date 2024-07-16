#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include<windows.h>

//함수
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

//변수
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

//아이템 변수
char p1[15];
char p2[15];
char p3[15];
char p4[15];
char p5[15];
char p6[15];
char p7[15];
char p8[15];

//플레이어 대답 변수
char BBB[50];

//플레이어 1
char o1[5] = "0";
char o2[5] = "0";
char o3[5] = "0";
char o4[5] = "0";
char o5[5] = "0";

//플레이어 2
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
    printf("게임 세팅중\n");
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
    printf("실 : %d\n", bullet1);
    printf("공 : %d\n", bullet2);
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
    printf("상대 : 1\n");
    printf("나 : 2\n");

    return 0;
}
int order2()
{
    if (plr == 0)
    {
        strcpy(GGG, name);
        if (strcmp(BBB, "1") == 0 || strcmp(BBB, "상대") == 0 || strcmp(BBB, "2") == 0 || strcmp(BBB, "나") == 0)
        {
            plr = 1;
        }
        
    }
    else if (plr == 1)
    {
        strcpy(GGG, namee);
        if (strcmp(BBB, "1") == 0 || strcmp(BBB, "상대") == 0 || strcmp(BBB, "2") == 0 || strcmp(BBB, "나") == 0)
        {
            plr = 0;
        }
    }
    
    return 0;
}
int game()
{
    printf("%s님 차례 : ", GGG);
    scanf("%s", BBB);

    if (strcmp(BBB, "1") == 0 || strcmp(BBB, "상대") == 0)
    {
        printf("gkgkgkg\n");
    }
    else if (strcmp(BBB, "2") == 0 || strcmp(BBB, "나") == 0)
    {
        printf("gkgkgkg\n");
    }
    else if (strcmp(BBB, "수갑") == 0)
    {
        if (strcmp(GGG, name) == 0)
        {
            printf("sakjbadk");
            Sleep(3000);
        }
        
    }
    else if (strcmp(BBB, "맥주") == 0)
    {
        printf("gkgkgkg\n");
    }
    else if (strcmp(BBB, "돋보기") == 0)
    {
        printf("gkgkgkg\n");
    }
    else if (strcmp(BBB, "담배") == 0)
    {
        printf("gkgkgkg\n");
    }
    else if (strcmp(BBB, "톱") == 0)
    {
        printf("gkgkgkg\n");
    }
    else if (strcmp(BBB, "대포폰") == 0)
    {
        printf("gkgkgkg\n");
    }
    else if (strcmp(BBB, "인버터") == 0)
    {
        printf("gkgkgkg\n");
    }
    else if (strcmp(BBB, "아드레날린") == 0)
    {
        printf("gkgkgkg\n");
    }
    else if (strcmp(BBB, "상한약") == 0 || strcmp(BBB, "상한 약") == 0)
    {
        printf("gkgkgkg\n");
    }
    else
    {
        printf("다시 적으시오\n");
        Sleep(3000);
    }
    
    return 0;
    
}

int order()
{
    printf("게임을 시작 합니다.\n");
    printf("먼저 할 플레이어 정하는 중(시간이 걸릴 수 있음)\n");
    Sleep(2000);

    srand(time(NULL));
    plr = rand() % 2;

    if (plr == 0)
    {
        printf("%s님이 먼저 게임을 시작 하시겠습니다.\n", name);
    }
    else if (plr == 1)
    {
        printf("%s님이 먼저 게임을 시작 하시겠습니다.\n", namee);
    }

    return 0;

}

int first()
{
    

    printf("이 게임은 2명에서 플레이 하는 게임 입니다.\n플레이어 이름을 정해주십시오\n");
    printf("첫번째 플레이어 이름 : ");
    scanf("%s", name);
    printf("두번째 플레이어 이름 : ");
    scanf("%s", namee);

    printf("플레이어 이름 저장 완료!\n");
    Sleep(2000);
    system("cls");

    return 0;
}

int winorlose()
{
    if (o1 == " " & o2 == " " & o3 == " " & o4 == " " & o5 == " ")
    {
        printf("%s님 승리!!", namee);
    }
    else if (c1 == " " & c2 == " " & c3 == " " & c4 == " " & c5 == " ")
    {
        printf("%s님 승리!!", name);
    }
    
    return 0;
}

int plrname()
{
    printf("첫번째 플레이어 이름 : %s\n두번째 플레이어 이름 : %s\n", name, namee);
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
        strcpy(p1, "수갑");
    }
    else if (item1 == 2)
    {
        strcpy(p1, "맥주");
    }
    else if (item1 == 3)
    {
        strcpy(p1, "돋보기");
    }
    else if (item1 == 4)
    {
        strcpy(p1, "담배");
    }
    else if (item1 == 5)
    {
        strcpy(p1, "톱");
    }
    else if (item1 == 6)
    {
        strcpy(p1, "대포폰");
    }
    else if (item1 == 7)
    {
        strcpy(p1, "인버터");
    }
    else if (item1 == 8)
    {
        strcpy(p1, "아드레날린");
    }
    else if (item1 == 9)
    {
        strcpy(p1, "상한약");
    }
/////////////////////////////////////////////
    if (item2 == 1)
    {
        strcpy(p2, "수갑");
    }
    else if (item2 == 2)
    {
        strcpy(p2, "맥주");
    }
    else if (item2 == 3)
    {
        strcpy(p2, "돋보기");
    }
    else if (item2 == 4)
    {
        strcpy(p2, "담배");
    }
    else if (item2 == 5)
    {
        strcpy(p2, "톱");
    }
    else if (item2 == 6)
    {
        strcpy(p2, "대포폰");
    }
    else if (item2 == 7)
    {
        strcpy(p2, "인버터");
    }
    else if (item2 == 8)
    {
        strcpy(p2, "아드레날린");
    }
    else if (item2 == 9)
    {
        strcpy(p1, "상한약");
    }
/////////////////////////////////////////////
    if (item3 == 1)
    {
        strcpy(p3, "수갑");
    }
    else if (item3 == 2)
    {
        strcpy(p3, "맥주");
    }
    else if (item3 == 3)
    {
        strcpy(p3, "돋보기");
    }
    else if (item3 == 4)
    {
        strcpy(p3, "담배");
    }
    else if (item3 == 5)
    {
        strcpy(p3, "톱");
    }
    else if (item3 == 6)
    {
        strcpy(p3, "대포폰");
    }
    else if (item3 == 7)
    {
        strcpy(p3, "인버터");
    }
    else if (item3 == 8)
    {
        strcpy(p3, "아드레날린");
    }
    else if (item3 == 9)
    {
        strcpy(p3, "상한약");
    }
/////////////////////////////////////////////
    if (item4 == 1)
    {
        strcpy(p4, "수갑");
    }
    else if (item4 == 2)
    {
        strcpy(p4, "맥주");
    }
    else if (item4 == 3)
    {
        strcpy(p4, "돋보기");
    }
    else if (item4 == 4)
    {
        strcpy(p4, "담배");
    }
    else if (item4 == 5)
    {
        strcpy(p4, "톱");
    }
    else if (item4 == 6)
    {
        strcpy(p4, "대포폰");
    }
    else if (item4 == 7)
    {
        strcpy(p4, "인버터");
    }
    else if (item4 == 8)
    {
        strcpy(p4, "아드레날린");
    }
    else if (item4 == 9)
    {
        strcpy(p4, "상한약");
    }
//////////////////////////////////////////////
if (itemm1 == 1)
    {
        strcpy(p5, "수갑");
    }
    else if (itemm1 == 2)
    {
        strcpy(p5, "맥주");
    }
    else if (itemm1 == 3)
    {
        strcpy(p5, "돋보기");
    }
    else if (itemm1 == 4)
    {
        strcpy(p5, "담배");
    }
    else if (itemm1 == 5)
    {
        strcpy(p5, "톱");
    }
    else if (item1 == 6)
    {
        strcpy(p5, "대포폰");
    }
    else if (itemm1 == 7)
    {
        strcpy(p5, "인버터");
    }
    else if (itemm1 == 8)
    {
        strcpy(p5, "아드레날린");
    }
    else if (itemm1 == 9)
    {
        strcpy(p5, "상한약");
    }
/////////////////////////////////////////////
    if (itemm2 == 1)
    {
        strcpy(p6, "수갑");
    }
    else if (itemm2 == 2)
    {
        strcpy(p6, "맥주");
    }
    else if (itemm2 == 3)
    {
        strcpy(p6, "돋보기");
    }
    else if (itemm2 == 4)
    {
        strcpy(p6, "담배");
    }
    else if (itemm2 == 5)
    {
        strcpy(p6, "톱");
    }
    else if (itemm2 == 6)
    {
        strcpy(p6, "대포폰");
    }
    else if (itemm2 == 7)
    {
        strcpy(p6, "인버터");
    }
    else if (itemm2 == 8)
    {
        strcpy(p6, "아드레날린");
    }
    else if (itemm2 == 9)
    {
        strcpy(p6, "상한약");
    }
/////////////////////////////////////////////
    if (itemm3 == 1)
    {
        strcpy(p7, "수갑");
    }
    else if (itemm3 == 2)
    {
        strcpy(p7, "맥주");
    }
    else if (itemm3 == 3)
    {
        strcpy(p7, "돋보기");
    }
    else if (itemm3 == 4)
    {
        strcpy(p7, "담배");
    }
    else if (itemm3 == 5)
    {
        strcpy(p7, "톱");
    }
    else if (itemm3 == 6)
    {
        strcpy(p7, "대포폰");
    }
    else if (itemm3 == 7)
    {
        strcpy(p7, "인버터");
    }
    else if (itemm3 == 8)
    {
        strcpy(p7, "아드레날린");
    }
    else if (itemm3 == 9)
    {
        strcpy(p7, "상한약");
    }
/////////////////////////////////////////////
    if (itemm4 == 1)
    {
        strcpy(p8, "수갑");
    }
    else if (itemm4 == 2)
    {
        strcpy(p8, "맥주");
    }
    else if (itemm4 == 3)
    {
        strcpy(p8, "돋보기");
    }
    else if (itemm4 == 4)
    {
        strcpy(p8, "담배");
    }
    else if (itemm4 == 5)
    {
        strcpy(p8, "톱");
    }
    else if (itemm4 == 6)
    {
        strcpy(p8, "대포폰");
    }
    else if (itemm4 == 7)
    {
        strcpy(p8, "인버터");
    }
    else if (itemm4 == 8)
    {
        strcpy(p8, "아드레날린");
    }
    else if (itemm4 == 9)
    {
        strcpy(p8, "상한약");
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