#include <iostream>
using namespace std;

// function declaration
void	add(int n1, int n2);

int	main(void)
{
	add(10, 20);
	return (0);
}

// function defination
void	add(int n1, int n2)
{
	cout << n1 + n2 << endl;
}
