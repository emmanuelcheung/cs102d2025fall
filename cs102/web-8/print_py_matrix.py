#!/usr/bin/python

print("Content-type: text/html\n\n")

print("""
<html>
  <head>
    <title>My Title</title>
  </head>
  <body>
""")

for t in range(1,4):
  print("<h1>Table #%d</h2>" % (t))
  print("<table>")
  for r in range(1,4):
    print("<tr>")
    for c in range(1,4):
      print("<td>")
      print("cell[%d][%d][%d]" % (t, r, c))
      print("</td>")
    print("</tr>")
  print("</table>")

print("""
  </body>
</html>
""")
