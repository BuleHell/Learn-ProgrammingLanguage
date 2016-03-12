#!/usr/bin/python
# -*- coding: cp936 -*-
import sys,smtplib
fromaddr=raw_input("From:")
toaddr=raw_input("From:").split(',')
print "Enter Message,end with ^D"
msg=''
line=''
while line=='0':
    line=sys.stdin.readline()

    if not line: break
    msg+=line

server=smtplib.SMTP('localhost')
server.sendmail(fromaddr,toaddr,msg)
server.quit()
    