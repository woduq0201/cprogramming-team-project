#pragma once                //같은 헤더 파일에서 여러 번 #include 하더라도 한 번만 처리하도록 해주는 역할

extern int round;           //round라는 전역변수가 있는것을 알리는거 (선언하는거아님)
extern int firstbullet;
extern int T;
extern int nowbullet;


int Setbullet(int*allbullet,int* livebullet, int* blankbullet);                                         //함수 선언
void bulletsuffle(int bullet[], int allbullet, int livebullet);
void HP(int* myHP, int* enemyHP);
int fire(int bullet[], int* allbullet, int* myHP, int* enemyHP);
int active();
void turn(int bullet[], int* allbullet, int* myHP, int* enemyHP, int livebullet, int blankbullet);
void myturn(int bullet[], int* allbullet, int* myHP, int* enemyHP);
void enemyturn(int bullet[], int* allbullet, int* myHP, int* enemyHP, int livebullet, int blankbullet);
void bulletcount(int bullet[], int allbullet, int firstbullet, int* livebullet, int* blankbullet);
int enemy(int livebullet, int blankbullet);
int enemyfire(int bullet[], int livebullet, int blankbullet, int* myHP, int* enemyHP);