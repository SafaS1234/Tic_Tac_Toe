#ifndef RULES_H
#define RULES_H

#include "board.h"
#include <iostream>
#include <array>
#include <cassert>
#include <string>

using namespace std;

class Rules
{
  Board *board;

public:
  Rules(Board *inputted_board)
  {
    board = inputted_board;
  }

  bool validate_input(int input)
  {
    string current_mark = board->get_mark(input);
    if (input < 1 || input > 9 || current_mark != "_")
    {
      return false;
    }

    return true;
  }

  bool winner()
  {
    for (int i = 0; i < 3; i++)
    {
        if (check_row(i) != "_" || check_column(i) != "_")
        {
            return true;
        }
    }

    return check_diagonals() != "_";
  }

  string check_row(int row)
  {
    int start = row * 3 +1;

    if (board-> get_mark(start) == board-> get_mark (start +1) && 
        board-> get_mark(start+1) == board-> get_mark(start+2) &&
        board-> get_mark(start) != "_")
        {
            return board-> get_mark(start);
        }

        return "_";
  }
  
  string check_column(int column)
  {
    if (board->get_mark(column + 1) == board->get_mark(column + 4) && 
        board->get_mark(column + 4) == board->get_mark(column + 7) && 
        board->get_mark(column + 1) != "_") 
        {
            return board->get_mark(column + 1);
        }
  
    return "_";
   }

  string check_diagonals()
  {
    if ((board->get_mark(1) == board->get_mark(5) && 
         board->get_mark(5) == board->get_mark(9) && 
         board->get_mark(1) != "_") || 
        (board->get_mark(3) == board->get_mark(5) && 
         board->get_mark(5) == board->get_mark(7) && 
         board->get_mark(3) != "_")) 
        {
            return board->get_mark(5);
        }
    
    return "_";

   }

  bool is_draw()
  {
    for (int i = 1; i <= 9; i++) 
    {
        if (board->get_mark(i) == "_") 
        {
            return false;
        }
    }

    return !winner();
   }


  bool in_progress()
  {
    return !winner() && !is_draw();
  }

  string three_in_a_row_in_the_top_row()
  {
    if (board->get_mark(1) == board->get_mark(2) && board->get_mark(2) == board->get_mark(3) && board->get_mark(1) != "_")
    {
      return board->get_mark(1);
    }
    else
    {
      return "_";
    }
  }
};

#endif
