#!/usr/bin/python

from tkinter import *
root = Tk()
class MyCanvas(Canvas):
  def __init__( this, *args, **kwargs ):
    Canvas.__init__( this, *args, **kwargs )
    # NOTE: you're going to have to change "canvas" to "this",
    # because canvas is a variable outside the class, whereas
    # "this" always refers to the current object at hand
    this.ball1 = canvas.makeBall(  50,  50 )
    this.ball2 = canvas.makeBall( 150, 150, color="blue" )
    # Also note that you don't HAVE to put the result in a variable,
    # though if you don't, you can't get use it to manipulate the ball
    canvas.makeBall( 250, 250, color="red" )
  def makeBall( this, x, y, color="blue" ):
    return this.create_oval( x, y, x+5, y+5, fill=color )

# MyCanvas is-a Canvas, so it can do everything a Canvas can:
canvas = MyCanvas( root, width=500, height=500 )
# And that INCLUDES making all the balls, by definition
canvas.pack()

while( True ):
  root.update()
