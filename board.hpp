//#ifndef BOARD_H
//#define BOARD_H

#pragma once
#include <iostream>
#include <array>
#include <cassert>
#include <string>

using namespace std;

class Board
{
  private:
    array<string, 9> board;

public:
  Board();
//   {
//     for (int i = 0; i < 9; i++)
//     {
//       board[i] = '_';
//     }
//   }

  void make_move(int cell, char mark);
//   {
//     board[cell - 1] = mark;
//   }

  string get_mark(int cell);
//   {
//     return board[cell - 1];
//   }
};

//#endif
