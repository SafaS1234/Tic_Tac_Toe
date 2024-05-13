#include "game.hpp"
#include "human_player.hpp"
#include "first_spot_player.hpp"
#include "player.hpp"

using namespace std;

int main()
{
  Board board;
  ConsoleBoardCreator creator = ConsoleBoardCreator(&board);
  Rules rules = Rules(&board);
  Player *player_one;
  Player *player_two;
  HumanPlayer human_player_one = HumanPlayer(&board, 'X');
  HumanPlayer human_player_two = HumanPlayer(&board, 'O');
  FirstSpotPlayer comp_player_two = FirstSpotPlayer(&board, 'O');
  int game_choice;
  int board_size;

  cout << "Welcome to Tic-Tac-Toe!\n" << endl;

  cout << "Please choose a game mode:" << endl;
  cout << "(1) Human vs. human" << endl;
  cout << "(2) Human vs. computer\n" << endl;
  cin >> game_choice;

  while(game_choice != 1 && game_choice != 2)
  {
    cout << "Invalid. Pick 1 or 2."<<endl;
    cout << "Please choose a game mode:" << endl;
    cout << "(1) Human vs. human" << endl;
    cout << "(2) Human vs. computer\n" << endl;

    cin >> game_choice;
  }

  if(game_choice == 1)
  {
    player_one = &human_player_one;
    player_two = &human_player_two;
  }

  else
  {
    player_one = &human_player_one;
    player_two = &comp_player_two ;
  }

  cout << "Please choose a board size:" << endl;
  cout << "(1) 3x3" << endl;
  cout << "(2) 4x4\n" << endl;
  cin >> board_size;
  
  while (board_size != 3 && board_size != 4)
  {
    cout << "Invalid choice. Please choose 3 or 4." << endl;
    cin >> board_size;
  }
  
  Board board(board_size);
  
  Game game = Game(&board, &rules, &creator, player_one, player_two);
  game.start();

  return 0;
}



