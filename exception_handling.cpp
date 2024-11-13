#include <iostream>
#include <unistd.h>
#include <vector>
using namespace std;

int	main(void)
{
	vector <int> numbers = {1, 2, 3};

	// cout << numbers.at(3) << endl;
	// the exception will let the code be to compiled
	// but after running the program t'will not work
	try
	{
		cout << numbers.at(2) << endl;
	}
	catch(const std::exception& e)
	{
		write (1, "Out of bound\n", 14);
	}
	try
	{
		cout << numbers.at(3) << endl;
	}
	catch(const std::exception& e)
	{
		write (1, "Out of bound\n", 14);
	}

	return (0);
}
