#include <iostream>
#include <limits>
using namespace std;

int	my_str_is_numeric(string str)
{
	int	idx;

	idx = 0;
	if (str[idx] == '-' || str[idx] == '+')
		idx++;
	while (str[idx] != '\0')
	{
		if (str[idx] >= '0' && str[idx] <= '9')
			idx++;
		else
			return (0);
	}
	return (1);
}

int	ft_atoi(string str)
{
	int	nbr;
	int	op;
	int	i;

	nbr = 0;
	op = 1;
	i = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			op *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
		nbr = (nbr * 10) + str[i++] - '0';
	return (nbr * op);
}

int	read_number(string message)
{
	string	number;

	cout << message;
	cin >> number;
	while (!my_str_is_numeric(number))
	{
		cout << "you did not enter a number, please enter a number: ";
		cin >> number;
	}
	return (ft_atoi(number));
}

int	main(void)
{
	cout << read_number("Enter a number: ");
	return (0);
}
