#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

void fill(int array[10]) {       
int i;
for(i=0; i<10; i=i+1) {
array[i] = mrand48() % 101;
}
}
 
void print(int array[10]) {
int i;
for(i=0; i<10; i=i+1) {
fprintf(stdout, "%d\n", array[i]);
}
}

