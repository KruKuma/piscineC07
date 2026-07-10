/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfurst <nfurst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 19:42:12 by nfurst            #+#    #+#             */
/*   Updated: 2026/07/10 14:36:54 by nfurst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	if (min >= max)
		return (NULL);
	range = malloc(sizeof(int) * (max - min));
	if (!range)
		return (NULL);
	i = 0;
	while (min < max)
	{
		range[i] = min;
		min++;
		i++;
	}
	return (range);
}

// #include <stdio.h>
// int main(int argc, char **argv)
// {
//     int min;
//     int max;
// 	int size;
// 	int i;

//     if (argc != 3)
//         return (1);
//     min = atoi(argv[1]);
//     max = atoi(argv[2]);
//     int *range = ft_range(min, max);
//     if (range == 0)
// 		return (1);
// 	size = max - min;
// 	i = 0;
// 	while (i < size)
// 	{
// 		printf("%d ", range[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	free(range);
//     return (0);
// }