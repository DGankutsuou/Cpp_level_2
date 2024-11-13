#include <iostream>
using namespace std;

int	main(void)
{
	int	a;
	int	&b = a;

	a = 20;
	b++;
	cout << &a << "\n" << &b << endl;
	cout << a << "\n" << b << endl;
	return (0);
}
