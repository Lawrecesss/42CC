#include "./../philo.h"

int is_argv_valid(char **number)
{
	int i;
	int argv[4];

	i = 0;
	if (is_num(number))
	{
		while (i < 4)
		{
			argv[i] = ft_atoi(number[i + 1]);
			i++;
		}
		if (argv[0] > 200)
			return (0);
		if (argv[1] < 60 || argv[2] < 60 || argv[3] < 60)
			return (0);
		return (1);
	}
	return (0);
}

int is_num(char **number)
{
	int i;
	int j;

	i = 1;
	while (number[i])
	{
		j = 0;
		while (number[i][j])
		{
			if (number[i][0] == '-' || number[i][0] == '+')
				j++;
			else if (number[i][j] >= '0' && number[i][j] <= '9')
				j++;
			else
				return (0);
		}
		i++;
	}
	return (1);
}

int ft_atoi(char *number)
{
	int num;
	int neg;

	num = 0;
	neg = 0;
	if (*number == '-' || *number == '+')
	{
		if (*number == '-')
			neg = 1;
		number++;
	}
	while (*number)
	{
		num = (num * 10) + (*number - '0');
		number++;
	}
	if (neg == 1)
		num = -num;
	return (num);
}
