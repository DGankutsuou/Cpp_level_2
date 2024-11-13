#include <iostream>
#include <vector>
using namespace std;

int	main(void)
{
	vector <char> alpha = {'A', 'B', 'C', 'D'};

	for (const char &c : alpha)
	{
		cout << c << " ";
	}
	cout << endl;
	for (char &c : alpha)
	{
		c = 'E';
		cout << c << " ";
	}
	cout << endl;
	alpha[0] = 'F';
	alpha.at(1) = 'G';
	for (const char &c : alpha)
	{
		cout << c << " ";
	}
	cout << endl;
	return (0);
}
