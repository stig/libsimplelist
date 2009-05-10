lib_LTLIBRARIES		= libsl.la

nobase_include_HEADERS	= sl/sl.h
libsl_la_SOURCES	= sl/sl.c
libsl_la_LDFLAGS	= -no-undefined -version-info 1:1:1

man_MANS		= sl/sl.3


