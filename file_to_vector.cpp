#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

void	load_file_to_vector(string file_name, vector <string> &v_file)
{
	fstream	file;
	string	line;

	file.open(file_name, ios::in); // read mode
	if (file.is_open())
	{
		while (getline(file, line))
			v_file.push_back(line);
		file.close();
	}
}

int	main(void)
{
	vector <string> v_file;

	load_file_to_vector("file.txt", v_file);
	for (const string &line : v_file)
		cout << line << endl;
	return (0);
}
