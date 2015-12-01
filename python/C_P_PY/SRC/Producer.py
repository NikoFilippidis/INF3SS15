from Buffer import Buffer
from random import randint


class Producer(object):
    b = Buffer(1)
    
    def __init__(self, a):
        self.b = a
        #self.produce()
        
    

    def produce(self):  
        while True:
            if not self.b.isFull():
                self.b.addElement(randint(1, 100000))
                print("Pruducer hallo")