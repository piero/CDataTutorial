/*
* main.c
*
*  Created on: 06/set/2010
*      Author: piero
*/

#include "linked_list.h"
#include "binary_tree.h"

int main(int argc, char *arv[])
{
	Node_t *p = NULL;
	TreeNode_t *t = NULL;

	// Linked list
	printf("List contains %d nodes\n", list_count(p));
	list_display(p);

	list_append(&p, 10);
	printf("List contains %d nodes\n", list_count(p));
	list_display(p);

	list_append(&p, 20);
	list_append(&p, 30);
	list_append(&p, 40);
	list_append(&p, 50);
	printf("List contains %d nodes\n", list_count(p));
	list_display(p);

	list_remove(&p, 20);
	printf("List contains %d nodes\n", list_count(p));
	list_display(p);

	list_remove(&p, 123);

	list_remove(&p, 10);
	list_remove(&p, 30);
	list_remove(&p, 50);
	list_remove(&p, 40);
	printf("List contains %d nodes\n", list_count(p));
	list_display(p);

	list_remove(&p, 100);


	// Binary tree
	tree_display(t); printf("\n");

	tree_insert(&t, 10);
	tree_display(t); printf("\n");

	tree_insert(&t, 8);
	tree_insert(&t, 11);
	tree_display(t); printf("\n");

	return 0;
}
