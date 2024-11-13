#include <iostream>
#include <vector>
using namespace std;

int	main(void)
{
	vector <int> nums = {10, 20, 30, 40, 50};
	vector <int>::iterator iter;

	for (iter = nums.begin(); iter != nums.end(); iter++)
	{
		cout << *iter << " "; // begin() points on the first
	}
	cout << endl;
	cout << *(nums.end() - 1); // end() points on one past the last
	cout << endl;
	return (0);
}
