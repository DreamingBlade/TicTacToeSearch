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
                this->board[i][j].ChangeMark(aBoard.board[i][j].mark);
            }
        }

        this->score = aBoard.score;
    }
    
};

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

BoardState CompMove(BoardState currentBoard, char player)
{
    char symbol;
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
            if (currentBoard.board[i][j].mark == ' ')
            {
                nextMoves.push_back(currentBoard);
                nextMoves.back().board[i][j].mark = symbol;

                int playerSpots = 0;
                int compSpots = 0;
                //Evaluating top row
                if (nextMoves.back().board[0][0].mark == symbol)
                {
                    compSpots++;
                }
                else if (nextMoves.back().board[0][0].mark == player)
                {
                    playerSpots++;
                }
                if (nextMoves.back().board[1][0].mark == symbol)
                {
                    compSpots++;
                }
                else if (nextMoves.back().board[1][0].mark == player)
                {
                    playerSpots++;
                }
                if (nextMoves.back().board[2][0].mark == symbol)
                {
                    compSpots++;
                }
                else if (nextMoves.back().board[2][0].mark == player)
                {
                    playerSpots++;
                }

                nextMoves.back().score += EvaluateMove(compSpots, playerSpots);

                compSpots = 0;
                playerSpots = 0;

                //Evaluating middle row
                if (nextMoves.back().board[0][1].mark == symbol)
                {
                    compSpots++;
                }
                else if (nextMoves.back().board[0][1].mark == player)
                {
                    playerSpots++;
                }
                if (nextMoves.back().board[1][1].mark == symbol)
                {
                    compSpots++;
                }
                else if (nextMoves.back().board[1][1].mark == player)
                {
                    playerSpots++;
                }
                if (nextMoves.back().board[2][1].mark == symbol)
                {
                    compSpots++;
                }
                else if (nextMoves.back().board[2][1].mark == player)
                {
                    playerSpots++;
                }

                nextMoves.back().score += EvaluateMove(compSpots, playerSpots);

                compSpots = 0;
                playerSpots = 0;

                //Evaluating bottom row
                if (nextMoves.back().board[0][2].mark == symbol)
                {
                    compSpots++;
                }
                else if (nextMoves.back().board[0][2].mark == player)
                {
                    playerSpots++;
                }
                if (nextMoves.back().board[1][2].mark == symbol)
                {
                    compSpots++;
                }
                else if (nextMoves.back().board[1][2].mark == player)
                {
                    playerSpots++;
                }
                if (nextMoves.back().board[2][2].mark == symbol)
                {
                    compSpots++;
                }
                else if (nextMoves.back().board[2][2].mark == player)
                {
                    playerSpots++;
                }

                nextMoves.back().score += EvaluateMove(compSpots, playerSpots);


                compSpots = 0;
                playerSpots = 0;

                //Evaluating left column
                if (nextMoves.back().board[0][0].mark == symbol)
                {
                    compSpots++;
                }
                else if (nextMoves.back().board[0][0].mark == player)
                {
                    playerSpots++;
                }
                if (nextMoves.back().board[0][1].mark == symbol)
                {
                    compSpots++;
                }
                else if (nextMoves.back().board[0][1].mark == player)
                {
                    playerSpots++;
                }
                if (nextMoves.back().board[0][2].mark == symbol)
                {
                    compSpots++;
                }
                else if (nextMoves.back().board[0][2].mark == player)
                {
                    playerSpots++;
                }

                nextMoves.back().score += EvaluateMove(compSpots, playerSpots);

                compSpots = 0;
                playerSpots = 0;

                //Evaluating middle column
                if (nextMoves.back().board[1][0].mark == symbol)
                {
                    compSpots++;
                }
                else if (nextMoves.back().board[1][0].mark == player)
                {
                    playerSpots++;
                }
                if (nextMoves.back().board[1][1].mark == symbol)
                {
                    compSpots++;
                }
                else if (nextMoves.back().board[1][1].mark == player)
                {
                    playerSpots++;
                }
                if (nextMoves.back().board[1][2].mark == symbol)
                {
                    compSpots++;
                }
                else if (nextMoves.back().board[1][2].mark == player)
                {
                    playerSpots++;
                }

                nextMoves.back().score += EvaluateMove(compSpots, playerSpots);

                compSpots = 0;
                playerSpots = 0;

                //Evaluating right column
                if (nextMoves.back().board[2][0].mark == symbol)
                {
                    compSpots++;
                }
                else if (nextMoves.back().board[2][0].mark == player)
                {
                    playerSpots++;
                }
                if (nextMoves.back().board[2][1].mark == symbol)
                {
                    compSpots++;
                }
                else if (nextMoves.back().board[2][1].mark == player)
                {
                    playerSpots++;
                }
                if (nextMoves.back().board[2][2].mark == symbol)
                {
                    compSpots++;
                }
                else if (nextMoves.back().board[2][2].mark == player)
                {
                    playerSpots++;
                }

                nextMoves.back().score += EvaluateMove(compSpots, playerSpots);

                compSpots = 0;
                playerSpots = 0;

                //Evaluating top to bottom diagonal
                if (nextMoves.back().board[0][0].mark == symbol)
                {
                    compSpots++;
                }
                else if (nextMoves.back().board[0][0].mark == player)
                {
                    playerSpots++;
                }
                if (nextMoves.back().board[1][1].mark == symbol)
                {
                    compSpots++;
                }
                else if (nextMoves.back().board[1][1].mark == player)
                {
                    playerSpots++;
                }
                if (nextMoves.back().board[2][2].mark == symbol)
                {
                    compSpots++;
                }
                else if (nextMoves.back().board[2][2].mark == player)
                {
                    playerSpots++;
                }

                nextMoves.back().score += EvaluateMove(compSpots, playerSpots);

                compSpots = 0;
                playerSpots = 0;

                //Evaluating bottom to top diagonal
                if (nextMoves.back().board[2][0].mark == symbol)
                {
                    compSpots++;
                }
                else if (nextMoves.back().board[2][0].mark == player)
                {
                    playerSpots++;
                }
                if (nextMoves.back().board[1][1].mark == symbol)
                {
                    compSpots++;
                }
                else if (nextMoves.back().board[1][1].mark == player)
                {
                    playerSpots++;
                }
                if (nextMoves.back().board[0][2].mark == symbol)
                {
                    compSpots++;
                }
                else if (nextMoves.back().board[0][2].mark == player)
                {
                    playerSpots++;
                }

                nextMoves.back().score += EvaluateMove(compSpots, playerSpots);

            }
        }
    }

    BoardState move;

    move.CopyBoard(nextMoves.front());

    for (int i = 0; i < nextMoves.size(); i++)
    {
        if (nextMoves.back().score > move.score)
        {
            move.CopyBoard(nextMoves.at(i));
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
                if (xTurn)
                {
                    cout << "\nMake a move X\n";
                    xTurn = false;
                }
                else
                {
                    cout << "\nMake a move O\n";
                    xTurn = true;
                }
                cout << "\n    1   2   3\n"
                    "1   " << currentBoard.board[0][0].mark << " | " << currentBoard.board[1][0].mark << " | " << currentBoard.board[2][0].mark << "\n    _________\n" <<
                    "2   " << currentBoard.board[0][1].mark << " | " << currentBoard.board[1][1].mark << " | " << currentBoard.board[2][1].mark << "\n    _________\n" <<
                    "3   " << currentBoard.board[0][2].mark << " | " << currentBoard.board[1][2].mark << " | " << currentBoard.board[2][2].mark << "\n";
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
            cout << "\n\nTHE X PLAYER WINS\n\n";
            gameRunning = false;
            return 0;
        }

        if (Owin == true)
        {
            cout << "\n\nTHE O PLAYER WINS\n\n";
            gameRunning = false;
            return 0;
        }

        bool draw = true;

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (currentBoard.board[i][j].mark == ' ')
                {
                    draw = false;
                }
            }
        }

        if (draw)
        {
            cout << "\n\nDRAW \n\n";
            gameRunning = false;
            return 0;
        }
    }

    return 0;
}

