/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <willehard@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 10:06:11 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/25 12:16:54 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../ft_btree_all.h"

#define COUNT 10

void    infix_traversal(t_btree *node, int ws)
{
	if (node == NULL)
		return ;
	ws += COUNT;
	infix_traversal(node->right, ws);
	printf("\n");
	for (int i = COUNT; i < ws; i++)
		printf(" ");
	printf("%s\n", node->item);
	infix_traversal(node->left, ws);
}

void print_item(char *item)
{
	printf("%s", item);
}

int	main(void)
{
	t_btree *root;

	root = btree_create_node("2");
	root->left = btree_create_node("1");
	root->left->left = btree_create_node("0");
	root->left->right = btree_create_node("1");
	
	root->right = btree_create_node("3");
	root->right->right = btree_create_node("4");

	infix_traversal(root, ' ');

	printf("Should be: 011432\n");

	btree_apply_suffix(root, (void(*)(void*))print_item);
}
