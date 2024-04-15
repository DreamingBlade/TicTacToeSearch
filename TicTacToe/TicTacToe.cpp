// TicTacToe.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

struct Space {

    char mark = ' ';

};

int main()
{


    Space board[3][3];

    //Putting out the board.
    cout << "    1   2   3\n"
        "1   " << board[0][0].mark << " | " << board[0][1].mark << " | " << board[0][2].mark << "\n    _________\n" <<
        "2   " << board[1][0].mark << " | " << board[1][1].mark << " | " << board[1][2].mark << "\n    _________\n" <<
        "3   " << board[2][0].mark << " | " << board[2][1].mark << " | " << board[2][2].mark << "\n";
}
