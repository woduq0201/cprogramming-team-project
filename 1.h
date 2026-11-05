#pragma once                //같은 헤더 파일을 여러 번 #include 하더라도 한 번만 처리하도록 해주는 역할

extern int round;

int Setbullet(int*allbullet,int* livebullet, int* blankbullet);
int main();
void bulletsuffle(int bullet[], int allbullet, int livebullet);
