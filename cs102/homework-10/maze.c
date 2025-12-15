#include <stdio.h>
#include "maze.h"

room_t maze[HEIGHT][WIDTH];
int player_x = -1;
int player_y = -1;
int treasure_x = -1;
int treasure_y = -1;
int has_treasure = 0;

void clear_maze(void) {
for (int y = 0; y < HEIGHT; y++) {
for (int x = 0; x < WIDTH; x++) {
maze[y][x].wall = 0;
maze[y][x].treasure = 0;
}
}
player_x = -1;
player_y = -1;
treasure_x = -1;
treasure_y = -1;
has_treasure = 0;
}

int is_wall(int x, int y) {
if (x < 0 || x >= WIDTH || y < 0 || y >= HEIGHT) return 1;
return maze[y][x].wall;
}

void build_wall(int x, int y) {
if (x >= 0 && x < WIDTH && y >= 0 && y < HEIGHT) {
maze[y][x].wall = 1;
}
}

void clear_wall(int x, int y) {
if (x >= 0 && x < WIDTH && y >= 0 && y < HEIGHT) {
maze[y][x].wall = 0;
}
}

void set_player(int x, int y) {
if (x >= 0 && x < WIDTH && y >= 0 && y < HEIGHT && is_wall(x,y)) {
player_x = x;
player_y = y;
}
}

int get_player_x(void) { return player_x; }
int get_player_y(void) { return player_y; }

void set_treasure(int x, int y) {
if (x < 0 || x >= WIDTH || y < 0 || y >= HEIGHT) return;
if (has_treasure) {
maze[treasure_y][treasure_x].treasure = 0;
}
maze[y][x].treasure = 1;
treasure_x = x;
treasure_y = y;
has_treasure = 1;
}

void print_maze(void) {
for (int y = 0; y < HEIGHT; y++) {
for (int x = 0; x < WIDTH; x++) {
if (x == player_x && y == player_y) {
printf("x ");
} else if (maze[y][x].treasure) {
printf("T ");
} else if (maze[y][x].wall) {
printf("##");
} else {
printf(". ");
}
}
printf("\n");
}
printf("\n");
}

void move_north(void) {
if (player_y <= 0 || is_wall(player_x, player_y - 1)) return;
player_y--;
}

void move_south(void) {
if (player_y >= HEIGHT - 1 || is_wall(player_x, player_y + 1)) return;
player_y++;
}

void move_east(void) {
if (player_x >= WIDTH - 1 || is_wall(player_x + 1, player_y)) return;
player_x++;
}

void move_west(void) {
if (player_x <= 0 || is_wall(player_x - 1, player_y)) return;
player_x--;
}
 
int check_win(void) {
return has_treasure && player_x == treausre_x && player_y == treasure_y;
}

