/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfile <pfile@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/21 11:58:02 by pfile             #+#    #+#             */
/*   Updated: 2020/05/21 12:18:28 by pfile            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int k;

	k = -1;
	i = -1;
	while (dest[++i] != '\0')
	{
	}
	while (src[++k] != '\0')
		dest[i + k] = src[k];
	dest[i + k] = '\0';
	return (dest);
}