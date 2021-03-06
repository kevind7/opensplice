ifdef OSPL_OUTER_HOME
include $(OSPL_OUTER_HOME)/setup/armv6l.linux-default.mak
else
include $(OSPL_HOME)/setup/armv6l.linux-default.mak
endif

SPECIAL      = DEBUG

# Compiler flags
CFLAGS_OPT       = -O0
# -DE_DEBUG is needed to enable debugging info for the SACPP apis
CFLAGS_DEBUG     = -g -D_TYPECHECK_ -DE_DEBUG
CFLAGS_STRICT_UNINITIALIZED =
JCFLAGS          = -g

#Csc compiler flags
CSFLAGS_DEBUG    = -define:DEBUG\;TRACE -debug+ -debug:full
