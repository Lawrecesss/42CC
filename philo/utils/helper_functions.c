#include "./../philo.h"

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
