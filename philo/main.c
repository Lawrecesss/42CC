#include "philo.h"

int main(int argc, char **argv)
{
	// int n;
	t_program program;

	if (argc > 1 && is_argv_valid(argv))
	{
		program.num_of_philos = ft_atoi(argv[1]);
		program.died = 0;
		init_forks(&program);
		init_philos(&program, argv);
		printf("%d\n", program.philos[2].time_die);
	}
	return (0);
}
