# This is a shell archive.  Remove anything before this line, then
# unpack it by saving it in a file and typing "sh file".  (Files
# unpacked will be owned by you and have default permissions.)
#
# This archive contains:
# Makefile ping.1 ping.c ping.shar newping.1 newping.c

echo x - Makefile
cat > "Makefile" << '//E*O*F Makefile//'
# Revised to compile under SunOS 4.1.x (no longer necessary to install
# kernel mods).  08/07/92 RJRJr  This makefile is based on the original
# makefiles supplied with tcpdump and traceroute.

# Set DESTDIR to the directory in which the traceroute executable will be
# installed.  /usr/etc is a good place to put a network debugging tool such
# as this.

DESTDIR= /usr/brl/sbin
MANDIR= /usr/brl/man/man1

# You shouldn't need to change anything below this line.
CC= cc
CFLAGS = -O
# At the moment, the INCL variable isn't really needed for anything.
INCL = -I.
LIBS = 

# Script (or program) that returns the machine and os types,
# or just edit in the name yourself.
MD=`mdtype`
OS=`ostype`

# Explicitly define compiliation rule since SunOS 4's make doesn't like gcc.
# Also, gcc does not remove the .o before forking 'as', which can be a
# problem if you don't own the file but can write to the directory.
.c.o:
  rm -f $@; $(CC) $(CFLAGS) -c $*.c

all: submake

ping: ping.o
	$(CC) $(CFLAGS) $(INCL) -o ping ping.o $(LIBS)

submake:
	-@dir=$(MD)-$(OS); set -x; \
	if [ ! -d $$dir ]; then ${MAKE} ${MFLAGS} config; fi; \
	if [ -n "`find Makefile -newer $$dir/Makefile -print`" ]; \
	  then ${MAKE} ${MFLAGS} config; fi; \
	cd $$dir; ${MAKE} ${MFLAGS} ping

# N.B.- symbolic links are used in the subdirectory rather than VPATH
# because at least one Sun cc compiler puts the .o in the wrong place
# when using VPATH and it's almost impossible to get "make depend" to
# do the right thing.
config: 
	-@dir=$(MD)-$(OS); set -x; \
	mkdir $$dir; chmod ug+w $$dir; ln -s ../ping.c $$dir; \
	sed -e "/^all:/d" Makefile >$$dir/Makefile; \
	chmod ug+w $$dir/Makefile; \
	cd $$dir; ${MAKE} ${MFLAGS} depend
install: submake FRC
	-@dir=$(MD)-$(OS); set -x; \
	install -c -o root -g bin -m 4755 $$dir/ping ${DESTDIR}; \
	install -c -o root -g staff -m 664 ping.1 ${MANDIR}
lint:
	lint -hbxn $(INCL) ping.c | \
	    grep -v 'possible pointer alignment problem'
clean:
	-@dir=$(MD)-$(OS); set -x; rm -rf $$dir
FRC:
depend:
	cc -M ping.c | sed 's/\.o//' | \
	awk ' { if ($$1 != prev) \
		{ if (rec != "") print rec; rec = $$0; prev = $$1; } \
		else { if (length(rec $$2) > 78) { print rec; rec = $$0; } \
		else rec = rec " " $$2 } } \
		END { print rec } ' >> makedep;
	echo '/^# DO NOT DELETE THIS LINE/+2,$$d' >eddep;
	echo '$$r makedep' >>eddep;
	echo 'w' >>eddep;
	cp Makefile Makefile.bak;
	ed - Makefile < eddep;
	rm eddep makedep;
	echo '# DEPENDENCIES MUST END AT END OF FILE' >> Makefile;
	echo '# IF YOU PUT STUFF HERE IT WILL GO AWAY' >> Makefile;
	echo '# see make depend above' >> Makefile;

# DO NOT DELETE THIS LINE -- make depend uses it




//E*O*F Makefile//
