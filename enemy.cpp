#include <stdio.h>
#include "1.h"
#include <Windows.h>

int enemy(int livebullet, int blankbullet)
{
	if (livebullet >= blankbullet)
		return 1;
	else
		return 0;
}

void bulletcount(int bullet[], int allbullet, int firstbullet, int* livebullet, int* blankbullet)
{
	for (int i = firstbullet; i < allbullet; i++)
		if (bullet[i] == 1)
			(*livebullet)++;                                 //()없으면 +1이아니라 다음주소로 이동
		else
			(*blankbullet)++;
}