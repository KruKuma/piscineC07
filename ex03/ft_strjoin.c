/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfurst <nfurst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 15:53:32 by nfurst            #+#    #+#             */
/*   Updated: 2026/07/09 15:54:32 by nfurst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// #include <stdio.h>

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}

int	ft_total_length(int size, char **strs, char *sep)
{
	int	i;
	int	len;
	int	sep_len;

	if (size <= 0)
		return (1);
	i = 0;
	len = 0;
	sep_len = ft_strlen(sep);
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		i++;
	}
	len += sep_len * (size - 1);
	return (len + 1);
}

void	ft_strcat(char *dest, char *src)
{
	while (*dest)
		dest++;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		i;

	result = malloc(sizeof(char) * ft_total_length(size, strs, sep));
	if (!result)
		return (0);
	*result = '\0';
	i = 0;
	while (i < size)
	{
		ft_strcat(result, strs[i]);
		if (i < size - 1)
			ft_strcat(result, sep);
		i++;
	}
	return (result);
}

// int main(int argc, char **argv)
// {
//     if (argc < 2)
//         return (1);
//     char *result = ft_strjoin(argc - 1, argv + 1, ", ");
//     if (result)
//     {
//         printf("%s\n", result);
//         free(result);
//     }
//     return (0);
// }