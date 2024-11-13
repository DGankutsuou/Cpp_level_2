#include <iostream>
using namespace std;

void	function4(void);

void	fun3(void)
{
	function4();
}

void	fun2(void)
{
	fun3();
	function4();
}

void	fun1(void);

int	main(void)
{
	fun1();
	return (0);
}

void	fun1(void)
{
	fun2();
}

void	function4(void)
{
	cout << "Ohio" << endl;
}
