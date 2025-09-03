def func( a ):
    return a * 10

def do_stuff( b ):
    c = func( b )
    print( b, c )

x = 0
while x < 10:
    do_stuff( x )
    x = x + 1

