#include <iostream>
using namespace std;

int	main(void)
{
	int		*p;
	int		i;
	char	c;

	c = 'A';
	cout << p << endl;
	cout << p + 1 << endl;
	cout << (void *)&c << endl;
	cout << (int *)&c << endl; // cout can't print a char* you need to cast it\
							(better to void) becouse it tries to print it as a string
	// printf ("%s\n", &c); // like what is happenning here
	printf ("%p\n", &c);
	cout << &i << endl;
	cout << sizeof(char *) << endl;
	cout << sizeof(int *) << endl;
	cout << sizeof(double *) << endl;
	return (0);
}
