#	$NetBSD: Makefile.inc,v 1.5.28.1 2013/09/23 14:21:20 riz Exp $

S!= cd ${SA_EXTRADIR}/../../../..; pwd

.PATH.c: ${SA_EXTRADIR}
.PATH.S: ${SA_EXTRADIR}

SRC_sa=   dev_net.c

SRC_mvme= exec_mvme.c

SRC_here= bugdev.c \
	  chiptotime.c clock.c \
	  parse_args.c

SRCS+= ${SRC_sa} ${SRC_mvme} ${SRC_here}
