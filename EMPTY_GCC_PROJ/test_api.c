
#include <stdlib.h>
#include <stdio.h>
#include <inttypes.h> /* gets uint32_t uint8_t also stdint.h and ind-int.h would similarly  but inttypes.h is avail on other platforms*/
#include <myheader.h>

/* test_api.c 
   2010 JC 
   Boilerplate code for gcc projects
*/

int main(int argc , char *argv[])
{
  int x=0;
  printf("hello world from %s\n",argv[0]);
  x = argc; /* avoid compile warnings*/
  return(0);
}
