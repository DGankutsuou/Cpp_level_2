#include <iostream>
using namespace std;

void	print_numbers_from_M_to_N(int N, int M);

int	recursive_power(int N, int M);

int	recursive_strlen(char *str);

int	main(void)
{
	print_numbers_from_M_to_N(10, -10);
	cout << recursive_power(2, 7) << endl;
	cout << recursive_strlen("Nameless");
	return (0);
}

void	print_numbers_from_M_to_N(int M, int N)
{
	if (M >= N)
	{
		cout << M << endl;
		print_numbers_from_M_to_N(M - 1, N);
	}
}

int	recursive_power(int N, int M)
{
	if (M < 0)
		return (0);
	if (N == 1 || N == 0 || M == 1)
		return (N);
	if (M == 0)
		return (1);
	return (N * recursive_power(N, M - 1));
}

int	recursive_strlen(char *str)
{
	if (!(*str))
		return (0);
	return (1 + recursive_strlen(++str));
}
