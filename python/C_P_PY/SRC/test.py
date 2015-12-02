'''
Created on: 02.12.15

@author: Group B
'''
from Buffer import Buffer
from Consumer import Consumer
from Producer import Producer
import sys
from threading import Thread

#Creates buffer with size given by argument 1
assert (int(sys.argv[1])>0), "Buffer is too small"
b = Buffer(int(sys.argv[1]))
 
producer = {}
consumer = {}


#Creates an amount of consumer set by argument 2
assert (int(sys.argv[2])>0), "No Consumer-Thread Running"
for i in range(int(sys.argv[2])):
    consumer[i] = Consumer(b)
    Thread(target=consumer[i].consume).start()
   
   
#Creates an amount of producer set by argument 3
assert (int(sys.argv[3])>0), "No Producer-Thread Running"
for i in range(int(sys.argv[3])):
    producer[i] = Producer(b)
    Thread(target=producer[i].produce).start()