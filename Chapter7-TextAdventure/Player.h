/*
Troy Smith
IT-312-J4007
2022.04.03
5-2 Final Project Building Block Three: Fill in the Blank (Making a Player Class)
*/

#pragma once

#include <string>

class Player
{
private:
	std::string m_name;

public:
	Player()
	{
	}

	void SetName(const std::string& name)
	{
		m_name = name;
	}

	const std::string& GetName() const
	{
		return m_name;
	}
};