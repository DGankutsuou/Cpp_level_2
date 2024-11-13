#include <iostream>
#include <vector>
using namespace std;

int	main(void)
{
	vector <int> v_numbers = {12, 23, 34, 45, 56};
	// Slower way by copying
	for (int number : v_numbers)
	{
		cout << number << " ";
	}
	cout << endl;
	// Faster way by reference
	for (int &number : v_numbers)
	{
		cout << number << " ";
	}
	cout << endl;
	return (0);
}
