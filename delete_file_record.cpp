#include "fileslib.h"
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

void	delete_record_from_file(string flie_name, string record)
{
	vector <string> v_file;

	fl::load_file_to_vector("file.txt", v_file);
	for (string &line : v_file)
		if (line == record)
			line.clear();
	fl::load_vector_to_file("file.txt", v_file);
	v_file.clear();
}

int	main(void)
{
	fl::print_file_content("file.txt");
	cout << "*********" << endl;
	delete_record_from_file("file.txt", "Bilal");
	fl::print_file_content("file.txt");
	return (0);
}
