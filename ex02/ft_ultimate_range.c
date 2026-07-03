/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfurst <nfurst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 19:53:26 by nfurst            #+#    #+#             */
/*   Updated: 2026/07/03 10:02:12 by nfurst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc(sizeof(int) * (max - min));
	if (!*range)
		return (-1);
	i = 0;
	while (min < max)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (i);
}

// int main(int argc, char **argv)
// {
//     int min;
//     int max;
//     int *range;
//     int size;
//     if (argc != 3)
//         return (1);
//     min = atoi(argv[1]);
//     max = atoi(argv[2]);
//     size = ft_ultimate_range(&range, min, max);
//     if (size > 0)
//     {
//         for (int i = 0; i < size; i++)
//         {
//             printf("%d ", range[i]);
//         }
//         free(range);
//     }
//     else if (size == 0)
//     {
//         printf("Invalid range.\n");
//     }
//     else
//     {
//         printf("Memory allocation failed.\n");
//     }
//     return (0);
// }