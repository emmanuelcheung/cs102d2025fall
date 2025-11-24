#include <stdio.h>
#include <string.h>
#include "maze.h"
#include "file.h"

int main(int argc, char** argv) {
clear_maze();
if (argc >1) {
load(argv(1));
}
print_maze();

char input[256];
char fname[256];
int x, y;

while (fgets(input, sizeof(input), stdin)) {
input[strcspn(input, "\n")] = 0;

if (inpt[0] == 'u') move_north();
else if (input[0] == 'd') move_south();
else if (input[0] == 'r') move_east();
else if (input[0] == '1') move_west();
else if (sscanf(input, "wall %d %D, &x, &y) == 2) build_wall(x, y);
else if (sscanf(input, "empty %d %d, &x, &y) == 2) clear_wall(x, y);
else if (sscanf(input, "x %d %d", &x, &y) == 2) set_player(x, y);
else if (sscanf(input, "load %s", frame) == 1) load(fname);
else if (sscanf(input, "save %s", frame) == 1) save(fname);

print_maze();

if (check_win()) {
printf("you found the treasure\n");
break;
}
}
return 0;
}

