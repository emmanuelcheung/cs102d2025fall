#include <stdio.h>
#include "functions.h"

void create(int m[row][column]) {
int i, j, n = 1;
for (i = 0; i < row; i++) {
for(j = 0; j < column; j++) {
m[i][j] = n;
n++;
}
}
}


void multiply(int a[row][column], int b[row][column], int c[row][column]) {
int i, j ,k;
for (i = 0; i < row; i++) {
for (j=0; j < column; j++) {
c[i][j] = 0;
for (k=0; k<column; k++) {
c[i][j] += a[i][k] * b[k][j];
}
}
}
}

void print( int m[row][column]) {
int i,j;
fprintf(stdout, "<table border=1>\n");
for (i=0; i < row; i++) {
fprintf(stdout, "<tr>");
for (j=0; j < column; j++) {
fprintf(stdout, "<td>%d</td>", m[i][j]);
}
fprintf(stdout, "</tr>\n");
}
fprintf(stdout, "</table>\n");
} 

