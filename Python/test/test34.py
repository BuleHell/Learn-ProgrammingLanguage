#!/usr/bin/python
# -*- coding: cp936 -*-
from tkinter import *
from tkinter.messagebox import showinfo
class MyGUi(Frame):
    def __init__ (self,parent=None):
        Frame.__init__(self,parent)
        button=Button(self,text='Press',command=self.reply)
        button.pack()

    def reply (self):
        showinfo(title='popup!!',message='Button Pressed!!')

if __name__=='__main__':
    windows=MyGUi()
    windows.pack()
    mainloop()

        
        
    


