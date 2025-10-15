#include <stdio.h>
#include "function.h"

int string_length (char* string)
{
int i = 0;
while (string[i] != '\0')
{
 i = i + 1;
}
return i;
}

void reverse_string( char* string )
{
 int i = 0;
int last = string_length(string) - 1;
char extra;

while ( i < last)
{
extra = string[i];
string[i] = string[last];
string[last] = extra;

i = i + 1;
last = last -1;
}
}

