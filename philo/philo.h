#ifndef PHILO_H
#define PHILO_H

#include <unistd.h>
#include <stdio.h>

typedef struct s_philo
{
	int id;
	int time_die;
	int time_eat;
	int time_sleep;
	int alive;

} t_philo;

int ft_atoi(char *number);
int is_num(char **number);

#endif
