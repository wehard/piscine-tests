/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <willehard@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 10:07:29 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/22 10:36:49 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int nmatch(char *s1, char *s2);

int main(int argc, char **argv)
{
	char *s1;
	char *s2;
	int m;

	if (argc < 3)
	{
		
		return (0);
	}
	s1 = argv[1];
	s2 = argv[2];
	m = nmatch(s1, s2);

	if (m > 0)
		printf("Match! %d\n", m);
	else
		printf("No match!\n");
			   
	
}
