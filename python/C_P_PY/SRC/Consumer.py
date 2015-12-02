from Buffer import Buffer
from Lock import lock

class Consumer(object):
    b = Buffer(1)
    
    def __init__(self, a):
        self.b = a
        
        
    def consume(self): 
        while True:
            lock.acquire()
            if not self.b.isEmpty():
                print(self.b.getNextElement())
            lock.release()
    '''
    consumer consumes as long as the buffer is not empty ,
    when this happens the lock object gets locked so only one thread at
    a time will be able to access the buffer. After that the lock gets released.
    '''