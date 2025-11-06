#include <stdio.h>

/* define a struct for a room */
typedef struct {
    int wall;
} room_t;

int main( int argc, char** argv )
{
    /* make an array of 10 rooms */
    room_t maze[10];
    int i;

    /* initialize all rooms with no wall (0) */
    for( i = 0; i < 10; i++ ) {
        maze[i].wall = 0;
    }

    /* set room 3 (the fourth room) to have a wall */
    maze[3].wall = 1;

    /* print out all the rooms */
    for( i = 0; i < 10; i++ ) {
        if( maze[i].wall == 1 ) {
            fprintf( stdout, "##" );
        } else {
            fprintf( stdout, ". " );
        }
    }

    fprintf( stdout, "\n" );
    return 0;
}

