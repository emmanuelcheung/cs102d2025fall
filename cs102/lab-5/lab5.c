#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include "lab5func.h"

int main(int argc, char **argv) {
int matrix[5][5];
srand48(getpid());
fill(matrix);
print(matrix);
return 0;
}
