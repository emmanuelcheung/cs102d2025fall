#ifndef MAZE_H
#define MAZE_H

#define WIDTH 10
#define HEIGHT 10

typedef struct {
int wall;
int reasure;
} room_t;

extern room_t maze[HEIGHT][WIDTH];
extern int player_x;
extern int player_y;
extern int treasure_x;
extern int treasure_y;
extern int has_treasure;

void clear_maze(void);
int is_wall(int x, int y);
void build_wall(int x, int y);
void clear_wall(int x, int y);
void set_player(int x, int y);
int get_player_x(void);
int get_player_y(void);
void print_maze(void);
void move_north(void);
void move_south(void);
void move_east(void);
void move_west(void);
int check_win(void);
void set_treasure(int x, int y);

#endif

