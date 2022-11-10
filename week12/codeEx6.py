#!/usr/bin/python

def make_printer(msg):

    msg = "hi there"

    def printer():
        print(msg)

    printer()  #Example Part 1
    #return printer #Example Part 2


myprinter = make_printer("Hello there")
myprinter()
myprinter()
myprinter()
