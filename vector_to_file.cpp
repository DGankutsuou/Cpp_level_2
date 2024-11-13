#include "fileslib.h"
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

void	load_vector_to_file(string file_name, vector <string> &v_file)
{
	fstream	file;
	string	line;

	file.open(file_name, ios::out); // write mode
	if (file.is_open())
	{
		for (string &line : v_file)
			file << line << endl;
		file.close();
	}
}

int	main(void)
{
	vector <string> v_file = {"Ayman", "Hicham", "Salah", "Bilal", "Ayman", "Hicham", "Salah", "Bilal"};

	load_vector_to_file("file.txt", v_file);
	fl::print_file_content("file.txt");
	return (0);
}
