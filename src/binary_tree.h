/*
* binary_tree.h
*
*  Created on: 06/set/2010
*      Author: piero
*/

#ifndef BINARY_TREE_H_
#define BINARY_TREE_H_

typedef struct treenode_t
{
	int data;
	struct bintree_t *left;
	struct bintree_t *right;
} TreeNode_t;

void tree_insert(TreeNode_t **t, int num);
void tree_display(TreeNode_t *);

#endif /* BINARY_TREE_H_ */
