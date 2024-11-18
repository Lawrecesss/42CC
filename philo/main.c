#include "philo.h"

int main(int argc, char **argv)
{
	int n;
	t_philo philo;
	if (argc > 1 && is_num(argv))
	{
		philo.id = ft_atoi(argv[1]);
		printf("%d\n", philo.id);
	}
	return (0);
}

int philo(int num_philos, int time_die, int time_eat, int time_sleep)
{
	return (0);
}
