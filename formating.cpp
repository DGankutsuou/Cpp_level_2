#include <iostream>
using namespace std;

int	main(void)
{
	int		a = 56;
	float	f = 12.6549;
	double	d = 13.265498;
	char	c = 'A';
	char	name[] = "Nameless";

	printf ("a = %0*d\n", 3, a);
	printf ("a = %05d\n\n", a);
	printf ("f = %.*f\n", 3, f);
	printf ("d = %.4f\n\n", d);
	printf ("c = %3c\n", c);
	printf ("c = %*c\n\n", 4, c);
	printf ("name is: %s", name);

	return (0);
}
