/*
* main.c
*
*  Created on: 06/set/2010
*      Author: piero
*/

#include "linked_list.h"

int main(int argc, char *arv[])
{
	Node_t *p = NULL;
	printf("List contains %d nodes\n", count(p));
	display(p);

	append(&p, 10);
	printf("List contains %d nodes\n", count(p));
	display(p);

	append(&p, 20);
	append(&p, 30);
	append(&p, 40);
	append(&p, 50);
	printf("List contains %d nodes\n", count(p));
	display(p);

	del(&p, 20);
	printf("List contains %d nodes\n", count(p));
	display(p);

	del(&p, 123);

	del(&p, 10);
	del(&p, 30);
	del(&p, 50);
	del(&p, 40);
	printf("List contains %d nodes\n", count(p));
	display(p);

	del(&p, 100);

	return 0;
}
