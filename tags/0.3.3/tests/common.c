#include <stdlib.h>
#include <assert.h>
#include "common.h"


/**
 * Return new node, or die failing.
 * @param val value of new node.
 * @return new node 
 */
struct sl_node *new_node_or_die(int val)
{
	struct sl_node *p;
	p = malloc(sizeof *p);
	assert(p != NULL);

	p->next = NULL;
	p->val = val;
	return p;
}


/**
 * Compare two nodes.
 *
 * @param p1 node a
 * @param p2 node b
 *
 * @return A positive value if the value of @p p1 is greater than @p p2,
 * negative if the reverse is true and 0 if they are equal.
 */
int cmp(void *p1, void *p2)
{
	struct sl_node *q1 = p1, *q2 = p2;
	return q1->val - q2->val;
}

