/*
 * (c) 2015 Julian Vera
 * This program acts as two: little.c, that exits with status 0 if is
 * running on a little-endian machine, and 1 otherwise. If the executable is 
 * named big it exits with status 0 if it is running on a big-endian machine,
 * and 1 otherwise.
 *  if little ; then echo little; else big; fi
 *  if big ; then echo big; else echo little; fi
 */

#include <stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char *argv[]) 
{
  //int used to determine endianness
   unsigned int i = 1;

   //c is pointing to an integer but we are only worried about the first bit
   //of the number so we use a char. If the machine is little endian *c will be 1 
   char *c = (char*)&i;

   //little c exits with status 0 if it's running on a little-endian machine
   //if the executable is big it exits with status 0
   // it's really an XOR between the inverse of the executable and *c
   exit(!strncmp(argv[0],"./little",6) ^ *c);
}
