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

wstring Player::GetCharacterStats() {

		wstring ret;

		ret = L"Imiê: " + name + " Klasa: " + job + "\nTwoje zdrowie: " + to_string(achealth) + "/" + to_string(mhealth);
		ret += L"\nTwoje obrona wynosi: " + to_string(defense) + " Twój atak wynosi: " + to_string(damage);
		return ret;
}

string Player::SetName(wstring Nam)
{
	string = "Podaj imiê swojego herosa";
	name = Nam;
	return 0;
}