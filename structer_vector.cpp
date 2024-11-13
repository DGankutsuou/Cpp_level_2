#include "inputslib.h"
#include <iostream>
#include <vector>
using namespace std;

struct s_employee
{
	string	first_name;
	string	last_name;
	short	salary;
};

void	read_v_employees(vector <s_employee> &v_employee)
{
	string		add_employee = "Y";
	s_employee	tmp_employee;
	while (add_employee == "Y" || add_employee == "y")
	{
		cout << "First name: ";
		cin >> tmp_employee.first_name;
		cout << "Last name : ";
		cin >> tmp_employee.last_name;
		tmp_employee.salary = input::read_number("Salary    : ");
		v_employee.push_back(tmp_employee);
		cout << "Dost Thou desire to add another employee (Y/N): ";
		cin >> add_employee;
	}
}

void	print_v_employees(vector <s_employee> &v_employee)
{
	cout << "Employees vector:\n" << endl;
	for (s_employee &employee : v_employee)
	{
		cout << "First name: " << employee.first_name << "\n";
		cout << "Last name : " << employee.last_name << "\n";
		cout << "Salary    : " << employee.salary << "\n" << endl;
	}
}

int	main(void)
{
	vector <s_employee> v_employee;

	read_v_employees(v_employee);
	print_v_employees(v_employee);
	return (0);
}
