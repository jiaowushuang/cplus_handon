#
# Internetworking with TCP/IP, Volume III telnet example Makefile
#
#	David L Stevens, Internetworking Research Group at Purdue
#	Fri Mar 20 21:13:40 EST 1992
#

INCLUDE =

PROG = telnet

DEFS =
CFLAGS = -pedantic -ansi -g ${DEFS} ${INCLUDE}

HDR =
SRC =	cerrexit.c	connectTCP.c	connectUDP.c	connectsock.c	\
	dcon.c		do_echo.c	do_noga.c	do_notsup.c	\
	do_txbinary.c	errexit.c	fsmbuild.c	fsminit.c	\
	sonotsup.c	sofsm.c		tclient.c	recopt.c	\
	scrgetc.c	scrinit.c	scrwrap.c	soputc.c	\
	sowrite.c	status.c	subend.c	subfsm.c	\
	subopt.c	subtermtype.c	suspend.c	sync.c		\
	tcout.c		telnet.c	tnabort.c	ttfsm.c		\
	ttputc.c	ttysetup.c	ttwrite.c	unscript.c	\
	will_notsup.c	will_termtype.c	will_txbinary.c	xput.c
OBJ =	cerrexit.o	connectTCP.o	connectUDP.o	connectsock.o	\
	dcon.o		do_echo.o	do_noga.o	do_notsup.o	\
	do_txbinary.o	errexit.o	fsmbuild.o	fsminit.o	\
	sonotsup.o	sofsm.o		tclient.o	recopt.o	\
	scrgetc.o	scrinit.o	scrwrap.o	soputc.o	\
	sowrite.o	status.o	subend.o	subfsm.o	\
	subopt.o	subtermtype.o	suspend.o	sync.o		\
	tcout.o		telnet.o	tnabort.o	ttfsm.o		\
	ttputc.o	ttysetup.o	ttwrite.o	unscript.o	\
	will_notsup.o	will_termtype.o	will_txbinary.o	xput.o

all: ${PROG}

${PROG}: ${OBJ}
	${CC} -o $@ ${CFLAGS} ${OBJ} -ltermcap

clean: FRC
	rm -f Makefile.bak a.out core errs lint.errs ${PROG} *.o

depend: ${HDR} ${SRC} FRC
	maketd -a ${DEFS} ${INCLUDE} ${SRC}

install: all FRC
	@echo "Your installation instructions here."

lint: ${HDR} ${SRC} FRC
	lint ${DEFS} ${INCLUDE} ${SRC}

print: Makefile ${SRC} FRC
	lpr Makefile ${HDR} ${SRC}

spotless: clean FRC
	rcsclean Makefile ${HDR} ${SRC}

tags: ${SRC}
	ctags ${SRC}

${HDR} ${SRC}:
	co $@

FRC:
	
# DO NOT DELETE THIS LINE - maketd DEPENDS ON IT
S=/usr/include/sys
I=/usr/include

cerrexit.o: $I/sgtty.h $I/stdio.h $S/ioctl.h $S/ttychars.h $S/ttydev.h \
	$I/varargs.h cerrexit.c local.h

connectTCP.o: connectTCP.c

connectUDP.o: connectUDP.c

connectsock.o: $I/netdb.h $I/netinet/in.h $S/socket.h $S/types.h connectsock.c

dcon.o: $I/sgtty.h $I/stdio.h $S/ioctl.h $S/ttychars.h $S/ttydev.h dcon.c \
	local.h

do_echo.o: $I/sgtty.h $I/stdio.h $S/ioctl.h $S/ttychars.h $S/ttydev.h \
	$S/types.h do_echo.c telnet.h

do_noga.o: $I/stdio.h $S/types.h do_noga.c telnet.h

do_notsup.o: $I/stdio.h $S/types.h do_notsup.c telnet.h

do_txbinary.o: $I/stdio.h $S/types.h do_txbinary.c telnet.h

errexit.o: $I/stdio.h $I/varargs.h errexit.c

fsmbuild.o: $I/stdio.h $S/types.h fsmbuild.c tnfsm.h

fsminit.o: $S/types.h fsminit.c tnfsm.h

sonotsup.o: $I/stdio.h sonotsup.c

sofsm.o: $I/stdio.h $S/types.h sofsm.c telnet.h tnfsm.h

tclient.o: tclient.c

recopt.o: $I/stdio.h $S/types.h recopt.c

scrgetc.o: $I/sgtty.h $I/stdio.h $S/ioctl.h $S/ttychars.h $S/ttydev.h local.h \
	scrgetc.c

scrinit.o: $I/sgtty.h $I/stdio.h $S/ioctl.h $S/ttychars.h $S/ttydev.h local.h \
	scrinit.c telnet.h

scrwrap.o: $I/sgtty.h $I/stdio.h $S/file.h $S/ioctl.h $S/ttychars.h \
	$S/ttydev.h local.h scrwrap.c

soputc.o: $I/sgtty.h $I/stdio.h $S/ioctl.h $S/ttychars.h $S/ttydev.h \
	$S/types.h local.h soputc.c telnet.h

sowrite.o: $I/stdio.h $S/types.h sowrite.c tnfsm.h

status.o: $I/netinet/in.h $I/stdio.h $S/socket.h $S/types.h status.c

subend.o: $I/stdio.h $S/types.h subend.c tnfsm.h

subfsm.o: $I/stdio.h $S/types.h subfsm.c telnet.h tnfsm.h

subopt.o: $I/stdio.h $S/types.h subopt.c telnet.h tnfsm.h

subtermtype.o: $I/stdio.h $S/types.h subtermtype.c telnet.h

suspend.o: $I/sgtty.h $I/stdio.h $S/ioctl.h $S/signal.h $S/ttychars.h \
	$S/ttydev.h $S/types.h local.h suspend.c

sync.o: $I/stdio.h sync.c

tcout.o: $I/stdio.h tcout.c

telnet.o: $I/sgtty.h $I/stdio.h $S/errno.h $S/ioctl.h $S/signal.h $S/socket.h \
	$S/time.h $S/ttychars.h $S/ttydev.h $S/types.h local.h telnet.c

ttfsm.o: $I/sgtty.h $I/stdio.h $S/ioctl.h $S/ttychars.h $S/ttydev.h $S/types.h \
	local.h telnet.h tnfsm.h ttfsm.c

ttputc.o: $I/stdio.h $S/types.h telnet.h ttputc.c

ttysetup.o: $I/sgtty.h $I/stdio.h $S/ioctl.h $S/ttychars.h $S/ttydev.h local.h \
	ttysetup.c

ttwrite.o: $I/stdio.h $S/types.h tnfsm.h ttwrite.c

unscript.o: $I/sgtty.h $I/stdio.h $S/ioctl.h $S/stat.h $S/ttychars.h \
	$S/ttydev.h $S/types.h local.h unscript.c

will_notsup.o: $I/stdio.h $S/types.h telnet.h will_notsup.c

will_termtype.o: $I/stdio.h $S/types.h telnet.h will_termtype.c

will_txbinary.o: $I/stdio.h $S/types.h telnet.h will_txbinary.c

xput.o: $I/stdio.h xput.c

# *** Do not add anything here - It will go away. ***
