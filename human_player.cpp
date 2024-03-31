#include "human_player.hpp"

HumanPlayer::HumanPlayer(Board *inputted_board, char symbol)
{
  this->board = inputted_board;
  this->symbol = symbol;
}

void HumanPlayer::move()
{
  int cell;
  bool valid_input = false;
  string user_input = "";

  while(!valid_input)
  {
    cout << "Which cell? " <<endl;
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
        cout << "Which cell? " <<endl;
        cin >> user_input;
    }

    valid_input = true;
  }

  board->make_move(cell, symbol);
}
