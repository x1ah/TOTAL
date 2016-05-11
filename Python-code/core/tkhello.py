#!/usr/bin/env python
#coding=utf-8
from Tkinter import (Tk, Scale, Button, Label, Y, HORIZONTAL, X, mainloop)
from time import ctime
#

def resize(ev=None):
    label.config(font='Helvetica -%d bold' % scale.get())

top = Tk()
# top.geometry('250 X 150')
txt = ctime()
label = Label(top, text=txt, font='Consolas -12 bold')
label.pack(fill=Y, expand=1)

scale = Scale(top, from_=10, to=40, orient=HORIZONTAL, command=resize)
scale.set(12)
scale.pack(fill=X, expand=1)

quit=Button(top, text='QUIT', command=top.quit, activeforeground='white', activebackground='red')

quit.pack()

mainloop()
