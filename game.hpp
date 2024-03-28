// #ifndef GAME_H
// #define GAME_H

#pragma once

#include "consoleBoardCreator.hpp"
#include "rules.hpp"
#include "board.hpp"
#include "player.hpp"

// #include <iostream>
// #include <array>
// #include <cassert>
// #include <string>

using namespace std;

class Game
{
private:
  Board *board;
  Rules *rules;
  ConsoleBoardCreator *creator;
  Player *player_one;
  Player *player_two;
  Player *current_player;
  void switch_player();

public:
  Game(Board *board_ptr, Rules *rules_ptr, 
       ConsoleBoardCreator *creator_ptr, 
       Player *player_one_ptr, Player *player_two_ptr);
//   {
//     board = board_ptr;
//     // rules = rules_ptr;
//     // creator = creator_ptr;
//   }

  void reset();
  void start();
/*//   {
//     string user_input = "";
//     char player_symbol = 'X';
//     int cell_choice;

//     while (rules->in_progress())
//     {
//       cout << creator->formatted_board() << endl;
//       cout << "Which cell?" << endl;
//       cin >> cell_choice;

//       if (!rules->validate_input(cell_choice))
//       {
//         cout << " Wrong cell, enter a different one: " << endl;
//         cin >> cell_choice;
//       }

//       board->make_move(cell_choice, player_symbol);

//       if (player_symbol == 'X')
//       {
//         player_symbol = 'O';
//       }

//       else
//       {
//         player_symbol = 'X';
//       }


//       if (rules-> winner()) 
//       {
//         cout << creator->formatted_board() << endl;
//         cout << "Player " << (player_symbol == 'O' ? 'X' : 'O') 
//              << " won." << endl;
//       } 
    
//       else if (rules->is_draw()) 
//      {
//         cout << creator->formatted_board() << endl;
//         cout << "It's a draw. No one wins." << endl;
//      }

//      if(!rules->in_progress())
//      {
//         break;
//      }
//     }
//   }*/
};

//#endif
