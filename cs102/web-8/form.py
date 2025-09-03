#!/usr/bin/python

import cgi
import cgitb
cgitb.enable()

print( "Content-type: text/html\n\n" )

print( "<html><body>" )

form = cgi.FieldStorage()
if "firstname" in form:
  print( "<h1>Hi, " + form["firstname"].value + "</h1>" )
else:
  print( "<h1>You didn't give me a name!</h1>" )

print( "</body></html>" )
