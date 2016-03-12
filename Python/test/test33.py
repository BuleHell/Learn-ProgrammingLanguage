#!/usr/bin/python
# -*- coding: utf-8 -*-
import BeautifulSoup as bt4
file=open('4701280b0100l4sf.html','r')
html=file.read()
file.close()
#<div id="sina_keyword_ad_area2" class="articalContent   ">
bsobj=bt4.BeautifulSoup(html)
#print bsobj.title.get_text()
content=bsobj.findAll(text='sina_keyword_ad_area2')
print content 
#print bsobj.title


