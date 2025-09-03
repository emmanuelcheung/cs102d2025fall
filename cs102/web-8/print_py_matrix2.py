#!/usr/bin/python

print("Content-type: text/html\n\n")

print("""
<html>
  <head>
    <title>My Title</title>
  </head>
  <body>
""")

def print_cells(tablenum,rownum):
  for c in range(1,4):
    print("<td>")
    print("cell[%d][%d][%d]" % (tablenum, rownum, c))
    print("</td>")

def print_rows(tablenum):
  for r in range(1,4):
    print("<tr>")
    print_cells(tablenum,r)
    print("</tr>")

for t in range(1,4):
  print("<h1>Table #%d</h2>" % (t))
  print("<table>")
  print_rows(t)
  print("</table>")

print("""
  </body>
</html>
""")
