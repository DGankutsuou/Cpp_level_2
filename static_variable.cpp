#include <iostream>
using namespace std;

int	recursive_strlen(char *str)
{
	static int	len = 0;
	if (!(*str))
		return (len);
	len++;
	return (recursive_strlen(++str));
}

int	main(void)
{
	cout << recursive_strlen("Nameless") << endl;
	return (0);
}
