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
    return " " + board->get_mark(1) + " | " + board->get_mark(2) + 
           " | " + board->get_mark(3) + " \n-----------\n" + 
           " " + board->get_mark(4) + " | " + board->get_mark(5) + 
           " | " + board->get_mark(6) + " \n-----------\n" + 
           " " + board->get_mark(7) + " | " + board->get_mark(8) + 
           " | " + board->get_mark(9) + " \n-----------\n\n" ; 
  }
};

#endif
