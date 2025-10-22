#include <stdio.h>
#include "functions.h"

int main(int argc, char **argv) {
fprintf(stdout, "Content-type: text/html\n\n");

fprintf(stdout, "<html>\n");
fprintf(stdout, "<head><title> Homework 7 </title></head>\n");
fprintf(stdout, "<body>\n");
fprintf(stdout, "<h1> Matrix Multiplication </h1>\n");

int A[row][column];
int B[row][column];
int C[row][column];

create(A);
create(B);
multiply(A, B, C);

fprintf(stdout, "<h2>Matrix A</h2>\n");
print(A);

fprintf(stdout, "<h2>Matrix B</h2>\n");
print(B);

fprintf(stdout, "<h2>Matrix C</h2>\n");
print(C);

fprintf(stdout, "</body>\n</html>\n");

return 0;
}

