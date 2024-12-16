#include "./../philo.h"

void init_forks(t_program *program)
{
	int i;

	i = 0;
	while (i < program->num_of_philos)
	{
		pthread_mutex_init(&(program->forks[i]), NULL);
		i++;
	}
}

void init_philos(t_program *program, char **argv)
{
	int i;

	i = 0;
	program->philos = malloc(sizeof(t_philo) * program->num_of_philos);
	while (i < program->num_of_philos)
	{
		program->philos[i].id = i + 1;
		program->philos[i].alive = 1;
		program->philos[i].eating = 0;
		program->philos[i].time_die = ft_atoi(argv[2]);
		program->philos[i].time_eat = ft_atoi(argv[3]);
		program->philos[i].time_sleep = ft_atoi(argv[4]);
		program->philos[i].num_time_to_eat = -1;
		program->philos[i].num_of_meal_eaten = 0;
		if (argv[5])
			program->philos[i].num_time_to_eat = ft_atoi(argv[5]);
		program->philos[i].l_fork = &(program->forks[i]);
		if (i == 0)
			program->philos[i].r_fork = &(program->forks[program->num_of_philos - 1]);
		else
			program->philos[i].r_fork = &(program->forks[i - 1]);
		i++;
	}
}
