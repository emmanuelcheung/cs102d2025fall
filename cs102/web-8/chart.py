#!/usr/bin/python
import cgi
import cgitb
cgitb.enable()
print( "Content-type: text/html\n\n" )
print("<html><head>")
print( """<link rel="stylesheet" href="chart.css" type="text/css" />""" )
print( """  <script src="chart.js" type="text/javascript"></script>""")
print("<title>HW8</title>")
print( "</head><body>")
print("<h1>Emmanuel Cheung | EID102D | Homework 8 python</h1>")
print("""<h1 onClick="toggle()">Click to toggle</h1>""")
print("""<table class="visible" id="toggler">""")
print("""
<tr id="toggler">
<th>x</th>
<th>y</th>
<th>dy</th>
<th>sum</th>
</tr>
""")
form = cgi.FieldStorage()

h = 1
A = int(form["a"].value)
B = int(form["b"].value)
C = int(form["c"].value)

def f(x):
    return A*x*x*x-B*x*x+C*x

def fprime(x):
    return (f(x) - f(x - h)) / h

def fdoubleprime(x):
    return (fprime(x) - fprime(x - h)) / h

def fint(x):
    return ((f(x) + f(x - h)) / 2) * h




x = -100


total = 0

while x < 101:
    if x%2 == 0:
	print("""<tr class="a" id="toggler"><td>%s</td><td>%s</td><td>%s</td><td>%s</td></tr>""" % (x, f(x), fprime(x), total))    
    elif x%2 == 1:
        print("""<tr class="b" id="toggler"><td>%s</td><td>%s</td><td>%s</td><td>%s</td></tr>""" % (x, f(x), fprime(x), total))  
    total = total + f(x)
    x = x + h

print( """
</table>
</body>
</html>
""" )
