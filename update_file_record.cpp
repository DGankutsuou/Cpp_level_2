#include "fileslib.h"
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

void	update_record_in_file(string flie_name, string record, string update)
{
	vector <string> v_file;

	fl::load_file_to_vector("file.txt", v_file);
	for (string &line : v_file)
		if (line == record)
			line = update;
	fl::load_vector_to_file("file.txt", v_file);
	v_file.clear();
}

int	main(void)
{
	fl::print_file_content("file.txt");
	cout << "*********" << endl;
	update_record_in_file("file.txt", "Bilal", "El3alawi");
	fl::print_file_content("file.txt");
	return (0);
}
