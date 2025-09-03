#!/usr/bin/python
print("Content-type: text/html\n\n")

greeting = "hello"
farewell = "goodbye"

print("""
<HTML>
  <BODY>
""")

print("<P>I want to say %s and also %s!</P>" % (greeting, farewell))

print("""
  </BODY>
</HTML>
"""
)
