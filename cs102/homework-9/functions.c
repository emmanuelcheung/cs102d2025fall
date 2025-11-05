#include <stdio.h>
#include "functions.h"

int string_length(char* string) {
int i = 0;
while(string[i] != '\0') {
i++;
}
return i;
}

int word_count(char* string) {
int i = 0;
int words = 0;

while (string[i] != '\0') {
if ( (string[i] != ' ') && (string[i] != '\n') && (string[i] != '\0') &&
( (string[i+1] == ' ') || (string[i+1] == '\n') || (string[i+1] == '\0' ) ) ) {
words++;
}
i++;
}
return words;
}

int print_file(char* filename) {
FILE* file;
char scratch[1024];
int lines = 0;
int bytes = 0;
int words = 0;

file = fopen(filename, "r");
if(file == NULL) {
fprintf(stdout, "cannot open file: %s\n", filename);
return 1;
}

while(fgets(scratch, 1024, file) != NULL) {
lines++;
bytes += string_length(scratch);
words += word_count(scratch);
}

fprintf(stdout, "%s %d lines %d words %d bytes\n", filename, lines, words, bytes);

fclose(file);
return 0;
}

