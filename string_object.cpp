#include <iostream>
using namespace std;

int	main(void)
{
	string	str = "Ohio! I am Ayman, I am a football referee.";

	// return the length of the string
	cout << str.length() << endl;
	// return the char at position ()
	cout << str.at(4) << endl;
	// add string to string
	str.append(" @aabouriz.");
	cout << str << endl;
	// insert string at position
	str.insert(16, " Abourizq");
	cout << str << endl;
	// return all ( ,---) from position (---, );
	cout << str.substr(6, 19) << endl;
	// add char at the last
	str.push_back('?');
	cout << str << endl;
	// delete last char
	str.pop_back();
	cout << str << endl;
	// find word and return its position
	cout << str.find("referee") << endl;
	cout << str.find("Boya 3omar") << endl;
	// no position return a long number
	if (str.find("Boya 3omar") == str.npos)
		cout << "Boya 3omar not found" << endl;
	// clear the string
	str.clear();
	if (!str[0])
		cout << "The string is clear." << endl;
	return (0);
}
