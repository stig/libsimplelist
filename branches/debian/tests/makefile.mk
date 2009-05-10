check_PROGRAMS                    = tests/test-count            \
                                    tests/test-push-pop         \
                                    tests/test-shift-unshift    \
                                    tests/test-free             \
                                    tests/test-reverse          \
                                    tests/test-filter           \
                                    tests/test-map              \
                                    tests/test-split            \
                                    tests/test-merge            \
                                    tests/test-mergesort

# helper library
noinst_LTLIBRARIES                = libtest.la
libtest_la_LIBADD                 = libsl.la
libtest_la_SOURCES                = tests/common.h tests/common.c

# add helper library to all tests
ldflags                           = -L$(top_srcdir) -ltest 

tests_test_free_SOURCES           = tests/test-free.c
tests_test_free_LDFLAGS           = $(ldflags)

tests_test_push_pop_SOURCES       = tests/test-push-pop.c
tests_test_push_pop_LDFLAGS       = $(ldflags)

tests_test_shift_unshift_SOURCES  = tests/test-shift-unshift.c
tests_test_shift_unshift_LDFLAGS  = $(ldflags)

tests_test_reverse_SOURCES        = tests/test-reverse.c
tests_test_reverse_LDFLAGS        = $(ldflags)

tests_test_count_SOURCES          = tests/test-count.c
tests_test_count_LDFLAGS          = $(ldflags)

tests_test_filter_SOURCES         = tests/test-filter.c
tests_test_filter_LDFLAGS         = $(ldflags)

tests_test_map_SOURCES            = tests/test-map.c
tests_test_map_LDFLAGS            = $(ldflags)

tests_test_split_SOURCES          = tests/test-split.c
tests_test_split_LDFLAGS          = $(ldflags)

tests_test_merge_SOURCES          = tests/test-merge.c
tests_test_merge_LDFLAGS          = $(ldflags)

tests_test_mergesort_SOURCES      = tests/test-mergesort.c
tests_test_mergesort_LDFLAGS      = $(ldflags)

TESTS                             = $(check_PROGRAMS)

clean-local:
	rm -rf tests/.libs
