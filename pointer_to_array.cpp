#include <iostream>
using namespace std;

int	main(void)
{
	int	arr[5] = {1, 2, 3, 4, 5};
	int	*p = arr;
	cout << arr << endl;
	cout << p << endl;
	p++;
	cout << *p << endl;
	cout << *arr << endl;
	p--;
	for (int i = 0; i < 5; i++)
	{
		cout << *(p + i) << endl;
	}
	p++;
	cout << p[3] << endl;
	cout << *(arr + 4) << endl;
	return (0);
}
