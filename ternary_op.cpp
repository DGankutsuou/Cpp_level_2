// Short hand if statement
#include <iostream>
using namespace std;

int	main(void)
{
	int	age = 17;
	int	n1 = (age >= 18) ? 1 : -1;
	int	n2 = -5;
	int	n3 = 0;
	(n1 >= 0) ? cout << "n1 is positive" << endl : cout << "n1 is negative" << endl;
	(n2 < 0) ? cout << "n2 is negative" << endl : cout << "n2 is positive" << endl;
	(n3 == 0) ? cout << "n3 = 0" << endl : (n3 > 0) ? cout << "n3 is positive" << endl : cout << "n3 is negative" << endl;
}
