#include <iostream>
#include <cctype>
using namespace std;

int	main(void)
{
	char	x;
	char	y;

	x = toupper('a'); // t'will return 65
	y = tolower('A'); // t'will return 97
	cout << x << "\n" << y << endl;
	cout << isalpha('A') << "\n" << isalpha('a') << endl; // t'will return a positive number
	cout << isupper('a') << endl; // t'will return 0
	cout << islower('A') << endl; // t'will return 0
	cout << isspace(' ') << endl; // true to all white spaces \n \t \v \f \r
	cout << isdigit('7') << endl; // true for all digit
	cout << ispunct('%') << endl; // punctuation chars are !"#$%&'()*+,-./:;<=>?@[\]^_`{|}~
	cout << isprint(126) << endl; // is printable chars from 32 to 126 in decimal
	return (0);
}
