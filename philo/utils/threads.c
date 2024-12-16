#include "./../philo.h"

void create_threads(t_program *program)
{
	int i;

	i = 0;
	while (i < program->num_of_philos)
	{
		pthread_create(&program->philos[i].thread, NULL, &routine, &program->philos[i]);
		i++;
	}
	i = 0;
	while (i < program->num_of_philos)
	{
		pthread_join(&program->philos[i].thread, NULL);
		i++;
	}
}
