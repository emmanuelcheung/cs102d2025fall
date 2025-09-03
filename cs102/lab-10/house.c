#include <stdio.h>
int main( int argc, char** argv )
{
  int house = 1;
  int* map_to_house = &house; /* the address of house */
  fprintf(stdout, "what's at the house pointed to by the map? %d\n", *map_to_house);
  *map_to_house = 2; /* follow the map and put a 2 at wherever it leads */
  fprintf(stdout, "what's at the house pointed to by the map? %d\n", *map_to_house);
  int other_house = 3;
  map_to_house = &other_house; /* redraw the map to point to the other house */
  fprintf(stdout, "what's at the house pointed to by the map? %d\n", *map_to_house);
}
