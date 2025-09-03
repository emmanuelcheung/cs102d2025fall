#!/usr/bin/python

def func( pos1, pos2, key1="x", key2="y" ):
  print( pos1, pos2, key1, key2 )

func("a", "b")
func("a", "b", "c")
func("a", "b", "c", "d")
func("a", "b", key2="d")
