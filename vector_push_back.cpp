#include "inputslib.h"
#include <iostream>
#include <vector>
using namespace std;

void	read_v_numbers(vector <int> &v_numbers)
{
	string	add_number = "N";
	do
	{
		v_numbers.push_back(input::read_number("Enter a number: "));
		cout << "Dost Thou desire to add another number (Y/N): ";
		cin >> add_number;
	} while (add_number == "Y" || add_number == "y");
}

void	print_v_numbers(vector <int> &v_numbers)
{
	cout << "\nThe v_numbers are: ";
	for (int &number : v_numbers)
	{
		cout << number << " ";
	}
	cout << endl;
}

int	main(void)
{
	vector <int> v_numbers;

	read_v_numbers(v_numbers);
	print_v_numbers(v_numbers);
	return (0);
}
