/*
Troy Smith
IT-312-J4007
2022.04.03
5-2 Final Project Building Block Three: Fill in the Blank (Making a Player Class)
*/

#include "GameLoop.h"
#include <iostream>

using namespace std;

// Welcome the player and get their name
void Game::WelcomePlayer()
{
	cout << "Welcome to Text Adventure!" << endl << endl;
	cout << "What is your name? (First name only please!)" << endl << endl;

	string name;
	cin >> name;
	m_player.SetName(name);

	cout << endl << "Hello " << m_player.GetName() << endl;
}

// Provide the options to the player
void Game::GivePlayerOptions() const
{
	cout << "What would you like to do? (Enter a corresponding number)" << endl << endl;
	cout << "1: Quit" << endl << endl;
	cout << "2: Pause the game" << endl << endl;
	cout << "3: Manage Settings" << endl << endl;
}

// Store the player response
void Game::GetPlayerInput(string& playerInput) const
{
	cin >> playerInput;
}

// Manage inputs from the player including incorrect responses
PlayerOptions Game::EvaluateInput(string& playerInput) const
{
	PlayerOptions chosenOption = PlayerOptions::None;

	if (playerInput.compare("1") == 0)
	{
		cout << "You have chosen to Quit!" << endl << endl;
		chosenOption = PlayerOptions::Quit;
	}
		//Adding the three options above to display to the user
		else if (playerInput.compare("2") == 0) {
			cout << "You have chosen to Pause the game." << endl << endl;
		}
		else if (playerInput.compare("3") == 0) {
			cout << "You have chosen to navigate to Settings." << endl << endl;
		}
	
	//  Manage incorrect responses here
	else
	{
		cout << "I do not recognise that option, try again!" << endl << endl;
	}

	return chosenOption;
}

void Game::RunGame()
{
	WelcomePlayer();

	bool shouldEnd = false;
	while (shouldEnd == false)
	{
		GivePlayerOptions();

		string playerInput;
		GetPlayerInput(playerInput);

		shouldEnd = EvaluateInput(playerInput) == PlayerOptions::Quit;
	}
}