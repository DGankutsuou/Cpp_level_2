#include <iostream>
#include <fstream>
using namespace std;

void	print_file_content(string file_name)
{
	fstream	file;
	string	line;

	file.open(file_name, ios::in); // read mode
	if (file.is_open())
	{
		while (getline(file, line))
			cout << line << endl;
		file.close();
	}
}

int	main(void)
{
	print_file_content("file.txt");
	return (0);
}
