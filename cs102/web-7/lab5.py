#!/usr/bin/python
print( "Content-type: text/html\n\n" )

print( """
<html>
<body>
<table>
<tr><th> N </td><td> 100xN </th> </tr>
""")

for i in range(1, 101):
	print( """
<tr> <td> %s </td> <td> %s</td> </tr>
""" % (i,i*100))

print("""
</table>
</body>
</table>
""")
