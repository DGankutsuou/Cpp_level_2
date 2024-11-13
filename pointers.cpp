#include <iostream>
using namespace std;

int	main(void)
{
	int	a;
	int	b;
	int	*p;

	p = &a;
	*p = 10; // Dereferancing the pointer
	cout << &a << "\n" << p << endl;
	cout << a << "\n" << *p << endl;
	p = &b;
	b = 20;
	cout << &b << "\n" << p << endl;
	cout << b << "\n" << *p << endl;
	return (0);
}
