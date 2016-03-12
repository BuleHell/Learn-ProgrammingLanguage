#!/usr/bin/python
# -*- coding: cp936 -*-
#1列表推导
"""
number=range(10)
size=len(number)
evens=[]
i=0
while i<size:
    if i%2 == 0 : 
        evens.append(i)
    i+=1
print evens
#-------------------------
evens2=[i for i in range(10)if i%2==0]
print evens
"""

#i=0
#seq=["one","two","three"]
#for aa in seq:
    #seq[i]='%d:%s'%(i,seq[i])
    #i+=1
#print seq

#print enumerate(seq)
#for i,ele in enumerate(seq):
    #seq[i]='%d:%s'%(i,seq[i])
#print seq


#seq=["one","two","three"]
#def _treayment(pos,element):
    #return '%d:%s'%(pos,element)
#cc=[_treayment(i,el) for i,el in enumerate(seq)]
#print cc
