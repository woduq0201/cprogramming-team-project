#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "1.h"

int round = 1;

int main()
{
    srand((unsigned)time(NULL));                                  // 다른거에서 안써도됨
    
	void HP(int* myHP, int* enemyHP);                             // 체력 설정

    int allbullet, livebullet, blankbullet;
    Setbullet(&allbullet, &livebullet, &blankbullet);             //총알 설정
    
    int bullet[10] = { 0 };
    bulletsuffle(bullet, allbullet, livebullet);                  //총알 섞어서 장전

    return 0;
}