#include <iostream>
using namespace std;

int	main(void)
{
	int		a = 10;
	char	c = 'Z';
	void	*p;

	cout << &p << endl;
	p = &a;
	cout << p << endl;
	cout << *(static_cast<int*>(p)) << endl;
	p = &c;
	cout << p << endl;
	cout << *(static_cast<char*>(p)) << endl;
	cout << *(char*)p << endl;
	cout << &p << endl;
	return (0);
}
