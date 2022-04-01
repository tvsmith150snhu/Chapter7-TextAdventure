/*
Troy Smith
IT-312-J4007
2022.04.03
5-2 Final Project Building Block Three: Fill in the Blank (Making a Player Class)
*/

#pragma once

#include "Player.h"
#include "PlayerOptions.h"

class Game
{
private:
	Player m_player;

	void WelcomePlayer();
	void GivePlayerOptions() const;
	void GetPlayerInput(std::string& playerInput) const;
	PlayerOptions EvaluateInput(std::string& playerInput) const;
public:

	void RunGame();
};