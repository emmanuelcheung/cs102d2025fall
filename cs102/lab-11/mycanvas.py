#!/usr/bin/python

from tkinter import *
root = Tk()
class MyCanvas(Canvas):
  def makeBall( this, x, y, color="blue" ):
    return this.create_oval( x, y, x+5, y+5, fill=color )

# MyCanvas is-a Canvas, so it can do everything a Canvas can:
canvas = MyCanvas( root, width=500, height=500 )
canvas.pack()

# But it ALSO can makeBall()
ball1 = canvas.makeBall(  50,  50 )
ball2 = canvas.makeBall( 150, 150, color="blue" )
ball3 = canvas.makeBall( 250, 250, color="red" )

root.mainloop()
