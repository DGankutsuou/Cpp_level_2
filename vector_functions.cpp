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
	if (!v_numbers.empty())
	{
		cout << "The vector first element: " << v_numbers.front() << endl;
		cout << "The vector last element : " << v_numbers.back() << endl;
	}
	cout << "Vector size    : " << v_numbers.size() << endl; // the number of the elements
	cout << "Vector capacity: " << v_numbers.capacity() << endl;
	v_numbers.push_back(10);
	v_numbers.push_back(20);
	v_numbers.push_back(30);
	v_numbers.push_back(40);
	v_numbers.push_back(50);
	cout << "Vector size    : " << v_numbers.size() << endl;
	v_numbers.clear();
	if (v_numbers.empty())
		cout << "The vector is empty" << endl;
	else
		cout << "The vector is not empty" << endl;
	cout << "Vector size    : " << v_numbers.size() << endl;
	cout << "Vector capacity: " << v_numbers.capacity() << endl;
	return (0);
}
