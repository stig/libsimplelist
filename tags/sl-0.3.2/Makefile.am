SUBDIRS 		= . tests

lib_LTLIBRARIES 	= libsl.la
nobase_include_HEADERS 	= sl/sl.h
libsl_la_SOURCES 	= $(nobase_include_HEADERS) sl/sl.c
libsl_la_LDFLAGS	= -no-undefined

man_MANS          = sl/sl.3

%.3: %.c
	-mkdir -p $@ && rmdir $@
	pod2man -r "$(PACKAGE_STRING)" -s 3 -c "SL Reference" -n SL $< > $@

DISTCLEANFILES = $(man_MANS)
