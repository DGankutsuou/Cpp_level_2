#include <iostream>
#include <fstream>
using namespace std;

int	main(void)
{
	fstream	file;

	file.open("file.txt", ios::app); // append mode
	// ios::app add to the file if it is exist creat it if not
	// and it is a shortcut of ios::out | ios::app
	// file.open("file.txt", ios::out | ios::app);
	if (file.is_open())
	{
		file << "First line\n";
		file << "Second line\n";
		file << "Third line" << endl;
		file.close();
	}
	file << "Fourth line" << endl;
	return (0);
}
