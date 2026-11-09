#include <stdio.h>    
#include "1.h"
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

void bulletsuffle(int bullet[], int allbullet, int livebullet)
{	

	int i,j,temp;

	for (i = 0; i < livebullet; i++)                    //½ÇÅº ÀåÀü
		bullet[i] = 1;
	for (i = livebullet; i < allbullet; i++)           //°øÆ÷Åº ÀåÀü
		bullet[i] = 0;

	for (i = allbullet - 1; i > 0; i--)                //ÀåÀüµÈ ÃÑ¾Ë ¼¯±â
	{
		j = rand() % (i + 1);
		temp = bullet[i];
		bullet[i] = bullet[j];
		bullet[j] = temp;
	}
}

