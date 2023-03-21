/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   saint_main.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyaubry <kyaubry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 20:51:12 by kyaubry           #+#    #+#             */
/*   Updated: 2023/03/19 23:15:52 by kyaubry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	init_dict(t_numbers	*numbers, char *src)
{
	int			i;
	char		*dict_content;
	int			dict_file;
	int			read_file;

	i = 1;
	dict_content = malloc(sizeof(char) * i);
	dict_file = open(src, O_RDONLY);
	if (dict_file == -1)
	{
		printf("Dict Error\n");
		exit (0);
	}
	read_file = read(dict_file, dict_content, i);
	while (dict_content[i - 1] != '\0')
	{
		i ++ ;
		dict_content = malloc(sizeof(char) * i + 1);
		dict_file = open(src, O_RDONLY);
		read_file = read(dict_file, dict_content, i + 1);
	}
	ft_fill_name(dict_content, numbers);
	ft_fill_value(dict_content, numbers);
	free(dict_content);
	(void)read_file;
}

int	check_argv_max(char *argv)
{
	long long int	res;
	int				i;

	i = 0;
	res = 0;
	while (argv[i])
	{
		if (argv[i] >= '0' && argv[i] <= '9')
		{
			res = res * 10 + (argv[i] - '0');
		}
		i++;
	}
	if (res > 4294967295)
		return (0);
	return (1);
}

int	check_argv(char *argv)
{
	int	i;

	i = 0;
	if (argv[i] == '\0' || !check_argv_max(argv))
	{
		printf("Error\n");
		return (0);
	}
	while (argv[i])
	{
		if (!(argv[i] >= '0' && argv[i] <= '9'))
		{
			printf("Error\n");
			return (0);
		}
		i++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	t_numbers	numbers[33];

	if (argc == 1)
	{
		printf("Error\n");
		return (0);
	}
	else if ((argc == 2) && (check_argv(argv[1])))
	{	
		init_dict(numbers, "numbers.dict");
		st_algo(numbers, argv[1]);
	}
	else if ((argc == 3) && (check_argv(argv[2])))
	{
		init_dict(numbers, argv[1]);
		st_algo(numbers, argv[2]);
	}
	return (0);
}
