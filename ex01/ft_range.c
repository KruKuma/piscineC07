/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfurst <nfurst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 19:42:12 by nfurst            #+#    #+#             */
/*   Updated: 2026/07/03 10:00:08 by nfurst           ###   ########.fr       */
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
//     if (argc != 3)
//         return (1);
//     min = atoi(argv[1]);
//     max = atoi(argv[2]);
//     int *range = ft_range(min, max);
//     if (range)
//     {
//         while (min < max)
//         {
//             printf("%d ", range[min - min]);
//             min++;
//         }
//         free(range);
//     }
//     else
//     {
//         printf("Invalid range or memory allocation failed.\n");
//     }
//     return (0);
// }