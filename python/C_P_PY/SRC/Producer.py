'''
Created on: 02.12.15

@author: Group B
'''
from Buffer import Buffer
from random import randint
from Lock import lock


class Producer(object):
    b = None
    
    def __init__(self, a):
        assert not (a is None)
        self.b = a
        
    

    def produce(self):  
        while True:
            lock.acquire()
            if not self.b.isFull():
                self.b.addElement(randint(1, 100000))
            lock.release()
    '''
    produce generates random numbers as long as the buffer is not full,
    when this happens the lock object gets locked so only one thread at
    a time will be able to access the buffer. Afterwards the lock gets released.
    '''
