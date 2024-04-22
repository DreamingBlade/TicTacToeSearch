#include <iostream>
#include <vector>

using namespace std;

struct Space
{

    char mark = ' ';

    void ChangeMark(char aMark)
    {
        this->mark = aMark;
    }

};


struct BoardState
{
    Space board[3][3];

    float score = 0;
    //float totalScore = 0;

    //vector<BoardState> possibleMoves;

    void CopyBoard(BoardState aBoard)
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                this->board[i][j].ChangeMark(aBoard.board[i][j].mark)
            }
        }
    }
    
};

BoardState CompMove(BoardState currentBoard, char player)
{
    char symbol;
    BoardState move;
    vector<BoardState> nextMoves;

    if (player == 'X')
    {
        symbol = 'O';
    }
    else
    {
        symbol = 'X';
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (currentBoard[i][j].mark == ' ')
            {
                
                nextMoves[i][j].mark = symbol;

                int playerSpots = 0;
                int compSpots = 0;
                //Evaluating top row
                if (nextMoves[0][0] == symbol)
                {
                    compSpots++;
                }
                else if (nextMoves[0][0] == player)
                {
                    playerSpots++;
                }
                if (nextMoves[1][0] == symbol)
                {
                    compSpots++;
                }
                else if (nextMoves[1][0] == player)
                {
                    playerSpots++;
                }
                if (nextMoves[2][0] == symbol)
                {
                    compSpots++;
                }
                else if (nextMoves[2][0] == player)
                {
                    playerSpots++;
                }

                nextMoves[i][j] += EvaluateMove(compSpots, playerSpots);

                compSpots = 0;
                playerSpots = 0;

                //Evaluating middle row
                if (nextMoves[0][1] == symbol)
                {
                    compSpots++;
                }
                else if (nextMoves[0][1] == player)
                {
                    playerSpots++;
                }
                if (nextMoves[1][1] == symbol)
                {
                    compSpots++;
                }
                else if (nextMoves[1][1] == player)
                {
                    playerSpots++;
                }
                if (nextMoves[2][1] == symbol)
                {
                    compSpots++;
                }
                else if (nextMoves[2][1] == player)
                {
                    playerSpots++;
                }

                nextMoves[i][j] += EvaluateMove(compSpots, playerSpots);

                compSpots = 0;
                playerSpots = 0;

                //Evaluating bottom row
                if (nextMoves[0][2] == symbol)
                {
                    compSpots++;
                }
                else if (nextMoves[0][2] == player)
                {
                    playerSpots++;
                }
                if (nextMoves[1][2] == symbol)
                {
                    compSpots++;
                }
                else if (nextMoves[1][2] == player)
                {
                    playerSpots++;
                }
                if (nextMoves[2][2] == symbol)
                {
                    compSpots++;
                }
                else if (nextMoves[2][2] == player)
                {
                    playerSpots++;
                }

                nextMoves[i][j] += EvaluateMove(compSpots, playerSpots);


                compSpots = 0;
                playerSpots = 0;

                //Evaluating left column
                if (nextMoves[0][0] == symbol)
                {
                    compSpots++;
                }
                else if (nextMoves[0][0] == player)
                {
                    playerSpots++;
                }
                if (nextMoves[0][1] == symbol)
                {
                    compSpots++;
                }
                else if (nextMoves[0][1] == player)
                {
                    playerSpots++;
                }
                if (nextMoves[0][2] == symbol)
                {
                    compSpots++;
                }
                else if (nextMoves[0][2] == player)
                {
                    playerSpots++;
                }

                nextMoves[i][j] += EvaluateMove(compSpots, playerSpots);

                compSpots = 0;
                playerSpots = 0;

                //Evaluating middle column
                if (nextMoves[1][0] == symbol)
                {
                    compSpots++;
                }
                else if (nextMoves[1][0] == player)
                {
                    playerSpots++;
                }
                if (nextMoves[1][1] == symbol)
                {
                    compSpots++;
                }
                else if (nextMoves[1][1] == player)
                {
                    playerSpots++;
                }
                if (nextMoves[1][2] == symbol)
                {
                    compSpots++;
                }
                else if (nextMoves[1][2] == player)
                {
                    playerSpots++;
                }

                nextMoves[i][j] += EvaluateMove(compSpots, playerSpots);

                compSpots = 0;
                playerSpots = 0;

                //Evaluating right column
                if (nextMoves[2][0] == symbol)
                {
                    compSpots++
                }
                else if (nextMoves[2][0] == player)
                {
                    playerSpots++;
                }
                if (nextMoves[2][1] == symbol)
                {
                    compSpots++;
                }
                else if (nextMoves[2][1] == player)
                {
                    playerSpots++;
                }
                if (nextMoves[2][2] == symbol)
                {
                    compSpots++;
                }
                else if (nextMoves[2][2] == player)
                {
                    playerSpots++;
                }

                nextMoves[i][j] += EvaluateMove(compSpots, playerSpots);

                compSpots = 0;
                playerSpots = 0;

                //Evaluating top to bottom diagonal
                if (nextMoves[0][0] == symbol)
                {
                    compSpots++;
                }
                else if (nextMoves[0][0] == player)
                {
                    playerSpots++;
                }
                if (nextMoves[1][1] == symbol)
                {
                    compSpots++;
                }
                else if (nextMoves[1][1] == player)
                {
                    playerSpots++;
                }
                if (nextMoves[2][2] == symbol)
                {
                    compSpots++;
                }
                else if (nextMoves[2][2] == player)
                {
                    playerSpots++;
                }

                nextMoves[i][j] += EvaluateMove(compSpots, playerSpots);

                compSpots = 0;
                playerSpots = 0;

                //Evaluating bottom to top diagonal
                if (nextMoves[2][0] == symbol)
                {
                    compSpots++;
                }
                else if (nextMoves[2][0] == player)
                {
                    playerSpots++;
                }
                if (nextMoves[1][1] == symbol)
                {
                    compSpots++;
                }
                else if (nextMoves[1][1] == player)
                {
                    playerSpots++;
                }
                if (nextMoves[0][2] == symbol)
                {
                    compSpots++;
                }
                else if (nextMoves[0][2] == player)
                {
                    playerSpots++;
                }

                nextMoves[i][j] += EvaluateMove(compSpots, playerSpots);

            }
            else
            {
                nextMoves[i][j].score = -1000;
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (move == null || nextMoves[i][j].score > move.score)
            {
                move = nextMoves[i][j]
            }
        }
    }

    return move;
}


