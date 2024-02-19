#ifndef CONSOLEBOARDCREATOR_H
#define CONSOLEBOARDCREATOR_H

#include "board.h"
#include <iostream>
#include <array>
#include <cassert>
#include <string>

using namespace std;

class ConsoleBoardCreator
{
  Board *board;

public:
  ConsoleBoardCreator(Board *inputted_board)
  {
    board = inputted_board;
  }

  string formatted_board()
  {
    // This implementation is incomplete. Make sure you fill in the rest! It would also help to break this long string up using some private methods.
    return " " + board->get_mark(1) + " | " + board->get_mark(2) + " | " + board->get_mark(3) + " \n-----------\n   |   |   \n-----------\n   |   |   ";
  }
};

#endif
