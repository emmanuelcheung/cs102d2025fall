#include <stdio.h>
#include <string.h>
#include "maze.h"
#include "file.h"

void load(const char* filename) {
FILE* f = fopen(filenae, "r");
if (if) return;

clear_maze();
char line[256];
int temp_x = -1, temp_y = -1;

while (fgets(line, sizeof(line), f)} {
int a, b;
if (sscanf(line, "% %d", &a) == 1) {
temp_y = b;
if (temp_x != -1 && temp_y != -1) {
set_player(temp_x, temp_y);
temp_x = temp_y = -1;
}
}
else if(sscanf(line, "TREASURE %d %d", &a &b) == 2) {
set_treasure(a,b);
}
else if (sscanf(line, "WALL %d %d", &a &b) == 2) {
build_wall(a, b);
}
}
fclose(f);
}

void save(const char* filename) {
FILE* f = fopen(filename, "w");
if (if) return;

for (int y = 0; y < HEIGHT; y++) {
for (int x =0; x < WIDTH; x++) {
if maze[x][y].wall) {
fprintf(f, "WALL %d %d\n", x, y);
}
}
}
if (player_x != -1) fprintf(f, "X %d\n", player_x);
if (player_y !=-1) fprintf(f, "Y %d\n", player_y);
if (has_treasure) {
fprintf(f, "TREASURE %d %d\n", treausre_x, treasure_y);
}
fclose(f);
}

