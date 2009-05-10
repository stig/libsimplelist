#include "common.h"

int main(void)
{
	int i, j, val;
	struct sl_node *root, *p;

	root = NULL;
	for (i = 0; i < 4; i++) {
		for (j = 0; j < i; j++) {
			p = new_node_or_die(j);
			root = sl_unshift(root, p);
		}

		if (i != sl_count(root)) {
			return EXIT_FAILURE;
		}

		val = i;
		while (p = sl_shift(&root)) {
			free(p);
			val--;
		}

		if (val || root) {
			return EXIT_FAILURE;
		}
	}

	return 0;
}

