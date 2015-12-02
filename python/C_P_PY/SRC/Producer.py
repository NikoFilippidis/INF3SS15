from Buffer import Buffer
from random import randint
from Lock import lock


class Producer(object):
    b = Buffer(1)
    
    def __init__(self, a):
        self.b = a
        
    

    def produce(self):  
        while True:
            lock.acquire()
            if not self.b.isFull():
                self.b.addElement(randint(1, 100000))
            lock.release()
    '''
    produce produces as long as the buffer is not full random numbers,
    when this happens the lock object gets locked so only one thread at
    a time will be able to access the buffer. After that the lock gets released.
    '''