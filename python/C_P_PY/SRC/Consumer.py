from Buffer import Buffer
from Lock import lock

class Consumer(object):
    b = Buffer(1)
    
    def __init__(self, a):
        self.b = a
        #self.consume()
        
    

    def consume(self): 
        while True:
            lock.acquire()
            if not self.b.isEmpty():
                print("Consumer hallo")
                print(self.b.getNextElement())
            lock.release()