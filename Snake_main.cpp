#include <iostream>
#include <SDL.h>
#include "Game.h"
using namespace std;

//important: argc and argv are needed in main for SDL to work, as it replaces main with SDL_main via define

int main(int argc, char* argv[])
{
	Game game;
	Game().Run();
	cout << "Game has terminated successfully, score: " << game.GetScore()
		<< ", size: " << game.GetSize() << endl;
	return 0;
}