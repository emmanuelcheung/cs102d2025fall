#include <stdio.h>
int main( int argc, char **argv ) {
   char line_of_stuff[1024] = "hello 123";
   char word[100];
   int  number;

   if( sscanf( line_of_stuff, "%s %d", word, &number ) == 2 ) {
     fprintf( stdout, "yes, we successfully pulled the word '%s' and number '%d' out of the line\n",
       word, number );
   }

   if( sscanf( line_of_stuff, "%s %d", word, &number ) == 1 ) {
     fprintf( stdout, "this won't happen because we were looking for two things but asked if we found 1\n" );
   }

   if( sscanf( line_of_stuff, "hello %d", &number ) == 1 ) {
     fprintf( stdout, "but if we look for only one placeholder and ask if we found one, it works\n" );
   }

   if( sscanf( line_of_stuff, "goodbye %d", &number ) == 1 ) {
     fprintf( stdout, "but not if we tell it explicitly that it should start with text that isn't there\n" );
   }
}
