#include <iostream>

using namespace std;

void display_board(char board[])
{
    int index = 0;
    for (int i = 0; i < 3; i++)
    {
        cout << '|';
        for (int j = 0; j < 3; j++)
        {
            cout << board[index] << "|";
            index++;
        }
        cout << "\n+-+-+-+\n";
    }
}

char change_player(char current_player)
{
    return current_player == 'X' ? 'O' : 'X';
}

bool is_win(char board[], char player)
{
    int win_case[][3] = {
        {0, 1, 2},
        {3, 4, 5},
        {6, 7, 8},
        {0, 3, 6},
        {1, 4, 7},
        {2, 5, 8},
        {0, 4, 8},
        {2, 4, 6}};
    for (int i = 0; i < 8; i++)
    {

        if (board[win_case[i][0]] == player &&
            board[win_case[i][1]] == player &&
            board[win_case[i][2]] == player)
        {
            return true;
        }
    }
    return false;
}

bool is_draw(char board[8])
{
    for (int i = 0; i < 9; i++)
    {
        // !if any any position is not occupied 
        if (board[i] != 'X' && board[i] != 'O')
        {
            return false;
        }
    }
    // !we reach where only if all position are occupied 
    return true;
}

int main()
{
    char user = 'X';
    char board[] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
    display_board(board);
    int input;
    while (true)
    {
        cout << user << ": Player\n";
        cout << "Enter your choice:";
        cin >> input;
        if (input < 1 || input > 9 || board[input - 1] == 'X' || board[input - 1] == 'O')
        {
            cout << "Invalid move! Try again.\n";
            continue;
        }

        board[input - 1] = user;

        if (is_win(board, user))
        {
            cout << user << ": Win\n";
            break;
        }

        if(is_draw(board)){
            cout<< "Game Draw: No one Win";
            break;
        }

        display_board(board);

        user = change_player(user);
    }

    return 0;
}