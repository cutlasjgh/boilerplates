//  main_withsignal.c
// this should allow a test of signal handler.
// adding multithreading to this simulator so can test multithread
// 2010 JC

#include <stdlib.h>
#include <stdio.h>
#include <inttypes.h> 
#include <unistd.h>
#include <pthread.h>


//CTRL-C and other signals handler, see the s_catch_signals which registers our handler
static void signal_handler(int sig)
{
    sig = sig; // avoid compile warning by using an unused variable
    fprintf(stderr, "signal received, exiting ...\n");
    exit(0);
}

static void s_catch_signals(void) {
        /* install a signal handler to properly quit  */
#ifdef WIN32
    signal(SIGINT, signal_handler);
    signal(SIGABRT, signal_handler);
    signal(SIGTERM, signal_handler);
#else
    signal(SIGQUIT, signal_handler);
    signal(SIGTERM, signal_handler);
    signal(SIGHUP, signal_handler);
    signal(SIGINT, signal_handler);
#endif
}

//  Sleep for a number of milliseconds
static void
ms_sleep (int msecs)
{
#if (defined (WIN32))
    Sleep (msecs);
#else
    struct timespec t;
    t.tv_sec  =  msecs / 1000;
    t.tv_nsec = (msecs % 1000) * 1000000;
    nanosleep (&t, NULL);
#endif
}


int main (void)
{
        
    s_catch_signals();

    ms_sleep(200); //sleep 200ms not sure if necessary


    printf("main has started, feel free to ctrl-C or crash it.\n");
    
    //  now loop
    while (1) 
        {
        printf("Looping \n");
		ms_sleep (100); 
        } // end while
    return 0;
}





