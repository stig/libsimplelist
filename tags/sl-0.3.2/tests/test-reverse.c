#include "common.h"

int main(void)
{
	int i;
	int vals[] = {0, 1, 2, 3, 4, 5, STOP};
	struct sl_node *root, *p;

	root = NULL;
	for (i = 0; vals[i] != STOP; i++) {
		p = new_node_or_die(i);
		root = sl_push(root, p);
	}

	root = sl_reverse(root);

	for (i = 0; vals[i] != STOP; i++) {
		p = sl_pop(&root);
		if (p->val != vals[i]) {
			return EXIT_FAILURE;
		}
		free(p);
	}

	if (i != 6) {
		return EXIT_FAILURE;
	}

	return 0;
}

