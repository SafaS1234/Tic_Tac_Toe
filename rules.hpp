#pragma once
#include "board.hpp"

class Rules
{
private:
  Board *board;
  bool three_in_a_row(int row1, int col1, int row2, int col2);

public:
  Rules(Board *inputted_board);
  bool validate_input(int row, int col);
  bool in_progress();
};
