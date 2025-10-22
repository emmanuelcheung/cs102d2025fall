print("Content-type: text/html\n\n")

print("<html>")
print("<head><title> Homework 7 </title></head>")
print("<body>")
print("<h1> Graph table</h1>")
print("<table border=1>")
print("<tr><th>x</th><th>y</th><th>dy</th><th>sumy</th></tr>")

A = 3
B = 6
C = 7
D = 6
h = D
x = -100
fsum = 0.0

def f(x):
      return (A*x*x*x) - (B*x*x) + (C*x)

def fprime(x):
      return ( f(x) - f(x-h))/h

def fint(x):
      return ((f(x) + f(x-h))/2)*h

def fdprime(x):
      return (fprime(x) - fprime(x-h))/h

while x <= 100:
      y = f(x)
      yprime = fprime(x)
      fsum = fsum + fint(x)
      print("<tr><td>%d</td><td>%.2f</td><td>%.2f</td><td>%.2f</td></tr>" % (x, y, yprime, fsum))
      x = x + 2 

print("</table>")
print("</body>")
print("</html>")
