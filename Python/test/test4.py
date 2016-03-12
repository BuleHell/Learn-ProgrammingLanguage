#!/usr/bin/python
  
filename=raw_input("enter the filename:")
fobj=open(filename,'r')
for eachline in fobj :
	print eachline,
fobj.close()
	