#!/usr/bin/python

def workout():
  diditwork = liftWeight()
  if not diditwork:
    print("liftWeight failed")
  return diditwork

def liftWeight():
  diditwork = activateMuscle()
  if not diditwork:
    print("activateMuscle failed")
  return diditwork

def activateMuscle():
  diditwork = chemicalMuscleFiberInteraction()
  if not diditwork:
    print("chemicalMuscleFiberInteraction failed")
  return diditwork
    
def chemicalMuscleFiberInteraction():
  # Just an example here, we're making the muscle fail
  return False

print("trying to do workout")
diditwork = workout()
print("workout success? ", diditwork)
