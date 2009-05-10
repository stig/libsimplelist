#include "common.h"

int main(void)
{
	struct sl_node *p;

	p = NULL;
	if (0 != sl_count(p)) {
		return EXIT_FAILURE;
	}

	p = new_node_or_die(0);
	if (1 != sl_count(p)) {
		return EXIT_FAILURE;
	}

	p->next = new_node_or_die(0);
	if (2 != sl_count(p)) {
		return EXIT_FAILURE;
	}

	p->next->next = new_node_or_die(0);
	if (3 != sl_count(p)) {
		return EXIT_FAILURE;
	}

	free(p->next->next);
	free(p->next);
	free(p);

	return 0;
}

