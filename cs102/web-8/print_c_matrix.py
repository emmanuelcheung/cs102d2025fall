#!/usr/bin/python
def pp(x,y):
  print("""
void print%s_%s( int m[%s][%s] )
{
  int x,y;
  for( x=0; x<%s; x++ )
  {
    for( y=0; y<%s; y++ )
    {
      fprintf(stdout,"%%s",m[x,y]);
    }
    fprintf(stdout,"\\n");
  }
}
"""%(x,y,x,y,x,y))

pp(8,12)
pp(12,8)
pp(12,12)
