#include <iostream>
#include <array>
#include <vector>
#include <cassert>
#include <string>
#include "board.hpp"

using namespace std;

Board::Board(int size)
{
  this->size = size;
  board.resize(size * size, '_');
  this->create_empty_board();
}

void Board::create_empty_board()
{
  for (int i = 0; i < 9; i++)
  {
    board[i] = '_';
  }
}

void Board::make_move(int row, int col, char mark)
{
  board[row*size +col] = mark;
}

string Board::get_mark(int row, int col)
{
  return board[row*size +col];
}
