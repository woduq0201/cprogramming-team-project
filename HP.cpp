#include <stdio.h>
#include "1.h"

void HP(int* myHP,int* enemyHP)
{
	if (round == 1)
	{
		*myHP = 2;
		*enemyHP = 2;
	}
	else if (round == 2)
	{
		*myHP = 4;
		*enemyHP = 4;
	}
	else
	{
		*myHP = 5;
		*enemyHP = 5;
	}
}

