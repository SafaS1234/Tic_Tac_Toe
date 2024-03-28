#include "game.hpp"
#include "human_player.hpp"
#include "first_spot_player.hpp"
#include "player.hpp"
// #include "consoleBoardCreator.hpp"
// #include "rules.hpp"
// #include "board.hpp"
// #include <iostream>
// #include <array>
// #include <cassert>
// #include <string>

// 2. Play again menu
// 3. Main menu

using namespace std;

int main()
{
  Board board;
  ConsoleBoardCreator creator = ConsoleBoardCreator(&board);
  Rules rules = Rules(&board);

  FirstSpotPlayer player_one = FirstSpotPlayer(&board, 'X');
  FirstSpotPlayer player_two = FirstSpotPlayer(&board, 'O');

//Board *board_ptr = &board;
//   ConsoleBoardCreator creator = ConsoleBoardCreator(board_ptr);
//   ConsoleBoardCreator *creator_ptr = &creator;
//   Rules rules = Rules(board_ptr);
//   Rules *rules_ptr = &rules;

  Game game = Game(&board, &rules, &creator, &player_one, &player_two);
  game.start();

  return 0;
}
