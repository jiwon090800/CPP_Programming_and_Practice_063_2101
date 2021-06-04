#ifndef __JUMPGAME__
#define __JUMPGAME__

#include <iostream>
#include <windows.h> 
#include <conio.h>
#include <string>

#define TREE_BOTTOM_X 80
#define TREE_BOTTOM_Y 36
#define DINO_BOTTOM_Y 27

using namespace std;

class JumpGame{
private:
	string userID;
public:
	JumpGame(string ID) { userID = ID; };
	int input_k(); //키보드 입력을 받는 함수
	void init();   //콘솔창의 크기를 조정하고, 커서를 숨기는 함수
	int menu();    //menu화면을 출력, 사용자가 원하는 기능을 수행하는 함수
	void gotoxy(int,int); //커서를 원하는 위치로 이동하는 함수
	int game_start(); //게임을 실행하는 함수
	void Dino_draw(int); //공룡을 그려주는 함수
	void tree(int); //장애물을 그려주는 함수
	void DrawGameOver(const int); //게임종료화면을 그려주는 함수
	bool gameover(const int, const int); //장애물 충돌 여부를 확인하는 함수
};

#endif

