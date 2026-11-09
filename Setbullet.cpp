#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "1.h"
#include <Windows.h>

int Setbullet(int* allbullet, int* livebullet, int* blankbullet)
{ 
    if (round == 1)
        goto ONE;
    else if (round == 2)
        goto TWO;
    else
        goto THREE;

ONE:
    *allbullet = rand() % 4 + 2;                     // 2~5발
    if (*allbullet == 5)
        *livebullet = rand() % 2 + 2;                // 2 or 3발
    else
        *livebullet = rand() % (*allbullet - 1) + 1;  // 총 4발이하에서 최소 1발 
    *blankbullet = *allbullet - *livebullet;
    goto END;

TWO:
    *allbullet = rand() % 5 + 4;                    // 4~8발
    if (*allbullet == 4)
        *livebullet = rand() % (*allbullet - 1) + 1; // 1~3발
    else if (*allbullet == 5)
        *livebullet = rand() % 2 + 2;               // 2 or 3발
    else if (*allbullet == 6)
        *livebullet = rand() % 3 + 2;               // 2~4발
    else if (*allbullet == 7)
        *livebullet = rand() % 4 + 2;               // 2~5발
    else
        *livebullet = rand() % 3 + 3;               // 총 8발일때 3~5발
    *blankbullet = *allbullet - *livebullet;
    goto END;

THREE:
    *allbullet = rand() % 6 + 5;                    // 5~10발
    if (*allbullet == 5)
        *livebullet = rand() % 2 + 2;               // 2 or 3발
    else if (*allbullet == 6)
        *livebullet = rand() % 3 + 2;               // 2~4발
    else if (*allbullet == 7)
        *livebullet = rand() % 4 + 2;               // 2~5발
    else if (*allbullet == 8)
        *livebullet = rand() % 3 + 3;               // 3~5발
    else if (*allbullet == 9)
        *livebullet = rand() % 3 + 4;               // 4~6발
    else
        *livebullet = rand() % 3 + 4;              // 4~ 6발
    *blankbullet = *allbullet - *livebullet;
    goto END;

END:
    return 0;
}

