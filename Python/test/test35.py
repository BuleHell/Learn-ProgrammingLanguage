#!/usr/bin/python
# -*- coding: cp936 -*-
from tkinter import *
from test34 import MyGUi
#main=Tk()
#Label(main,text=__name__).pack()

popup=Tk()
Label(popup,text='Attch').pack(side=LEFT)
MyGUi(popup).pack(side=RIGHT)
mainloop()