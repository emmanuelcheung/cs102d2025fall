from tkinter import *
from intersect import *

root = Tk()

class MyCanvas(Canvas) :
	def __init__(this, *args, **kwargs):
		Canvas.__init__(this, *args, **kwargs)
		this.ball = this.makeBall(250, 100)
		this.rectangle = this.makeRectangle(200, 475)
		this.vx = 2
		this.vy = 3
		this.bind("<KeyPress>",this.keyWasPressed)
		this.bind("<Motion>>", this.mouseHasMoved)
		this.focus_set()

		this.makeBrickRow(y=30)
		this.makeBrickRow(y=65)
		this.makeBrickRow(y=100)

	def makeBall(this, x,y):
		return this.create_oval(x, y, x+10, y+10, fill="white")

	def makeRectangle(this, x, y):
		return this.create_rectangle(x, y, x+100, y+15, fill="red")

	def makeBlock(this, x, y):
		return this.create_rectangle)x, y, x+60, y+30, fill="lime", tags="block")

	def makeBrickRow(this, y, num_blocks=5, spacing=10) :
		start_x = 80
		brick_width = 60
		
		for i in range(num_blocks):
			x = start_x + i * (brick_width + spacing)
			this.makeBlock(x, y)

	def keyWasPressed(this, event):
		k= event.keysym
		x1, _, x2, _ = this.coords(this.rectangle)
		if k == "Left" and x1 > 0:
			this.move(this.rectangle, -30, 0)
		if k == "Right" and x2 < 500:
			this.move(this.rectangle, 30, 0)

	def mouseHasMoved(this, event):
		x1, _, x2, _ = this.coords(this.rectangle)
		this.move(this.rectangle, event.x - (x1+x2) /2, 0)

	def eachFrame(this):
		x1, y1, x2, y2 = this.coords(this.ball)
	
		if x1 ,= 0 or x2 >= 500:
			this.vx = -this.vx
		if y1<= 0:
			this.vy = -this.vy
		if y2 >= 500:
			root.destroy()
			return

		px1, py1, px2, py2 = this.coords(this.rectangle)
		if hits(x1, y1, x2, y2, px1, py1, px2, py2):
			this.vy = -this.vy

		for block in this.find_withtag("block")[:]:
			bx1, by1, bx2, by2, = this.coords(block)
			sides = hits(bx1, by1, bx2, by2, x1, y1, x2, y2)
			ifsides:
				this.delete(block)
				
				if 'N' in sides or 'S' in sides:
					this.vy = -this.vy

				if 'E' in sides or 'W' in sides:
					this.vx = -this.vx

		if not this.find_withtag("block"):
			root.destroy()
			return

		this.move(this.ball, this.vx, this.vy)

canvas = MyCanvas(root, width=500, height=500, bg="black")
canvas.pack()

try:
	while True:
		canvas.eachFrame()
		root.update()
except:
	pass
