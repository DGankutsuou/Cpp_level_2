#include <iostream>
using namespace std;

int	main(void)
{
	float	*darr;
	int		number;

	cout << "How many student dost Thou have?\n-> ";
	cin >> number;
	darr = new float[number];
	for (int i = 0; i < number; i++)
	{
		cout << "Student " << i + 1 << ": ";
		cin >> *(darr + i);
	}
	cout << endl;
	for (int i = 0; i < number; i++)
	{
		cout << "Student " << i + 1 << ": ";
		cout << *(darr + i) << endl;
	}
	delete []darr;
	return (0);
}
