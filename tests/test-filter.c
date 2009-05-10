#include "common.h"

int iseven(void *p, void *data)
{
	struct sl_node *q = p;
	int *c = (int*)data;
	if (q->val % 2) {
		return 0;
	} else {
		if ( *c == 0 )
			return -1;
		*c -= 1;
		return 1;
	}
}

int compare(void *p, void *data)
{
	struct sl_node *q = p;
	int val = *((int*)data);
	return val == q->val ? -1 : 0;
}

int main(void)
{
	{
		int i;
		int val;
		int vals[] = {5, 6 ,3 ,2, 1, 12, 89, 4, STOP};
		int vals2[] = {   6 ,3 ,2,    12, 89,    STOP};
		struct sl_node *root, *p;
	
		root = NULL;
		for (i = 0; vals[i] != STOP; i++) {
			p = new_node_or_die(vals[i]);
			root = sl_unshift(root, p);
		}
	
		val = 4;
		if (!(p = sl_filter(&root, compare, &val))) {
			return EXIT_FAILURE;
		}
		free(p);
		
		val = 1;
		if (!(p = sl_filter(&root, compare, &val))) {
			return EXIT_FAILURE;
		}
		free(p);
		
		val = 5;
		if (!(p = sl_filter(&root, compare, &val))) {
			return EXIT_FAILURE;
		}
		free(p);
		
		for (i = 0; vals2[i] != STOP; i++) {
			p = sl_pop(&root);
			if (p->val != vals2[i]) {
				return EXIT_FAILURE;
			}
			free(p);
		}
	}
	
	{
		int i;
		int val;
		/*int vals[]  = {5, 6, 3 , 2, 1, 12, 89, 4, STOP};
		int vals2[] = {5,    3 ,    1,     89,    STOP};
		int vals3[] = {   6,     2,    12,     4, STOP};*/
		/*int vals[]  = {2, 4, 6, 13, 15, 19, 24, STOP};
		int vals2[] = {         13, 15, 19,     STOP};
		int vals3[] = {2, 4, 6,             24, STOP};*/
	
		/* Extracting the first 3 even values */
		int vals[]  = {5, 6, 3 , 2, 1, 12, 89, 4, STOP};
		int vals2[] = {5,    3 ,    1,     89, 4, STOP};
		int vals3[] = {   6,     2,    12,        STOP};
		struct sl_node *root, *p, *q;
	
		root = NULL;
		for (i = 0; vals[i] != STOP; i++) {
			p = new_node_or_die(vals[i]);
			root = sl_unshift(root, p);
		}
	
		val = 2;
		if (!(p = sl_filter(&root, iseven, &val))) {
			return EXIT_FAILURE;
		}
		if (3 != sl_count(p)) {
			return EXIT_FAILURE;
		}
		
		for (i = 0; vals2[i] != STOP; i++) {
			q = sl_pop(&root);
			if (q->val != vals2[i]) {
				return EXIT_FAILURE;
			}
			free(q);
		}
		
		for (i = 0; vals3[i] != STOP; i++) {
			q = sl_pop(&p);
			if (q->val != vals3[i]) {
				return EXIT_FAILURE;
			}
			free(q);
		}
	}
	
	return 0;
}
