#include <stdio.h>

/* define a struct for a room */
typedef struct { 
  int wall; 
} room_t;

int main( int argc, char** argv ) 
{
  /* make a maze of 10 rooms */
  room_t maze[10];
  int i;

  /* NEW: make a variable for where the player is */
  int location_x = 2;

  /* initialize all rooms to have no wall (0) */
  for( i = 0; i < 10; i++ ) {
    maze[i].wall = 0;
  }

  /* set one room (the fourth room) to have a wall */
  maze[3].wall = 1;

  /* print out all the rooms */
  for( i = 0; i < 10; i++ ) {
    if( i == location_x ) {
      /* player's location */
      fprintf( stdout, "x " );
    }
    else if( maze[i].wall == 1 ) {
      /* wall */
      fprintf( stdout, "##" );
    }
    else {
      /* empty space */
      fprintf( stdout, ". " );
    }
  }

  fprintf( stdout, "\n" );
  return 0;
}

