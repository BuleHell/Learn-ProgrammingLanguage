#!/usr/bin/env python
#-*-coding:utf-8 -*-
'a test module'
__author__='Jack Linux'

import sys

def test ():
    agrs=sys.argv
    if len(agrs)==1 :
        print 'Hello World!!!'
    elif len(agrs)==2 :
        print 'Hello,%s!---%s'%(agrs[0],agrs[1])
    else:
        print 'Too many arguments!!'


if __name__=='__main__':
    test()

        
    