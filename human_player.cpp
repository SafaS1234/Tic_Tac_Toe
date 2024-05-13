#include "human_player.hpp"

HumanPlayer::HumanPlayer(Board *inputted_board, char symbol)
{
  this->board = inputted_board;
  this->symbol = symbol;
}

/*void HumanPlayer::move()
{
  int cell, row, col;
  bool valid_input = false;
  string user_input = "";

  while(!valid_input)
  {
    cout << "Which cell? (row and column)" <<endl;
    cin >> user_input;

    cell = stoi(user_input);

    if(cell < 1|| cell > 9)
    {
        cout << "Invalid. Enter a number between 1-9." << endl;
        cout << "Which cell? " <<endl;
        cin >> user_input;
    }

    if (board-> get_mark(cell) != "_")
    {
        cout << "Invalid. Pick an empty cell." <<endl;
        continue;
        //cout << "Which cell? " <<endl;
        //cin >> user_input;
    }

    valid_input = true;
  }

  board->make_move(cell, symbol);
}*/


void HumanPlayer::move()
{
    int row, col;
    string user_input;
    bool valid_input = false;

    while (!valid_input)
    {
        cout << "Which cell? (row and column, ex: 1 2): ";
        cin >> user_input;

        size_t space_pos = user_input.find(' ');

        if (space_pos != string::npos && space_pos != 0 && space_pos != user_input.length() - 1)
        {
            string row_str = user_input.substr(0, space_pos);
            string col_str = user_input.substr(space_pos + 1);

            bool row_is_valid = true, col_is_valid = true;
            for (char c : row_str)
            {
                if (!isdigit(c))
                {
                    row_is_valid = false;
                    break;
                }
            }
            for (char c : col_str)
            {
                if (!isdigit(c))
                {
                    col_is_valid = false;
                    break;
                }
            }

            if (row_is_valid && col_is_valid)
            {
                row = stoi(row_str);
                col = stoi(col_str);

                row--; col--;

                if (row >= 0 && row < board->size() && col >= 0 && col < board->size())
                {
                    if (board->get_mark(row, col) == "_")
                    {
                        valid_input = true;
                    }
                    else
                    {
                        cout << "Invalid input. Please choose an empty cell." << endl;
                    }
                }
                else
                {
                    cout << "Invalid input. " << endl;
                }
            }
            else
            {
                cout << "Invalid input. Please enter row and column numbers." << endl;
            }
        }
        else
        {
            cout << "Invalid input. Please enter row and column numbers separated by a space." << endl;
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    board->make_move(row, col, symbol);
}
