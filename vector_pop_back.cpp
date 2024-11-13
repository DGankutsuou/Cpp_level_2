#include <iostream>
#include <vector>
using namespace std;

int	main(void)
{
	vector <int> v_numbers;
	v_numbers.push_back(10);
	v_numbers.push_back(20);
	v_numbers.push_back(30);
	v_numbers.push_back(40);
	v_numbers.push_back(50);
	v_numbers.pop_back(); // T'will remove the last element "50"
	v_numbers.pop_back(); // T'will remove the last element "40"
	if (v_numbers.empty())
		cout << "The vector is empty" << endl;
	else
		cout << "The vector is not empty" << endl;
	cout << "Vector size: " << v_numbers.size() << endl; // the number of the elements
	cout << "Vector elements: " << endl;
	for (int &number : v_numbers)
	{
		cout << number << endl;
	}
	v_numbers.clear();
	if (v_numbers.empty())
		cout << "The vector is empty" << endl;
	else
		cout << "The vector is not empty" << endl;
	return (0);
}
