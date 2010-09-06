/*
* binary_tree.c
*
*  Created on: 06/set/2010
*      Author: piero
*/

#include "binary_tree.h"
#include <stdio.h>
#include <stdlib.h>

void tree_insert(TreeNode_t **t, int num)
{
	TreeNode_t *curr = *t;

	if (curr == NULL)
	{
		// First node (root)
		curr = (TreeNode_t *)malloc(sizeof(TreeNode_t));
		curr->data = num;
		curr->left = NULL;
		curr->right = NULL;
		*t = curr;
		return ;
	}

	if (num <= curr->data)
		tree_insert((TreeNode_t**)&(curr->left), num);
	else
		tree_insert((TreeNode_t**)&(curr->right), num);
}

void tree_display(TreeNode_t *t)
{
	if (t != NULL)
	{
		tree_display((TreeNode_t*)t->left);
		printf("%d ", t->data);
		tree_display((TreeNode_t*)t->right);
	}
	else
		printf("- ");
}
