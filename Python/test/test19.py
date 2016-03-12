#!/usr/bin/python
# -*- coding: cp936 -*-
from Tkinter import *
#class Application(Frame):
    #def __init__(self,master=None):
        #Frame.__init__(self,master)
        #self.pack()
        #self.createWidgets()
    
    #def createWidgets(self):
        #self.helloLabel=Label(self,text='Hello,World!!')
        #self.helloLabel.pack()
        #self.quitButton=Button(self,text='Quit',command=self.quit)
        #self.pack()





app=Application()
#设置窗口的标题 
app.master.title("Hello World!!")
app.mainloop()

        

class Application(Frame):
    def __init__(self, master=None):
        Frame.__init__(self, master)
        self.pack()
        self.createWidgets()

    def createWidgets(self):
        self.helloLabel = Label(self, text='Hello, world!')
        self.helloLabel.pack()
        self.quitButton = Button(self, text='Quit', command=self.quit)
        self.quitButton.pack()