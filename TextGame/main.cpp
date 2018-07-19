#include <C:\#Game Development\Projects\TextGame\TextGame\GameEngine.h>

using namespace sf;
using namespace std;

int main()
{
	Player player;
	sf::RenderWindow window(sf::VideoMode(1024, 768), "SFML works!");
	sf::Font font;
	if (!font.loadFromFile("GeorgiaRegular.ttf")) {
		std::cout << "Error - handling text";
	}

	sf::Text Text, Text2;
	Text.setFont(font);
	Text.setString("Hello");
	Text.setCharacterSize(20);
	string file, x;
	while (window.isOpen())
	{

		sf::Event event;
		while (window.pollEvent(event))
		{
			
			switch (event.type) {
			case sf::Event::Closed: {
				window.close(); }
			//Obs³uga tekstu
			case Event::EventType::KeyPressed:
				switch (event.key.code) {
					case Keyboard::A: {
						file = "test.txt";
						ifstream read(file);
						getline(read, x);
						Text.setString(x);
						cout << "A is pressed "  << endl;
						break;
						}
					case Keyboard::E: {
						cout << "That shit happend" << endl;
						wstring PlayerStatsString;
						PlayerStatsString = player.GetCharacterStats();
						Text.setString(PlayerStatsString);
						break;
					}
			
			} 
			}
			window.clear();
			window.draw(Text);
			window.display();

		}
	}
	return 0;
}