#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include "lab6func.h"


int main(int argc, char **argv)
{
srand48(getpid());
int matrix[5][5];
int matrix2[5][5];
int matrix3[5][5];
fill(matrix);
fill(matrix2);
add(matrix,matrix2,matrix3);
print(matrix);
print(matrix2);
print(matrix3);
return 0;
}
