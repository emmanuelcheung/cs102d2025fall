#include <stdio.h>
#include "maze.h"
#include "file.h"

static room_t maze[10][10];
static int location_x;
static int location_y;
static int location_xy;

void move_down()
{
	int copy_location_y = location_y;
	copy_location_y = copy_location_y + 1;
	if( is_wall(location_x, copy_location_y) == 0)
	{
		if ((copy_location_y <= 9))
		{
			set_location_y(copy_location_y);
		}
	}	
}

void move_up() 
{
        int copy_location_y = location_y;
        copy_location_y = copy_location_y - 1;
        if( is_wall(location_x, copy_location_y) == 0)
        {
                if ((copy_location_y >= 0))
                { 
			set_location_y(copy_location_y);
                }
        }           
}

void move_right()
{
	int copy_location_x = location_x;
	copy_location_x = copy_location_x + 1;
	if( is_wall(copy_location_x, location_y) == 0)
	{
		if ((copy_location_x <= 9))
		{
			set_location_x(copy_location_x);
		}
	}	
}

void move_left()
{
	int copy_location_x = location_x;
	copy_location_x = copy_location_x - 1;
	if( is_wall(copy_location_x, location_y) == 0)
	{
		if ((copy_location_x >= 0))
		{
			set_location_x(copy_location_x);
		}
	}	
}

void set_location_x(int x)
{
	location_x = x;
}

void set_location_y(int y)
{
	location_y = y;
}

int get_location_x()
{
	return location_x;
}

int get_location_y()
{
	return location_y;
}

void print_maze()
{
	int i = 0;
        int j = 0;
        for( j=0; j<10; j++ )
        {
                for( i=0; i<10; i++ )
                {
                        if( i == location_x && j == location_y)
                        {
                                fprintf(stdout, "x ");
                        }
                        else if( is_wall(i, j) == 1)
                        {
                                fprintf(stdout, "##");
                        }   
                        else if( is_treasure(i, j) == 1)
                        {
                                fprintf(stdout, "T ");
                        }
                        else
                        {
                                fprintf(stdout, ". ");
                        }
                }
                fprintf(stdout, "\n");
                
        }
        fprintf(stdout, "\n");
}
        
void clear_maze()
{
        int i = 0;
        int j = 0;
        for( i=0; i<10; i++ )
        {
                for( j=0; j<10; j++ )
                {
                        maze[i][j].wall=0;
			maze[i][j].treasure=0;
                        set_location_x(1);
                        set_location_y(1);
                }
        }
}
                                
int is_wall(int x, int y)
{
        return maze[x][y].wall;
}
                 
void build_wall(int x, int y)
{
        maze[x][y].wall = 1;
}
                
void clear_wall(int x, int y)
{
        maze[x][y].wall = 0;
}
        
int is_treasure(int x, int y)
{
        return maze[x][y].treasure;
}

void set_treasure_xy(int x, int y)
{
        maze[x][y].treasure = 1;
}

