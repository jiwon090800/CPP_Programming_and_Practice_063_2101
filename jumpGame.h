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
	int input_k(); //Ű���� �Է��� �޴� �Լ�
	void init();   //�ܼ�â�� ũ�⸦ �����ϰ�, Ŀ���� ����� �Լ�
	int menu();    //menuȭ���� ���, ����ڰ� ���ϴ� ����� �����ϴ� �Լ�
	void gotoxy(int,int); //Ŀ���� ���ϴ� ��ġ�� �̵��ϴ� �Լ�
	int game_start(); //������ �����ϴ� �Լ�
	void Dino_draw(int); //������ �׷��ִ� �Լ�
	void tree(int); //��ֹ��� �׷��ִ� �Լ�
	void DrawGameOver(const int); //��������ȭ���� �׷��ִ� �Լ�
	bool gameover(const int, const int); //��ֹ� �浹 ���θ� Ȯ���ϴ� �Լ�
};

#endif