int main()
{
    BoardState currentBoard;

    int row, col;
    char player;
    bool gameRunning = true;
    bool xTurn = true;
    bool valid = false;

    do
    {
        cout << "Are you playing X or O: ";
        cin >> player;
    } while (player != 'X' && player != 'O');

    //Putting out the board.
    cout << "\n    1   2   3\n"
        "1   " << currentBoard.board[0][0].mark << " | " << currentBoard.board[1][0].mark << " | " << currentBoard.board[2][0].mark << "\n    _________\n" <<
        "2   " << currentBoard.board[0][1].mark << " | " << currentBoard.board[1][1].mark << " | " << currentBoard.board[2][1].mark << "\n    _________\n" <<
        "3   " << currentBoard.board[0][2].mark << " | " << currentBoard.board[1][2].mark << " | " << currentBoard.board[2][2].mark << "\n";

    while (gameRunning)
    {
        while (!valid)
        {
            if (xTurn && player == 'X')
            {
                cout << "\nMake a move X\n" << "col: ";
                cin >> col;
                cout << "row: ";
                cin >> row;

                

                if (currentBoard.board[col - 1][row - 1].mark == ' ')
                {
                    currentBoard.board[col - 1][row - 1].ChangeMark('X');
                    xTurn = false;
                    valid = true;
                }
                else
                {
                    cout << "\n*****INVALID MOVE*****\n";
                }
            }
            else if(!xTurn && player == 'O')
            {

                cout << "\nMake a move O\n" << "col: ";
                cin >> col;
                cout << "row: ";
                cin >> row;

                
                if (currentBoard.board[col - 1][row - 1].mark == ' ')
                {
                    currentBoard.board[col - 1][row - 1].ChangeMark('O');
                    xTurn = true;
                    valid = true;
                }
                else
                {
                    cout << "\n*****INVALID MOVE*****\n";
                }

            }
            else
            {
                currentBoard.CopyBoard(CompMove(currentBoard, player));
            }
        }
        valid = false;
        //Putting out the board.
        cout << "\n    1   2   3\n"
            "1   " << currentBoard.board[0][0].mark << " | " << currentBoard.board[1][0].mark << " | " << currentBoard.board[2][0].mark << "\n    _________\n" <<
            "2   " << currentBoard.board[0][1].mark << " | " << currentBoard.board[1][1].mark << " | " << currentBoard.board[2][1].mark << "\n    _________\n" <<
            "3   " << currentBoard.board[0][2].mark << " | " << currentBoard.board[1][2].mark << " | " << currentBoard.board[2][2].mark << "\n";

        bool Owin = false;
        bool Xwin = false;
        //Checking if O won.
        if (currentBoard.board[0][0].mark == 'O' && currentBoard.board[0][1].mark == 'O' && currentBoard.board[0][2].mark == 'O')
        {
            Owin = true;
        }
        else if (currentBoard.board[1][0].mark == 'O' && currentBoard.board[1][1].mark == 'O' && currentBoard.board[1][2].mark == 'O')
        {
            Owin = true;
        }
        else if (currentBoard.board[2][0].mark == 'O' && currentBoard.board[2][1].mark == 'O' && currentBoard.board[2][2].mark == 'O')
        {
            Owin = true;
        }
        else if (currentBoard.board[0][0].mark == 'O' && currentBoard.board[1][1].mark == 'O' && currentBoard.board[1][2].mark == 'O')
        {
            Owin = true;
        }
        else if (currentBoard.board[2][0].mark == 'O' && currentBoard.board[1][1].mark == 'O' && currentBoard.board[0][2].mark == 'O')
        {
            Owin = true;
        }
        else if (currentBoard.board[0][0].mark == 'O' && currentBoard.board[1][0].mark == 'O' && currentBoard.board[2][0].mark == 'O')
        {
            Owin = true;
        }
        else if (currentBoard.board[0][1].mark == 'O' && currentBoard.board[1][1].mark == 'O' && currentBoard.board[2][1].mark == 'O')
        {
            Owin = true;
        }
        else if (currentBoard.board[0][2].mark == 'O' && currentBoard.board[1][2].mark == 'O' && currentBoard.board[2][2].mark == 'O')
        {
            Owin = true;
        }

        //Checking if X wins
        if (currentBoard.board[0][0].mark == 'X' && currentBoard.board[0][1].mark == 'X' && currentBoard.board[0][2].mark == 'X')
        {
            Xwin = true;
        }
        else if (currentBoard.board[1][0].mark == 'X' && currentBoard.board[1][1].mark == 'X' && currentBoard.board[1][2].mark == 'X')
        {
            Xwin = true;
        }
        else if (currentBoard.board[2][0].mark == 'X' && currentBoard.board[2][1].mark == 'X' && currentBoard.board[2][2].mark == 'X')
        {
            Xwin = true;
        }
        else if (currentBoard.board[0][0].mark == 'X' && currentBoard.board[1][1].mark == 'X' && currentBoard.board[1][2].mark == 'X')
        {
            Xwin = true;
        }
        else if (currentBoard.board[2][0].mark == 'X' && currentBoard.board[1][1].mark == 'X' && currentBoard.board[0][2].mark == 'X')
        {
            Xwin = true;
        }
        else if (currentBoard.board[0][0].mark == 'X' && currentBoard.board[1][0].mark == 'X' && currentBoard.board[2][0].mark == 'X')
        {
            Xwin = true;
        }
        else if (currentBoard.board[0][1].mark == 'X' && currentBoard.board[1][1].mark == 'X' && currentBoard.board[2][1].mark == 'X')
        {
            Xwin = true;
        }
        else if (currentBoard.board[0][2].mark == 'X' && currentBoard.board[1][2].mark == 'X' && currentBoard.board[2][2].mark == 'X')
        {
            Xwin = true;
        }

        if (Xwin == true)
        {
            cout << "\n\n THE X PLAYER WINS\n\n";
            gameRunning = false;
        }

        if (Owin == true)
        {
            cout << "\n\n THE O PLAYER WINS\n\n";
            gameRunning = false;
        }
    }
}



int EvaluateMove(int compSpots, int playerSpots)
{
    int score = 0;

    if (compSpots == 3)
    {
        score += 1000;
    }
    else if (compSpots == 2 && playerSpots == 1)
    {
        score += 0;
    }
    else if (compSpots == 1 && playerSpots == 2)
    {
        score += 100;
    }
    else if (compSpots == 1 && playerSpots == 1)
    {
        score += 1;
    }
    else if (compSpots == 1 && playerSpots == 0)
    {
        score += 3;
    }
    else if (compSpots == 2 && playerSpots == 0)
    {
        score += 5;
    }
    else if (compSpots == 0 && playerSpots == 1)
    {
        score -= 1;
    }
    else if (compSpots == 0 && playerSpots == 2)
    {
        score -= 100;
    }

    return score;
}
