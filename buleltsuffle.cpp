#include <stdio.h>    
#include "1.h"
#include <stdlib.h>
#include <time.h>

void bulletsuffle(int bullet[], int allbullet, int livebullet)
{	
	int	blankbullet;

	int i,j,temp;

	for (i = 0; i < livebullet; i++)                    //실탄 장전
		bullet[i] = 1;
	for (i = livebullet; i < allbullet; i++)           //공포탄 장전
		bullet[i] = 0;

	for (i = allbullet - 1; i > 0; i--)                //장전된 총알 섞기
	{
		j = rand() % (i + 1);
		temp = bullet[i];
		bullet[i] = bullet[j];
		bullet[j] = temp;
	}
}

