#!/usr/bin/python
print("Content-type: text/html\n\n")
variable = "hello"
print("""
<HTML>
  <BODY>
    <P>I want to say %s!</P>
  </BODY>
</HTML>
""" % (variable)
)
