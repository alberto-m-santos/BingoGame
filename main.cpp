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
    void Marknumber (int x);
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



int main()
{
    return 0;
}