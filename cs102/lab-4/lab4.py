import tkinter
tk = tkinter.Tk()
c = tkinter.Canvas( tk, width=400, height=600 )
c.pack()
    
c.create_line (0, 300,400, 300)
c.create_line (200, 0 ,200, 600)


x=-200
xshift=200
yshift=300
def f ( x ):
    y=x*x+1
    return y

while x<401:
    c.create_rectangle( x+xshift, -f(x)/100+yshift, x+1+xshift, -f(x)/100+1+yshift)
    x=x+1


tk.mainloop()
