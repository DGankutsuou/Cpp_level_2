#pragma warning(disable:4996)
#include <iostream>
#include <ctime>
using namespace std;

int	main(void)
{
	time_t	t = time(0); // get current time
	tm	*now = localtime(&t); // change the time to string

	cout << "The year:" << now->tm_year + 1900 << endl;
	cout << "The month:" << now->tm_mon + 1 << endl;
	cout << "The day:" << now->tm_mday << endl;
	cout << "The hour:" << now->tm_hour << endl;
	cout << "The minute:" << now->tm_min << endl;
	cout << "The second:" << now->tm_sec << endl;
	cout << "The week day:" << now->tm_wday << endl;
	cout << "The year day:" << now->tm_yday << endl;
	cout << "Hours of daylight saving time: " << now->tm_isdst << endl;
	return (0);
}
