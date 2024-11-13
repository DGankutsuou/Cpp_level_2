#include <iostream>
using namespace std;

struct s_student
{
	string	name;
	int		grade;
};

int	main(void)
{
	s_student	student, *p;

	p = &student;
	p->name = "Ayman";
	p->grade = 42;
	cout << "The name : " << student.name << endl;
	cout << "The grade: " << student.grade << endl;
}
