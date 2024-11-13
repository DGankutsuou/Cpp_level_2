#include <iostream>
#include <iomanip> // std::setw
using namespace std;

int	main(void)
{
	cout << "|----------|---------------|-------|" << endl;
	cout << "| The Name |     About     |  age  |" << endl;
	cout << "|----------|---------------|-------|" << endl;
	cout << "|" << setw(10) << "Nameless" << "|" << setw(15) <<
	"Referee" << "|" << setw(7) << "19" << "|" << endl;
	return (0);
}
