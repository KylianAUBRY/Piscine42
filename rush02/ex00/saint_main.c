/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   saint_main.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyaubry <kyaubry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 20:51:12 by kyaubry           #+#    #+#             */
/*   Updated: 2023/03/19 04:38:53 by kyaubry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

#define BUFFER_SIZE 4096

void	ft_fill_name(char *dict_content, t_numbers *numbers)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (i <= 31)
	{
		while (dict_content[j] != '\n' && dict_content[j] != '\0')
		{	
			if (dict_content[j] >= 'a' && dict_content[j] <= 'z')
			{
				numbers[i].name[k] = dict_content[j];
				k++;
			}
			j++;
		}
		numbers[i].name[k] = '\0';
		if (dict_content[j] == '\n')
			j++;
		k = 0;
		i++;
	}
}

void	ft_fill_value(char *dict_content, t_numbers *numbers)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;

	while (i <= 31)
	{
		while (dict_content[j] != '\n' && dict_content[j] != '\0')
		{
			if (dict_content[j] >= '0' && dict_content[j] <= '9')
			{
				numbers[i].value[k] = dict_content[j];
				k++;
			}
			j++;
		}
		numbers[i].value[k] = '\0';
		if (dict_content[j] == '\n')
			j++;
		k = 0;
		i++;
	}
}
/*
void	*size_of_dict(char *dict_content, char *src)
{
	int	i; 
	int			dict_file;
	int			read_file;
	
	(void)src;
	i = 1;
	dict_content = malloc(sizeof(char) * i);
	dict_file = open("numbers.dict", O_RDONLY);
	read_file = read(dict_file, dict_content, i);
	while (dict_content[i - 1] != '\0')
	{
		i ++ ;
		free(dict_content);
		dict_content = malloc(sizeof(char) * i + 1);
		dict_file = open("numbers.dict", O_RDONLY);
		read_file = read(dict_file, dict_content, i + 1);
	}
	(void)read_file;
	return(0);
}

void	init_dict(t_numbers	*numbers, char *src)
{
	int			i;
	char		*dict_content;

	dict_content = malloc(sizeof(char) * 1);
	size_of_dict(dict_content, src);
	i = 0;
	while (i <= 31)
	{
		numbers[i].name = (char *)malloc(sizeof(char) * 20);
		numbers[i].value = (char *)malloc(sizeof(char) * 11);
		i++;
	}
	ft_fill_name(dict_content, numbers);
	ft_fill_value(dict_content, numbers);
	free(dict_content);
}
*/

void	init_dict(t_numbers	*numbers, char *src)
{
	int			i;
	char		*dict_content;
	int			dict_file;
	int			read_file;
	
	i = 1;
	dict_content = malloc(sizeof(char) * i);
	dict_file = open(src, O_RDONLY);
	read_file = read(dict_file, dict_content, i);
	while (dict_content[i - 1] != '\0')
	{
		i ++ ;
		free(dict_content);
		dict_content = malloc(sizeof(char) * i + 1);
		dict_file = open(src, O_RDONLY);
		read_file = read(dict_file, dict_content, i + 1);
	}
	i = -1;
	while (i++ <= 31)
	{
		numbers[i].name = (char *)malloc(sizeof(char) * 20);
		numbers[i].value = (char *)malloc(sizeof(char) * 11);
	}
	ft_fill_name(dict_content, numbers);
	ft_fill_value(dict_content, numbers);
	free(dict_content);
	(void)read_file;
}

int	check_argv_max(char *argv)
{
	int	i;
	long long int	res;

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
		if(!(argv[i] >= '0' && argv[i] <= '9'))
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