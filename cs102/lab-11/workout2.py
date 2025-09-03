#!/usr/bin/python

def workout():
  return liftWeight()

def liftWeight():
  return activateMuscle()

def activateMuscle():
  return chemicalMuscleFiberInteraction()
    
def chemicalMuscleFiberInteraction():
  # Just an example here, we're making the muscle fail
  # This time catastrophically, something that could crash
  return 1/0

print("trying to do workout")
try:
  workout()
  print("workout success? ", diditwork)
except:
  print("too heavy, dropped the weight")
