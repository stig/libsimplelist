#include "common.h"

int main(void)
{
	struct sl_node *p;

	p = new_node_or_die(0);
	p->next = new_node_or_die(0);
	p->next->next = new_node_or_die(0);
	sl_free(p, NULL);

	p = new_node_or_die(0);
	p->next = new_node_or_die(0);
	p->next->next = new_node_or_die(0);
	sl_free(p, free);

	return 0;
}

