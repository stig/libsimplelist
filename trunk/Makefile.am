CFLAGS = -W -Wall -Werror

include $(srcdir)/sl/makefile.mk
include $(srcdir)/tests/makefile.mk

SHLIB		= .libs/libsl.0.dylib
FW		= $(PACKAGE_NAME).framework
FWDIR		= $(FW)/Versions/A
FWHEADERS	= $(FWDIR)/Headers
FWLIB		= $(FWDIR)/$(PACKAGE_NAME)

fw: $(lib_LTLIBRARIES)
	-rm -rf $(FW) && mkdir -p $(FWHEADERS)
	cp $(nobase_include_HEADERS) $(FWHEADERS)
	cp $(SHLIB) $(FWLIB)
	install_name_tool -id @executable_path/../Frameworks/$(FWLIB) $(FWLIB)
	cd $(FWDIR)/.. && ln -sf A Current 
	cd $(FW) && ln -sf Versions/Current/$(PACKAGE_NAME) .

# Create manpages
%.3: %.c
	-mkdir -p $@ && rmdir $@
	pod2man -r "$(PACKAGE_STRING)" -s 3 -c "SL Reference" -n SL $< > $@

DISTCLEANFILES = $(man_MANS)
