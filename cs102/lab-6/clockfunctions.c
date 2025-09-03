#include <stdio.h>
#include "clockfunctions.h"
void something_per_minute(int minute)
{
  fprintf(stdout,"something_per_minute(%d)\n",minute);
}
void sound_chime(void)
{
  fprintf(stdout,"sound_chime()\n");
}
