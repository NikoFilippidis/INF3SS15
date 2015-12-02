'''
Created on: 02.12.15

@author: Group B
'''
class Buffer(object):
    lst = [None] * 1
    
    #Construktor of the buffer
    def __init__(self, size):
        assert not (size is None)
        self.lst =[None]*size
        
    #Adds an element to buffer   
    def addElement(self, a):
        assert not (a is None)
        saved = False
        for index, elem in enumerate(self.lst):
            if elem == None and not saved:
                self.lst[index] = a
                saved=True
    #Returns the oldest element  :FIFO
    def getNextElement(self):
        for index, elem in enumerate(self.lst):
            if elem != None:
                    tmp = self.lst[index]
                    self.delElement()
                    return tmp
            return None
    
    #Moves every element one position up
    def delElement(self):
        for i in range(len(self.lst)-1):
            self.lst[i] = self.lst[i+1]
            self.lst[i+1] = None
     
    #Returns true when the buffer is full       
    def isFull(self):
        full=True
        for index, elem in enumerate(self.lst):
            if self.lst[index] == None:
                full = False
        return full
    #Returns true when the buffer is empty
    def isEmpty(self):
        empty=True
        for index, elem in enumerate(self.lst):
            if self.lst[index] != None:
                empty = False
        return empty
    #Returns size of buffer
    def getSize(self):
        return len(self.lst)
  