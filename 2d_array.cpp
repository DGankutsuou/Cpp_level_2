#include <iostream>
using namespace std;

int	main(void)
{
	int	x[10][10];

	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			x[i - 1][j - 1] = i * j;
		}
	}
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			printf ("%0*d ", 2, x[i][j]);
		}
		printf("\n");
	}
	return (0);
}
