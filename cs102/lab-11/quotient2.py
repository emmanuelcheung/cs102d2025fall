#!/usr/bin/python

def quotient(x,y):
  return x/y

print("trying to divide 1/2")
print(quotient(1,2))
print("trying to divide 1/0")
try:
  print(quotient(1,0))
except:
  print("whoa!")
print("done")
