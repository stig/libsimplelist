#include "common.h"

int main(void)
{
	int i, j;
	struct sl_node *root, *p;

	for (i = 0; i < 9; i++) {
		root = NULL;
		for (j = 0; j < i; j++) {
			p = new_node_or_die(j);
			root = sl_push(root, p);
		}

		p = sl_split(&root);
		if (i != (sl_count(p) + sl_count(root))) {
			return EXIT_FAILURE;
		}

		sl_free(root, NULL);
		sl_free(p, NULL);
	}

	return 0;
}

