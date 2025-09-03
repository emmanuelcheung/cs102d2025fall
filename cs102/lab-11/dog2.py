#!/usr/bin/python

class Dog:
  color = "black"
  def run(this):
    print( "my " + this.color + " dog is running" )

dog1 = Dog()
dog1.run()
# now let's spraypaint our dog black:
dog1.color = "gray"
dog1.run()
