#include <iostream>
using namespace std;

int	my_sum(int a, int b, int c = 0, int d = 0);

int	main(void)
{
	cout << my_sum(12, 10) << endl;
	cout << my_sum(12, 10, -2) << endl;
	cout << my_sum(12, 10, -2, 20) << endl;
}

int	my_sum(int a, int b, int c, int d)
{
	return (a + b + c + d);
}
