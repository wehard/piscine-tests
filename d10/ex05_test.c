/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <willehard@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 11:50:51 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/22 15:49:28 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_is_sort(int *tab, int length, int(*f)(int, int));

int	equals(int a, int b)
{
	//printf("comparing: %i, %i\n", a, b);
	return (a - b);
}

int	main(void)
{
	int sorted_tab[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int unsorted_tab[] = { 9, 2, 3, 8, 5, 6, 7, 4, 1 };
	int same_tab[] = { 1, 1, 1, 1, 1, 1, 1, 1, 1 };
	int rev_tab[] = { 9, 8, 7, 6, 6, 5, 4, 2, 1 };
	int i;
	int j;
	int k;
	int l;
	i = ft_is_sort(sorted_tab, 9, &equals);
	j = ft_is_sort(unsorted_tab, 9, &equals);
	k = ft_is_sort(same_tab, 9, &equals);
	l = ft_is_sort(rev_tab, 9, &equals);
	printf("sorted  : %i\n", i);
	printf("unsorted: %i\n", j);
	printf("same    : %i\n", k);
	printf("rev (0) : %i\n", l);
}
