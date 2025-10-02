
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include "homework5func.h"

void fill8x12(int array[8][12]) 
{       
  int i,j;
  for(i=0; i<8; i=i+1) 
  {
    for(j=0; j<12;j=j+1)
    {
      array[i][j] = (mrand48() % 101+100)/2;
    }
  }
}

void fill12x8(int array[12][8]) {
int i,j;
for(i=0; i<12; i=i+1) {
for(j=0; j<8;j=j+1)
{
array[i][j] = (mrand48() % 101+100)/2;
}
}
}
 
void print8x12(int array[8][12])
{
  int i,j;
  
  for(i=0; i<8; i=i+1)
  {
    
    for (j=0;j<12;j=j+1)
    {
    fprintf(stdout, "%6d", array[i][j]);
    }
    fprintf(stdout, "\n");
  }
  
}
void print12x8(int array[12][8])  
{ 
  int i,j;
  
  for(i=0; i<12; i=i+1)  
  { 
    
    for (j=0;j<8;j=j+1)
    {
      fprintf(stdout, "%6d", array[i][j]);
    }
    fprintf(stdout, "\n");
  }
}

void print12x12(int array[12][12])
{   
  int i,j;
      
  for(i=0; i<12; i=i+1)
  {   
    
    for (j=0;j<12;j=j+1)
    {
      fprintf(stdout, "%6d", array[i][j]);
    }
    fprintf(stdout, "\n");
  } 
} 

void cross ( int array [8][12], int array2[12][8], int array3[12][12])
{
   int i,j,k;
   for(i=0;i<12;i=i+1)
   {
     for(j=0;j<12;j=j+1)
     {
        int sum = 0;
 	for( k=0; k<8; k=k+1 )
        {
          sum = sum + array2[i][k]*array[k][j];
        }
        array3[i][j]=sum;
     }
   }
}
