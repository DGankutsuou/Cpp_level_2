#include <iostream>
#include <vector>
using namespace std;

int	main(void)
{
	vector <int> marks = {100, 50, 60};

	cout << "mark 1:" << marks.at(0) << endl;
	cout << "mark 2:" << marks.at(1) << endl;
	cout << "mark 3:" << marks.at(2) << endl;
	cout << "mark 1:" << marks[0] << endl;
	cout << "mark 2:" << marks[1] << endl;
	cout << "mark 3:" << marks[2] << endl;
}
