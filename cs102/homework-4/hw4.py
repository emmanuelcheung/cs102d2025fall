import tkinter

h = 1
def f(x):
    return 8*x*x*x-6*x*x+6*x
def fp(x):
    return (f(x)- f(x - h)) / h
def fdp(x):
    return (fp(x) -fp(x - h)) / h
def fint(x):
    return ((f(x)+ f(x - h)) / 2) * h
tk = tkinter.Tk()
c = tkinter.Canvas( tk, width=400, height=600 )
c.pack()
x = -100
xmaximum = 100
xscale = 400 / xmaximum
yscalef = (-600 / f(xmaximum)) * xscale
yscalefp = (-600 / fp(xmaximum)) * 2
yscalefdp = (-600 / fdp(xmaximum)) * 1
yscalesumm = (-600 / (125845500 * 4)) 

c.create_line(0, 300, 400, 300)
c.create_line(200, 0, 200, 600)
xshift = 200
yshift = 300

summ = 0

while x < 101:

    c.create_rectangle(xshift + x * xscale, yshift + f(x) * yscalef, xshift + x * xscale + 1, yshift + f(x) * yscalef + 1, outline="blue")
    c.create_rectangle(xshift + x * xscale, yshift + fp(x) * yscalefp, xshift + x * xscale + 1, yshift + fp(x) * yscalefp + 1, outline="red")
    c.create_rectangle(xshift + x * xscale, yshift + fdp(x) * yscalefdp, xshift + x * xscale + 1, yshift + fdp(x) * yscalefdp + 1, outline="purple")
    c.create_rectangle(xshift + x * 2, yshift + summ * yscalesumm, xshift + x * 2 + 1, yshift + summ * yscalesumm + 1, outline="green")

    summ = summ + f(x)
    x = x + h


tk.mainloop()
