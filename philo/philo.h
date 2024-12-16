#ifndef PHILO_H
#define PHILO_H

#include <unistd.h>
#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
typedef struct s_philo
{
	pthread_t thread;
	int id;
	int time_die;
	int time_eat;
	int time_sleep;
	int num_time_to_eat;
	int num_of_meal_eaten;
	int eating;
	int alive;
	pthread_mutex_t *l_fork;
	pthread_mutex_t *r_fork;

} t_philo;

typedef struct s_program
{
	int died;
	int num_of_philos;
	pthread_mutex_t *forks;
	t_philo *philos;
} t_program;

int ft_atoi(char *number);
int is_num(char **number);
int is_argv_valid(char **number);
void init_philos(t_program *program, char **argv);
void init_forks(t_program *program);
void create_threads(t_program *program);
void routine(void *philo);

#endif
