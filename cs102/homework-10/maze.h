#include <stdio.h>
typedef struct { int wall; int treasure; } room_t;

void clear_maze();
int is_wall(int x, int y);
void build_wall(int x, int y);
void clear_wall(int x, int y);
void set_location_x(int x);
void set_location_y(int y);
int get_location_x();
int get_location_y();
void print_maze();
void move_right();
void move_left();
void move_up();
void move_down();
void save(char* filename);
int is_treasure(int x, int y);
void set_treasure_xy(int x, int y);

