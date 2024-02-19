#ifndef GAME_H
#define GAME_H

#include "board.h"
#include "consoleBoardCreator.h"
#include "rules.h"
#include <iostream>
#include <array>
#include <cassert>
#include <string>

class Game
{
private:
  Board *board;
  Rules *rules;
  ConsoleBoardCreator *creator;

public:
  Game(Board *board_ptr, Rules *rules_ptr, ConsoleBoardCreator *creator_ptr)
  {
    board = board_ptr;
    rules = rules_ptr;
    creator = creator_ptr;
  }

  void start()
  {
    string user_input = "";

    while (rules->in_progress())
    {
      cout << creator->formatted_board();
      cout << "Which cell?" << endl;
      cin >> user_input;
      board->make_move(stoi(user_input), 'X');
    }
  }
};

#endif
