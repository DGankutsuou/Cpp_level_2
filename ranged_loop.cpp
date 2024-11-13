// for (range declaration : range expression)
#include <iostream>
using namespace std;

int	main(void)
{
	int	numbers[5] = {1, 2, 3, 4, 9};
	char	str[5] = "ABCD";

	for (int n : numbers)
	{
		cout << n << endl;
	}
	for (char c : str)
	{
		cout << c;
	}
	cout << endl;
	for (string name : {"Ayman", "Hicham", "Bilal", "Salah"})
	{
		cout << name << endl;
	}
}
