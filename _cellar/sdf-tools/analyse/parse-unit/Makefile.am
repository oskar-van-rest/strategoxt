include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SUBDIRS = syn sig tests
BOOTCLEAN_SUBDIRS = $(SUBDIRS)

bin_PROGRAMS = parse-unit

UNINSTALLED_LIB = \
  $(top_srcdir)/../stratego-libraries/sglr/lib/libstratego-sglr.la \
  $(top_srcdir)/../stratego-libraries/aterm/lib/libstratego-aterm.la

parse_unit_LDADD = $(STRATEGO_SGLR_LIBS) $(STRATEGO_ATERM_LIBS) $(SSL_LIBS)

STRCFLAGS   = --main main-$* 
STRINCLUDES = \
  -I $(XTC)/share/xtc \
  -I $(ATERM_FRONT)/share/aterm-front \
  -I $(top_srcdir)/../aterm-front/syn \
  $(STRATEGO_SGLR_STRCFLAGS) \
  -I sig

EXTRA_DIST     = $(wildcard *.str) $(wildcard *.meta)
CLEANFILES     = $(wildcard *.dep)
BOOTCLEANFILES = $(wildcard *.c)

LDADD += $(SSL_LIBS)
