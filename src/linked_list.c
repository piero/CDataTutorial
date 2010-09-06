/*
 * linked_list.c
 *
 *  Created on: 06/set/2010
 *      Author: piero
 */

#include "linked_list.h"
#include <stdlib.h>

void list_append(Node_t **q, int num)
{
	Node_t *temp = NULL, *r = NULL;

	if (*q == NULL)
	{
		temp = (Node_t*)malloc(sizeof(Node_t));
		temp->data = num;
		temp->next = NULL;
		*q = temp;
	}
	else
	{
		temp = *q;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		r = (Node_t*)malloc(sizeof(Node_t));
		r->data = num;
		r->next = NULL;
		temp->next = r;
	}
}

void list_remove(Node_t **q, int num)
{
	if (*q == NULL)
	{
		printf("Empty list: there's nothing to remove.\n");
		return;
	}

	Node_t *curr = *q;

	if (curr->data == num)
	{
		// Delete first node
		*q = curr->next;
		free(curr);
		return;
	}

	// Find the node to delete
	while (curr->next != NULL)
	{
		Node_t *temp = curr->next;

		if (temp->data == num)
		{
			// Found the value to delete!
			curr->next = temp->next;
			free(temp);
			return;
		}
		curr = curr->next;
	}

	printf("Couldn't find %d in the list.\n", num);
}

void list_display(Node_t *q)
{
	printf("[ ");
	if (q == NULL)
	{
		printf("Empty ]\n");
		return;
	}

	while (q != NULL)
	{
		printf("%d ", q->data);
		q = q->next;
	}
	printf("]\n");
}

unsigned int list_count(Node_t *q)
{
	unsigned int counter = 0;

	if (q == NULL)
		return counter;

	while (q != NULL)
	{
		++counter;
		q = q->next;
	}
	return counter;
}
