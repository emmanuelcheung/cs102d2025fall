#!/usr/bin/python

class Dog:
    color = "black"
    def fetch( this, thing ):
      return this.color+" dog's slobber-covered "+thing

dog1 = Dog()
retrieved = dog1.fetch( "frisbee" )
print( "got back "+retrieved )

