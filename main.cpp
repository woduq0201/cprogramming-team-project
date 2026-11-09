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
        HP(&myHP, &enemyHP);

        Setbullet(&allbullet, &livebullet, &blankbullet);

        bulletsuffle(bullet, allbullet, livebullet);

		printf("실탄 수 = %d, 공포탄 수 = %d\n", livebullet, blankbullet);  //텍스트용")
		Sleep(1000);

        firstbullet = 0;

        while (myHP > 0 && enemyHP > 0)
        {
            if (firstbullet >= allbullet)
            {
                Setbullet(&allbullet, &livebullet, &blankbullet);
                bulletsuffle(bullet, allbullet, livebullet);
                firstbullet = 0;
                printf("실탄 수 = %d, 공포탄 수 = %d\n", livebullet, blankbullet);  //텍스트용")
            }
            turn(bullet, &allbullet, &myHP, &enemyHP, livebullet, blankbullet);
        }

        if (myHP <= 0)
        {
            round = 1;
            T = 1;
            continue;
        }

        if (enemyHP <= 0)
        {
            round++;
            continue;
        }
    }

}