#include <stdio.h>
#include "maze.h"
#include "file.h"

void load(char* filename)
{
	FILE* file;
	char scratch[1024];
	file = fopen( filename, "r");
	clear_maze();
	int i = 0;
        int j = 0;
	if (file != NULL)
        {
                while( fgets( scratch, 1024, file ) != NULL )
                {
                	if( sscanf( scratch, "WALL %d %d", &i, &j) == 2)
                	{
                        	build_wall(i,j);
                	}
			if( sscanf( scratch, "X %d", &i) == 1)
                        {
                                set_location_x(i);
                        }
                        if( sscanf( scratch, "Y %d", &j) == 1)
                        {
                                set_location_y(j);
                        }
                        if( sscanf( scratch, "TREASURE %d %d", &i, &j) == 2)
                        {
                                set_treasure_xy(i, j);
                        }
		}
	}
	fclose(file);
}

void save(char* filename)
{
        FILE* file;
	char savefile[1024];
	file = fopen( filename, "w");
        int i = 0;
        int j = 0;
	if(file != NULL)
        {
		for( j=0; j<10; j++ )
        	{
                	for( i=0; i<10; i++ )
                        {
                                if(is_wall(i,j) == 1)
                                {
                                        fprintf(file, "WALL %d %d\n", i, j);
                                }
                                if(is_treasure(i,j) == 1)
                                {
                                        fprintf(file, "TREASURE %d %d\n", i, j);
                                }
                        }
                }
        }
	int new_x = get_location_x();
        int new_y = get_location_y();
	fprintf(file, "X %d\n", new_x);
        fprintf(file, "Y %d\n", new_y);
        fclose(file); 
}

