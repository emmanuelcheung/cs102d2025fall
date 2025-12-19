#include <stdio.h>
#include <stdlib.h>
#include "maze.h"
#include "file.h"

int main ( int argc, char** argv)
{
	clear_maze();

	fprintf(stdout, "\n");
	fprintf(stdout,"type either l or r and hit enter to move left or right\n");
	fprintf(stdout,"hit CTRL-D or CTRL-C to exit\n");
	fprintf(stdout,"\n");
	int i = 0;
	int j = 0;

	char scratchpad[1024];
	char savefile[1024];
	if( argc > 1)
	{
		load(argv[1]);
	}
	print_maze();
	while( fgets( scratchpad, 1024, stdin ) != NULL )
  	{
		if( sscanf( scratchpad, "save %s", savefile) == 1)
		{
			save(savefile);
		}
		else if( sscanf( scratchpad, "load %s", savefile) == 1)
		{
			load(savefile);
		}
		else if( scratchpad[0] == 'u')
		{
			move_up();
		}
		else if( scratchpad[0] == 'd')
		{
			move_down();
		}
		else if( scratchpad[0] == 'l')
		{
			move_left();
		}
		else if( scratchpad[0] == 'r')
		{
			move_right();
		}
		else if( sscanf( scratchpad, "x %d", &i) == 1)
		{
			set_location_x(i);
		}
		else if( sscanf( scratchpad, "y %d", &j) == 1)
		{
			set_location_y(j);
		}
		else if( sscanf( scratchpad, "wall %d %d", &i, &j) == 2)
		{
			build_wall(i,j);
		}
		else if( sscanf( scratchpad, "empty %d %d", &i, &j) == 2)
		{
			clear_wall(i,j);
		}
		else if( sscanf( scratchpad, "treasure %d %d", &i, &j) == 2)
		{
			set_treasure_xy(i,j);
		}
		if( is_treasure(get_location_x(), get_location_y()))
		{
			print_maze();
			fprintf(stdout, "You Win!\n");
			exit(0);
		}

		print_maze();
	}
}

