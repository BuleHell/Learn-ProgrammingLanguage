#!/usr/bin/python
import urllib
import webbrowser

url="http://www.feiesoft.com"

connect = urllib.urlopen(url).read()
open('D:\www.feiesoft.com','w').write(connect) 

webbrowser.open_new(connect)
