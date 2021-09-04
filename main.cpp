#include <iostream>
#include <fstream>
#include <ctime>
#include <cstdlib>
#include <vector>
#include <cctype>
#include<string>
#include<windows.h>
using namespace std;


class Player
{
private:
    bool WinLine = false;
    bool WinBingo = false;
    int credits;

public:
    Player(bool WinLine, bool WinBingo, int credits);
    int card[3][5]={{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0}};
    void Readcard();
    void Setcard(int c[3][5]);
    void Markoffnumber (int x);
    void Checkwin();
};

Player::Player(bool WinLine, bool WinBingo, int credits)
{
    this->WinLine = WinLine;
    this->WinBingo = WinBingo;
    this->credits = credits;
}

void Player::Readcard()
{
    for(int row=0; row<3; row++){
        for(int col=0; col<5; col++)
        {
            cout << card[row][col]<<" ";
        }
        cout << endl;
    }
}

void Player::Setcard(int c[3][5])
{
    for(int row=0; row<3; row++)
    {
        for(int col=0; col<5; col++)
        {
            card[row][col] = c[row][col];
        }
    }
}

void Player::Markoffnumber(int n)
{
    for(int row=0; row<3; row++)
    {
        for(int col=0; col<5; col++)
        {
            if(card[row][col] == n){
                card[row][col] = 0;
                Checkwin();
            }
        }
    }
}

void Player::Checkwin()
{
    int contlines=0; //Number of lines to get Bingo
    for(int row=0; row<3; row++)
    {
        if(card[row][0]==0 && card[row][1]==0 && card[row][2]==0 && card[row][3]==0 && card[row][4]==0) //Check line
        {
            WinLine = true;
            contlines++;
        }
        if(contlines==3)
        {
            WinBingo = true;
        }
    }
}

class Game
{
private:
    int cont = 0;
    int RandNumbers[30];
    Player X;

public:
    Game();
    void Write(string outfile);
    void Read(string outfile);
    void Shuffle();
};

Game::Game()
{
    Write("Welcome to Bingo!");
    Shuffle();
    Write("Player's card");
    Read("Player's card");
}

int main()
{
    return 0;
}