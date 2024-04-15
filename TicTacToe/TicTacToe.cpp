// TicTacToe.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

struct Space {

    char mark = ' ';

    void ChangeMark(char aMark)
    {
        this->mark = aMark;
    }
    
};

int main()
{
    Space board[3][3];

    int row, col;

    bool gameRunning = true;
    bool xTurn = true;
    bool valid = false;


    //Putting out the board.
    cout << "    1   2   3\n"
        "1   " << board[0][0].mark << " | " << board[0][1].mark << " | " << board[0][2].mark << "\n    _________\n" <<
        "2   " << board[1][0].mark << " | " << board[1][1].mark << " | " << board[1][2].mark << "\n    _________\n" <<
        "3   " << board[2][0].mark << " | " << board[2][1].mark << " | " << board[2][2].mark << "\n";

    while (gameRunning)
    {
        while (!valid)
        {
            if (xTurn)
            {
                cout << "\nMake a move X\n" << "col: ";
                cin >> col;
                cout << "row: ";
                cin >> row;

                

                if (board[col - 1][row - 1].mark == ' ')
                {
                    board[col - 1][row - 1].ChangeMark('X');
                    xTurn = false;
                    valid = true;
                }
                else
                {
                    cout << "\n*****INVALID MOVE*****\n";
                }
            }
            else
            {

                cout << "\nMake a move O\n" << "col: ";
                cin >> col;
                cout << "row: ";
                cin >> row;

                
                if (board[col - 1][row - 1].mark == ' ')
                {
                    board[col - 1][row - 1].ChangeMark('O');
                    xTurn = true;
                    valid = true;
                }
                else
                {
                    cout << "\n*****INVALID MOVE*****\n";
                }

            }
        }
        valid = false;
        cout << "    1   2   3\n"
            "1   " << board[0][0].mark << " | " << board[0][1].mark << " | " << board[0][2].mark << "\n    _________\n" <<
            "2   " << board[1][0].mark << " | " << board[1][1].mark << " | " << board[1][2].mark << "\n    _________\n" <<
            "3   " << board[2][0].mark << " | " << board[2][1].mark << " | " << board[2][2].mark << "\n";



    }
}
