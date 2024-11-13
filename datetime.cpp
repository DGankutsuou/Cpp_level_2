#pragma warning(disable:4996)
#include <iostream>
#include <ctime>
using namespace std;

int	main(void)
{
	time_t	t = time(0); // get current time
	char	*dt = ctime(&t); // change the time to string

	cout << "The local date and time is: " << dt << endl;

	tm *gmtm = gmtime(&t); // convert now tm struct to UTC datetime
	dt = asctime(gmtm); // convert struct to string
	cout << "The universal date and time is: " << dt << endl;
	return (0);
}
