#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "1.h"
#include <Windows.h>

int firstbullet = 0;

int active()
{
	int select;
	printf("1: 나, 2: 상대\n");
	scanf("%d", &select);

    while (select != 1 && select != 2)
    {
        printf("1: 나, 2: 상대\n");
        scanf("%d", &select);
    }

	return select;
}

int fire(int bullet[], int *allbullet, int *myHP, int *enemyHP)
{
	int select = active();
	int nowbullet = bullet[firstbullet];

    if (firstbullet >= *allbullet)
        return 0;

    if (select == 1)
    {
        if (bullet[firstbullet] == 1)
        {
			printf("실탄발사\n");						     //텍스트용
            printf("\n");
            Sleep(1000);

            (*myHP)--;

            printf("내 HP = %d\n", *myHP);                   //텍스트용
            printf("\n");
            Sleep(1000);
        }
        else
        {
            printf("공포탄발사\n");
            printf("\n");
        }
    }
    else
    {
        if (bullet[firstbullet] == 1)
        { 
            printf("실탄발사\n");						     //텍스트용
            printf("\n");
            Sleep(1000);

            (*enemyHP)--;
            printf("상대 HP = %d\n", *enemyHP);              //텍스트용
            printf("\n");
            Sleep(1000);
        }
        else
            printf("공포탄발사\n");						     //텍스트용
        printf("\n");
            Sleep(1000);
    }

    firstbullet++;

    if (select == 1 && nowbullet == 0)
        return 1;
    else
        return 0;
}

int enemyfire(int bullet[],int livebullet, int blankbullet,int* myHP,int *enemyHP)
{
    int nowbullet = bullet[firstbullet];

    if (enemy(livebullet,blankbullet) == 1)
    {
        if (bullet[firstbullet] == 1)
        {
            printf("상대선택 : 나에게발사\n");               //텍스트용
            Sleep(1000);
            printf("총알 : 실탄\n");                         //텍스트용
            printf("\n");
            Sleep(2000);
            (*myHP)--;
            printf("내 HP = %d\n", *myHP);                   //텍스트용
            printf("\n");
            Sleep(1500);
        }
        else
        {
            printf("상대선택 : 나에게발사\n");               //텍스트용
            Sleep(1000);
            printf("총알 : 공포탄\n");                       //텍스트용
            printf("\n");
            Sleep(2000);
        } 
    }
    else
    {
        if (bullet[firstbullet] == 1)
        {
            printf("상대선택 : 본인에게발사\n");             //텍스트용
            Sleep(500);
            printf("총알 : 실탄\n");                         //텍스트용
            printf("\n");
            Sleep(1000);
            (*enemyHP)--;
            printf("상대 HP = %d\n", *enemyHP);              //텍스트용
            printf("\n");
            Sleep(1000);
        }
        else
		{
			printf("상대선택 : 본인에게발사\n");             //텍스트용
            Sleep(500);
			printf("총알 : 공포탄\n");                       //텍스트용
            printf("\n");
            Sleep(1000);
		}
    }

    firstbullet++;

    if(enemy(livebullet, blankbullet) == 0 && nowbullet == 0)
        return 1;
    else
        return 0;
}