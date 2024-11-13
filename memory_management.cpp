#include <iostream>
using namespace std;

int	main(void)
{
	int	*ptrx;
	int	*ptry;

	ptrx = new int;
	ptry = new int;
	*ptrx = 10;
	*ptry = 48;
	cout << ptrx << endl;
	cout << *ptrx << endl;
	cout << ptry << endl;
	cout << *ptry << endl;
	delete ptrx;
	delete ptry;
	cout << ptrx << endl;
	cout << ptry << endl;
	// now there is no value in them but they still exist
	return (0);
}
