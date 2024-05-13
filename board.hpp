#pragma once
#include <iostream>
#include <array>
#include <cassert>
#include <string>

using namespace std;

class Board
{
private:
  //array<string, 9> board;
  vector<string> board;
  int size;

public:
  Board(int size);
  void create_empty_board();
  void make_move(int cell, char mark);
  string get_mark(int cell);
};
