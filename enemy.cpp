#include <stdio.h>
#include "1.h"
#include <Windows.h>

int enemy(int livebullet, int blankbullet)
{
	if (livebullet >= blankbullet)
		return 1;                                             // 실탄 더많으면 실탄 발사
	else
		return 0;                                             // 공포탄이 더많으면 공포탄 발사
}

void bulletcount(int bullet[], int allbullet, int firstbullet, int* livebullet, int* blankbullet)
{
	*livebullet = 0;
	*blankbullet = 0;                                         //총알 초기화 (안하면 더해버림)

	for (int i = firstbullet; i < allbullet; i++)            //지금 장전되어있는 총알 확인
		if (bullet[i] == 1)
			(*livebullet)++;                                 // ()없으면 +1이아니라 다음주소로 이동
		else
			(*blankbullet)++;
}