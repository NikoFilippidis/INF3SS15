from Buffer import Buffer
from random import randint
from Lock import lock


class Producer(object):
    b = Buffer(1)
    
    def __init__(self, a):
        self.b = a
        #self.produce()
        
    

    def produce(self):  
        while True:
            lock.acquire()
            if not self.b.isFull():
                self.b.addElement(randint(1, 100000))
                print("Pruducer hallo")
            lock.release()
    