#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include "lab5func.h"

void fill(int matrix[5][5]) {       
int i,j;
for(i=0; i<5; i=i+1) {
for(j=0; j<5;j=j+1)
{
matrix[i][j] = mrand48() % 101;
}
}
}
 
void print(int matrix[5][5]) {
  int i,j;
  
  for(i=0; i<5; i=i+1) {
    
    for (j=0;j<5;j=j+1)
    {
    fprintf(stdout, "%d", matrix[i][j]);
    }
    fprintf(stdout, "\n");
  }
  
}

