#!/usr/bin/python

#Emmanuel Cheung
#Homework 12 Final
#12-19-2025

from tkinter import *
from intersect import hits
from intersect import edges
from intersect import intersect
root = Tk()

class MyCanvas(Canvas):
  def __init__( this, *args, **kwargs ):
    Canvas.__init__( this, *args, **kwargs )
    this.ball = this.makeBall( 50,50)
    this.rectangle = this.makeRectangle (225, 475)
    this.bind( "<KeyPress>", this.keyWasPressed)
    this.focus_set()
    this.ball_velocity_x = 1
    this.ball_velocity_y = 1
    this.bind("<Motion>", this.mouseHasMoved)
    this.makeBlock( 150, 20)
    this.makeBlock( 300, 200)
    this.makeBlock( 50, 105)
    this.makeBlock( 67, 67)
    this.makeBlock( 213, 312)

  def makeBall( this, x, y, color="blue" ):
    return this.create_oval( x, y, x+5, y+5, fill=color )
  def makeRectangle( this, x, y, color="red" ):
    return this.create_rectangle( x, y, x+50, y+10, fill=color )  
  def mouseHasMoved(this, event):
    sx, sy, ex, ey = this.coords( this.rectangle)
    paddle_x = (sx+ex)/2
    this.move(this.rectangle, event.x-paddle_x, 0)
  def eachFrame(this):
    sx, sy, ex, ey = this.coords(this.ball)
    sxr, syr, exr, eyr = this.coords(this.rectangle)
    #print(sx, sy, ex, ey)
    if sx < 0 or ex > 500:
      this.ball_velocity_x = -this.ball_velocity_x
    if sy < 0 :
      this.ball_velocity_y = -this.ball_velocity_y
    if ex > sxr and sx < exr and ey > syr:
#    if ey == sxr and sxr < sx < exr:
      this.ball_velocity_y = -this.ball_velocity_y
    if ey > 500:
      print("you lose!")
      raise Exception("you lose!")
    this.move(this.ball, this.ball_velocity_x, this.ball_velocity_y)

    allBlocks = this.find_withtag("block")
    for block in allBlocks:
      bx, by, lx, ly = this.coords(block)
      hcoords = hits(bx, by, lx, ly, sx, sy, ex, ey)
      if "N" in hcoords:
        this.ball_velocity_y = -abs(this.ball_velocity_y)
      if "E" in hcoords:
        this.ball_velocity_x = -abs(this.ball_velocity_x)
      if "S" in hcoords:
        this.ball_velocity_y = +abs(this.ball_velocity_y)
      if "W" in hcoords:
        this.ball_velocity_x = +abs(this.ball_velocity_x)
      if hcoords:
        this.delete( block)
    if len(allBlocks) == 0:
      raise Exception( "You Win!")

  def keyWasPressed( this, event=None):
    key = event.keysym
    sx, sy, ex, ey = this.coords(this.rectangle)
    print( "just pressed:", key)
    if key == "Left" and sx > 0:
       this.move(this.rectangle, -25, 0)
    if key == "Right" and ex < 500:
       this.move(this.rectangle, 25, 0)  
  def makeBlock( this, x, y, color="teal"):
    return this.create_rectangle( x, y, x+50, y+10, fill=color, tags="block")

canvas = MyCanvas( root, width=500, height=500 )
canvas.pack()

while( True ):
  canvas.eachFrame()
  root.update()
