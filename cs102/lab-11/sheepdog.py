#!/usr/bin/python

class Dog:
  color = "black"
  def run(this):
    print( "my " + this.color + " dog is running" )
  def fetch( this, thing ):
    return this.color+" dog's slobber-covered "+thing

class SheepDog( Dog ):
  def herd(this,what):
    print( "my " + this.color + " sheep-dog is herding " + what )

dog1 = Dog()
retrieved = dog1.fetch( "frisbee" )
print( "got back "+retrieved )

sd1 = SheepDog()
sd1.herd("goats")
sd1.run()

dog1.herd("cats")
