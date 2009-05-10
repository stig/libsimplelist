/**
 * @file
 * @brief Code common to tests
 */

#ifndef tests__common_h
#define tests__common_h 1

#include <stdlib.h>
#include "../sl/sl.h"

/**
 * Definition of sl_node for this test.
 */
struct sl_node {
	struct sl_node *next;	/**< next node in list */
	int val;		/**< test integer value */
};

enum {	
	STOP 	= 975		/**< sentinel for looping through array */
};

/* common.c */
struct sl_node *new_node_or_die(int val);
int cmp(void *p1, void *p2);


#endif /* !tests__common_h */
