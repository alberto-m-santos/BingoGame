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
    bool winner = false;

public:
    int card[3][5]={{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0}};
    void Readcard();
    void Setcard(int c[3][5]);
    void Markoffnumber (int x);
    void Checkwin();
    int credits;
};

void Player::Readcard()
{
    for(int row=0; row<3; row++){
        for(int col=0; col<5; col++){
            cout << card[row][col]<<" ";
        }
        cout << endl;
    }
}

void Player::Setcard(int c[3][5])
{
    for(int row=0; row<3; row++){
        for(int col=0; col<5; col++){
            card[row][col] = c[row][col];
        }
    }
}

void Player::Markoffnumber(int n)
{
    for(int row=0; row<3; row++){
        for(int col=0; col<5; col++){
            if(card[row][col] == n){
                card[row][col] = 0;
                Checkwin();
            }
        }
    }
}

void Player::Checkwin()
{
    for(int row=0; row<3; row++){
        for(int col=0; col<5; col++){
            if(card[row][col] == n){
                card[row][col] = 0;
                Checkwin();
            }
        }
    }
}


int main()
{
    return 0;
}