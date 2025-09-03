#include <stdio.h>
#include "clockfunctions.h"
int main( int argc, char** argv )
{
  /* I definitely need to do sixty things, then
  a chime */
  int current_minute = 0;
  while( current_minute<60 )
  {
    something_per_minute(current_minute);
    current_minute=current_minute+1;
  }
  sound_chime();
}
