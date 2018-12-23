#
# rpcgen example Makefile
# Internetworking with TCP/IP, Volume III
#

PROGS = dict rdict rdictd

DEFS = 
CFLAGS = -g ${DEFS} ${INCLUDE}

SRC = dict.c dict1.c dict2.c rdict.c rdict.x rdict_cif.c rdict_sif.c	\
	rdict_srp.c
GFILES = rdict.h rdict_clnt.c rdict_svc.c rdict_xdr.c

RDICT_OBJ = rdict_clnt.o rdict_cif.o rdict.o
RDICTD_OBJ = rdict_svc.o rdict_sif.o rdict_srp.o

all: ${PROGS} dict1.o dict2.o

rdict: ${RDICT_OBJ} rdict_xdr.o
	${CC} ${CFLAGS} -o $@ ${RDICT_OBJ} rdict_xdr.o -lrpc

rdictd: ${RDICTD_OBJ} rdict_xdr.o
	${CC} ${CFLAGS} -o $@ ${RDICTD_OBJ} rdict_xdr.o -lrpc

dict: dict.c
	${CC} ${CFLAGS} -o $@ dict.c

dict1.o dict2.o ${RDICT_OBJ} ${RDICTD_OBJ} rdict_xdr.o:
	${CC} ${CFLAGS} -c $*.c

${GFILES}: rdict.x
	rpcgen rdict.x

clean: FRC
	rm -f Makefile.bak a.out tags core make.out ${PROGS} ${GFILES} *.o

install: all FRC
	@echo nothing to install.

print: Makefile ${SRC} FRC
	lpr -J"${PROG} source" Makefile ${SRC}

tags: ${SRC}
	ctags ${SRC}

FRC:
	
rdict: rdict.c ${RDICT_OBJ} ${GFILES} rdict.x
rdictd: ${RDICTD_OBJ} ${GFILES} rdict.x

