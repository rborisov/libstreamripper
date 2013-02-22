## Process this file with automake to produce Makefile.in
## Created by Anjuta

SUBDIRS = src 

libstreamripperdocdir = ${prefix}/doc/libstreamripper
libstreamripperdoc_DATA = \
	README\
	COPYING\
	AUTHORS\
	ChangeLog\
	INSTALL\
	NEWS

libstreamripper_CFLAGS = $(GLIB_CFLAGS)
libstreamripper_LIBS = $(GLIB_LIBS)


EXTRA_DIST = $(libstreamripperdoc_DATA)

CLEANFILES = $(shell find . -name "*~")



# Remove doc directory on uninstall
uninstall-local:
	-rm -r $(libstreamripperdocdir)
