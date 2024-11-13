#include <iostream>
#include <limits>
using namespace std;

int	read_number(string message)
{
	int	number;

	cout << message;
	cin >> number;
	while (cin.fail())
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "you did not enter a number, please enter a number: ";
		cin >> number;
	}
	return (number);
}

int	main(void)
{
	cout << read_number("Enter a number: ");
	return (0);
}
