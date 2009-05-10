check_PROGRAMS 			= test-count		\
				  test-push-pop		\
				  test-shift-unshift	\
				  test-free		\
				  test-reverse		\
				  test-map 		\
				  test-split		\
				  test-merge		\
				  test-mergesort

LDFLAGS				= -L$(top_builddir) -lsl

# Source common for all the tests
COMMON				= common.h common.c

test_free_SOURCES 		= $(COMMON) test-free.c
test_push_pop_SOURCES 		= $(COMMON) test-push-pop.c
test_shift_unshift_SOURCES 	= $(COMMON) test-shift-unshift.c
test_reverse_SOURCES 		= $(COMMON) test-reverse.c
test_count_SOURCES 		= $(COMMON) test-count.c
test_map_SOURCES 		= $(COMMON) test-map.c
test_split_SOURCES 		= $(COMMON) test-split.c
test_merge_SOURCES 		= $(COMMON) test-merge.c
test_mergesort_SOURCES 		= $(COMMON) test-mergesort.c

TESTS				= $(check_PROGRAMS)
