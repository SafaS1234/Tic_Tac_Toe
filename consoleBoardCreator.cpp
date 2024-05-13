#include "consoleBoardCreator.hpp"

ConsoleBoardCreator::ConsoleBoardCreator(Board *inputted_board)
{
  board = inputted_board;
}

string ConsoleBoardCreator::formatted_board()
{
  // return " " + board->get_mark(1) + " | " + board->get_mark(2) + " | " + board->get_mark(3) + " \n-----------\n " + board->get_mark(4) + " | " + board->get_mark(5) + " | " + board->get_mark(6) + " \n-----------\n " + board->get_mark(7) + " | " + board->get_mark(8) + " | " + board->get_mark(9);
  for (int row = 0; row < size; row++)
  {
    for (int col = 0; col < size; col++)
    {
      formatted_board += board ->get_mark(row,col);
      formatted_board += " ";
    }

    formatted_board += "\n";
  }
  return formatted_board;
}
