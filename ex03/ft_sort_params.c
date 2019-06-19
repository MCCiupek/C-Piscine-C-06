/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mciupek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 02:52:55 by mciupek           #+#    #+#             */
/*   Updated: 2019/06/19 03:14:33 by mciupek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, &"\n", 1);
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

int		main(int argc, char **argv)
{
	int	min;
	int i;
	int j;

	j = 0;
	while (j < argc - 1)
	{
		min = 1;
		i = 1;
		while (i < argc)
		{
			if (ft_strcmp(argv[min], argv[i]) > 0)
				min = i;
			i++;
		}
		ft_putstr(argv[min]);
		argv[min][0] = 127;
		j++;
	}
}
