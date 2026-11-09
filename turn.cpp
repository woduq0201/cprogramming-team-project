#include <stdio.h>
#include "1.h"
#include <Windows.h>

int T = 1;

void turn(int bullet[], int* allbullet, int* myHP, int* enemyHP, int livebullet, int blankbullet)
{
	if (T == 1)
		myturn(bullet, allbullet, myHP, enemyHP);
	else
		enemyturn(bullet, allbullet, myHP, enemyHP, livebullet, blankbullet);

}

void myturn(int bullet[], int* allbullet, int* myHP, int* enemyHP)
{
	printf("내턴\n");                                 
	if (fire(bullet, allbullet, myHP, enemyHP) == 0)
		T = 0;
}

void enemyturn(int bullet[], int* allbullet, int* myHP, int* enemyHP, int livebullet, int blankbullet)
{
	livebullet = 0;                      
	blankbullet = 0;                                       //총알 초기화 (안하면 더해버림)

	void bulletcount(int bullet[], int allbullet, int firstbullet, int* livebullet, int* blankbullet);

	printf("상대턴\n");
	if (enemyfire(bullet, livebullet, blankbullet, myHP, enemyHP) == 0)
		T = 1;
	
}