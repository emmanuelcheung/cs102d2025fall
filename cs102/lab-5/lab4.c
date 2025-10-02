#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include "lab4func.h"

int main(int argc, char **argv) {
int array[10];
srand48(getpid());
fill(array);
print(array);
return 0;
}
