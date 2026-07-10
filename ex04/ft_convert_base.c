/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfurst <nfurst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 16:18:30 by nfurst            #+#    #+#             */
/*   Updated: 2026/07/09 15:42:42 by nfurst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_check_base(char *base);
int	ft_is_space(char c);
int	ft_get_base_value(char c, char *base);

int	ft_get_sign(char *str, int *i)
{
	int	sign;

	sign = 1;
	while (str[*i] == '+' || str[*i] == '-')
	{
		if (str[*i] == '-')
			sign *= -1;
		(*i)++;
	}
	return (sign);
}

int	ft_atoi_base(char *str, char *base)
{
	int		i;
	int		sign;
	long	result;
	int		base_len;
	int		value;

	base_len = ft_check_base(base);
	if (base_len == 0)
		return (0);
	i = 0;
	result = 0;
	while (ft_is_space(str[i]))
		i++;
	sign = ft_get_sign(str, &i);
	value = ft_get_base_value(str[i], base);
	while (value != -1)
	{
		result = result * base_len + value;
		i++;
		value = ft_get_base_value(str[i], base);
	}
	return ((int)(result * sign));
}

int	ft_nbr_len(long nb, int base_len)
{
	int	len;

	len = 0;
	if (nb <= 0)
		len = 1;
	if (nb < 0)
		nb = -nb;
	while (nb > 0)
	{
		nb /= base_len;
		len++;
	}
	return (len);
}

void	ft_fill_nbr(char *result, long nb, char *base, int base_len)
{
	int	len;

	len = ft_nbr_len(nb, base_len);
	result[len] = '\0';
	if (nb == 0)
	{
		result[0] = base[0];
		return ;
	}
	if (nb < 0)
	{
		result[0] = '-';
		nb = -nb;
	}
	while (nb > 0)
	{
		result[--len] = base[nb % base_len];
		nb /= base_len;
	}
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*result;
	int		from_base_len;
	int		to_base_len;
	long	number;

	from_base_len = ft_check_base(base_from);
	to_base_len = ft_check_base(base_to);
	if (from_base_len == 0 || to_base_len == 0)
		return (0);
	number = (long)ft_atoi_base(nbr, base_from);
	result = malloc(sizeof(char) * (ft_nbr_len(number, to_base_len) + 1));
	if (!result)
		return (0);
	ft_fill_nbr(result, number, base_to, to_base_len);
	return (result);
}

// #include <stdio.h>
// int main(int argc, char **argv)
// {
//     if (argc != 4)
//         return (1);
//     char *nbr = argv[1];
//     char *base_from = argv[2];
//     char *base_to = argv[3];
//     char *converted = ft_convert_base(nbr, base_from, base_to);
//     if (converted)
//     {
//         printf("%s\n", converted);
//         free(converted);
//     }
//     else
//     {
//         printf("Invalid base or conversion error.\n");
//     }
//     return (0);
// }