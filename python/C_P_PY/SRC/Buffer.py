from setuptools.command.build_ext import if_dl
from _overlapped import NULL
import threading

class Buffer(object):
    lst = [None] * 1
    lock = threading.Lock()



    
    def __init__(self, size):
        self.lst =[None]*size
        
        
    def addElement(self, a):
        saved = False
        for index, elem in enumerate(self.lst):
            if elem == None and not saved:
             self.lst[index] = a
             saved=True
    
    def getNextElement(self):
        for index, elem in enumerate(self.lst):
            if elem != None:
                 tmp = self.lst[index]
                 self.delElement()
                 return tmp
            return None
    
    def delElement(self):
        for i in range(len(self.lst)-1):
            self.lst[i] = self.lst[i+1]
            self.lst[i+1] = None
            
    def isFull(self):
        full=True
        for index, elem in enumerate(self.lst):
         if self.lst[index] == None:
             full = False
        return full
    
    def isEmpty(self):
        empty=True
        for index, elem in enumerate(self.lst):
         if self.lst[index] != None:
             empty = False
        return empty
    
    def getSize(self):
        return len(self.lst)
  