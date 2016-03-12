#!/usr/bin/python
# -*- coding: cp936 -*-
##test1
#import socket
#from binascii import hexlify

#for ip in ['127.0.0.1','192.168.0.1']:
    #ip_add=socket.inet_aton(ip)
    #un_ip_add=socket.inet_ntoa(ip_add)
    #print ip,hexlify(ip_add), un_ip_add

#test2
import socket
a=[]
protocolname='tcp'
protocolname2='udp'
for port in range(65535) :
    try:
        aa=socket.getservbyport(port,protocolname)
        bb=socket.getservbyport(port,protocolname2)
        print "%s port:%s-->service name:%s" %(protocolname,port,aa)
        print "%s port:%s-->service name:%s" %(protocolname2,port,bb)
    except socket.error:
        pass
