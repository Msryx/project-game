#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>

using namespace std;
using namespace sf;

class Player {
private: 
	wstring name, job;
	int mhealth, achealth, damage, defense;
public:
	wstring GetCharacterStats();
	string SetName(wstring Nam);
};

class MainFunc{
	struct Level
	{
		string name;
		string description;

	} level;

};

wstring Player::GetCharacterStats() {

		wstring ret;

		ret = L"Imi�: " + name + " Klasa: " + job + "\nTwoje zdrowie: " + to_string(achealth) + "/" + to_string(mhealth);
		ret += L"\nTwoje obrona wynosi: " + to_string(defense) + " Tw�j atak wynosi: " + to_string(damage);
		return ret;
}

string Player::SetName(wstring Nam)
{
	string ret = "Podaj imi� swojego herosa:\n";
	name = Nam;
	return ret;
}