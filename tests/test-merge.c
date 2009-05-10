#include "common.h"

int main(void)
{
	struct sl_node *q, *p;

	p = new_node_or_die(4);
	q = new_node_or_die(0);
	p = sl_merge(p, q, cmp);
	if (2 != sl_count(p)) {
		return EXIT_FAILURE;
	}
 	if (p->val != 0 && p->next->val != 4) {
		return EXIT_FAILURE;
	}

	q = new_node_or_die(-1);
	q->next = new_node_or_die(3);
	p = sl_merge(p, q, cmp);
	if (4 != sl_count(p)) {
		return EXIT_FAILURE;
	}
 	if (p->val != -1 && p->next->val != 0 
			&& p->next->next->val != 3 
			&& p->next->next->next->val != 4) {
		return EXIT_FAILURE;
	}

	sl_free(p, NULL);
	return 0;
}

