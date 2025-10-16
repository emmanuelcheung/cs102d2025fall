#!/usr/bin/python
print( "Content-type: text/html\n\n" )
print( """
<html><html>
<head>
<title>LAB 7</title>
</head>
<body>
<h1>my header</h1>
""")

x =1 

while x<101:
  print( """
  <p>my paragraph</p>
  """)
  x = x + 1

print( """
</body>
</html>
<body>
""")
