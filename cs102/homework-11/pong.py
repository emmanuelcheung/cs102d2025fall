from tkinter import *

root = Tk()

class MyCanvas(Canvas):
    def __init__(self, *args, **kwargs):
        Canvas.__init__(self, *args, **kwargs)
        self.ball = self.makeBall(50, 50)
        self.rectangle = self.makeRectangle(225, 475)
        self.ball_velocity_x = 1
        self.ball_velocity_y = 1
        self.bind("<KeyPress>", self.keyWasPressed)
        self.focus_set()

    def makeBall(self, x, y, color="blue"):
        return self.create_oval(x, y, x+5, y+5, fill=color)

    def makeRectangle(self, x, y, color="red"):
        return self.create_rectangle(x, y, x+50, y+10, fill=color)

    def keyWasPressed(self, event=None):
        key = event.keysym
        rx1, ry1, rx2, ry2 = self.coords(self.rectangle)

        if key == "Left":
            if rx1 > 0:
                self.move(self.rectangle, -25, 0)

        if key == "Right":
            if rx2 < 500:
                self.move(self.rectangle, 25, 0)

    def eachframe(self):
        sx, sy, ex, ey = self.coords(self.ball)

        if sx <= 0 or ex >= 500:
            self.ball_velocity_x = -self.ball_velocity_x
        if sy <= 0:
            self.ball_velocity_y = -self.ball_velocity_y

        if ey >= 500:
            root.destroy()
            return

        rx1, ry1, rx2, ry2 = self.coords(self.rectangle)
        if ex >= rx1 and sx <= rx2 and ey >= ry1:
            self.ball_velocity_y = -self.ball_velocity_y

        self.move(self.ball, self.ball_velocity_x, self.ball_velocity_y)


canvas = MyCanvas(root, width=500, height=500)
canvas.pack()

try:
    while True:
        canvas.eachframe()
        root.update()
        root.update_idletasks()
except:
    print("Game Over")

