#include <iostream>
#include <fstream>
using namespace std;

int	main(void)
{
	fstream	file;

	file.open("file.txt", ios::out); // write mode
	// ios::out delete every thing and write new things
	if (file.is_open())
	{
		file << "First line\n";
		file << "Second line\n";
		file << "Third line" << endl;
		file.close();
	}
	file << "FOurth line" << endl;
	return (0);
}
