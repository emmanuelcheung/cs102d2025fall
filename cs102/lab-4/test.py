import tkinter
tk = tkinter.Tk()
c = tkinter.Canvas( tk, width=400, height=600 )
c.pack()



def f( x ):
  return x*x*x+x*x

for x in range(10,20):
  y=f(x)
  y2=x*x+10
  print(x,y)
  print(x,y2)
  
  c.create_rectangle( 50+x, 50-y/10,  50+x+1, 50-y/10+1  )
  c.create_rectangle( 50+x, 50-y2/10, 50+x+1, 50-y2/10+1 )










tk.mainloop()
