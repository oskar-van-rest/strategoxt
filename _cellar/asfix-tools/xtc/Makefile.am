include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

bin_PROGRAMS 	  = visamb implode-asfix sglri
libexec_PROGRAMS  = asfix-anno-comments
pkgdata_DATA 	  = visamb.pp.af

STRINCLUDES = \
  $(STRATEGO_SGLR_STRCFLAGS) \
  -I $(top_srcdir)/sig \
  -I $(top_srcdir)/lib \
  -I $(XTC)/share/xtc

STRCFLAGS = --main main-$*
LDADD    += $(SSL_LIBS)

implode_asfix_LDADD = $(STRATEGO_SGLR_LIBS) $(SSL_LIBS)
sglri_LDADD = $(STRATEGO_SGLR_LIBS) $(SSL_LIBS)
asfix_anno_comments_LDADD = $(STRATEGO_SGLR_LIBS) $(SSL_LIBS)

CLEANFILES     = $(wildcard *.dep)
BOOTCLEANFILES = visamb.c visamb.pp.af implode-asfix.c sglri.c
EXTRA_DIST     = $(wildcard *.str) visamb.pp visamb.pp.af
