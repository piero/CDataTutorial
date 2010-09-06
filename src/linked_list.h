/*
* linked_list.h
*
*  Created on: 06/set/2010
*      Author: piero
*/

#ifndef LINKED_LIST_H_
#define LINKED_LIST_H_

#include <stdio.h>

typedef struct node_t
{
	int data;
	struct node_t *next;
} Node_t;

void list_append(Node_t **, int);
void list_remove(Node_t **, int);
unsigned int list_count(Node_t *);
void list_display(Node_t *);

#endif /* LINKED_LIST_H_ */
