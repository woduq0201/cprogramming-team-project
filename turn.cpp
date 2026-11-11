#include <stdio.h>
#include "1.h"
#include <Windows.h>

int T = 1;

void turn(int bullet[], int* allbullet, int* myHP, int* enemyHP, int livebullet, int blankbullet)
{
	if (T == 1)
		myturn(bullet, allbullet, myHP, enemyHP);                                     //T=1일때 내턴
	else
		enemyturn(bullet, allbullet, myHP, enemyHP, livebullet, blankbullet);         //T=2일때 상대턴
	 
}

void myturn(int bullet[], int* allbullet, int* myHP, int* enemyHP)
{
	printf("내턴\n");                                 
	if (fire(bullet, allbullet, myHP, enemyHP) == 0)                                 
		T = 0;
}

void enemyturn(int bullet[], int* allbullet, int* myHP, int* enemyHP, int livebullet, int blankbullet)
{
	bulletcount(bullet, *allbullet, firstbullet, &livebullet, &blankbullet);   //남은 총알 카운트

	printf("상대턴\n");
	if (enemyfire(bullet, livebullet, blankbullet, myHP, enemyHP) == 0)
		T = 1;
}