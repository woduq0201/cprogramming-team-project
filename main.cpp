#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "1.h"
#include <Windows.h>

int round = 1;

int main()
{
    srand((unsigned)time(NULL));                                  // 다른거에서 안써도됨
    
    int bullet[10];
    int allbullet, livebullet, blankbullet;
    int myHP, enemyHP;
    
    round = 1;

    while (round <= 3)
    {
        HP(&myHP, &enemyHP);                                                 // 라운드에 따라서 피 설정

        Setbullet(&allbullet, &livebullet, &blankbullet);                    // 실탄, 공포탄 갯수 설정

        bulletsuffle(bullet, allbullet, livebullet);                         // 설정된 총알 배열

        printf("실탄 수 = %d, 공포탄 수 = %d\n", livebullet, blankbullet);  //텍스트용")
        Sleep(1000);

        firstbullet = 0;

        while (myHP > 0 && enemyHP > 0)
        {
            if (firstbullet >= allbullet)                                          // 총알 다쓰면 재장전
            {
                Setbullet(&allbullet, &livebullet, &blankbullet);
                bulletsuffle(bullet, allbullet, livebullet);
                firstbullet = 0;
                printf("실탄 수 = %d, 공포탄 수 = %d\n", livebullet, blankbullet);  //텍스트용")
            }
            turn(bullet, &allbullet, &myHP, &enemyHP, livebullet, blankbullet);   //총알 있으면 게임 진행 
        }

        if (myHP <= 0)
        {
            round = 1;
            T = 1;
            printf("게임 재시작");                                     // 텍스트용
            continue;                                                  //실패시 처음으로
        }

        if (enemyHP <= 0 && round <= 2)
        {
            round++;
            continue;                                                 // 깨면 다음라운드로
        }
        else
            printf("게임 클리어");                                     // 텍스트용
    }
}