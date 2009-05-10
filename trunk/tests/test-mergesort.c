#include "common.h"

int main(void)
{
	int i, old, vals[] = {1, 9, -3, 8, 7, 5, STOP};
	struct sl_node *root, *p;

	root = NULL;
	for (i = 0; vals[i] != STOP; i++) {
		p = new_node_or_die(i);
		root = sl_push(root, p);
	}
	root = sl_mergesort(root, cmp);

	old = -100;
	while ((p = sl_pop(&root))) {
		if (p->val < old) {
			return EXIT_FAILURE;
		}
		old = p->val;
		free(p);
	}

	return 0;
}

