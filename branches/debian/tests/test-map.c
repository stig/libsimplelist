#include "common.h"

int twice(void *p, void *data)
{
	struct sl_node *q = p;
  (void)data;
	q->val *= 2;
	return 0;
}


int main(void)
{
	int i;
	int vals[] = {0, -3, 2, 7, STOP};
	struct sl_node *root, *p;

	root = NULL;
	for (i = 0; vals[i] != STOP; i++) {
		p = new_node_or_die(vals[i]);
		root = sl_unshift(root, p);
	}

	if (sl_map(root, twice, NULL)) {
		return EXIT_FAILURE;
	}

	while ((p = sl_shift(&root))) {
		i--;
		if (p->val != (2 * vals[i])) {
			return EXIT_FAILURE;
		}
		free(p);
	}

	return 0;
}

