#include "board.hpp"
#include "rules.hpp"

Rules::Rules(Board *inputted_board)
{
  board = inputted_board;
}

bool Rules::validate_input(int row, int col)
{
  return (row >= 0 && row < board->size() && col >=0 col < board -> size());
}

bool Rules::in_progress()
{
  for (int row = 0; row < board-> size(); row++)
  {
    for (int col = 0; col < board-> size(); col++)
    {
      if(three_in_a_row(row, col, 0,1)||three_in_a_row(row, col, 1,0)||
         three_in_a_row(row, col, 1,1)||three_in_a_row(row, col, 1,-1))
         {
            return false;
         }
    }
  }

  for (int row = 0; row < board->size(); ++row)
  {
    for (int col = 0; col < board->size(); ++col)
    {
      if (board->get_mark(row, col) == "_")
      {
        return true;
      }
    }
  }

  return false;

}

bool Rules::three_in_a_row(int row1, int col1, int row2, int col2)
{
  char mark = board->get_mark(row1, col1);
  if (mark == '_')
  {
    return false;
  }

  for (int i = 1; i < 3; ++i)
  {
    int row = row1 + i * row2;
    int col = col1 + i * col2;
    if (!validate_input(row, col) || board->get_mark(row, col) != mark)
    {
      return false;
    }
  }

  return true;
}
