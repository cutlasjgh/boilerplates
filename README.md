# boilerplates
starter code templates

Directories:

EMPTY_GCC_PROJ

For now just a C Makefile and api and main code files. The Makefile will compile 2 executables 

test_api.c will compile and it already includes the header for the api and links with api etc. Just call the api code from there.

main_withsignal.c is a main.c that I put signal handler examples into. Signalhandler function gets called when controlC or executable crashes. Should work in Linux and Windows, even cygwin.

myapi.c is the api library file. Put library functions in here. The Makefile should turn the myapi.c into a libmylib.a and the test_api.c will link with libmylib.a.

Requires make and gcc (or change Makefile's CC line to use a different compiler)


