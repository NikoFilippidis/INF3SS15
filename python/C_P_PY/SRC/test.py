#Autor: Gruppe B
from Buffer import Buffer
from Consumer import Consumer
from Producer import Producer
import sys
from threading import Thread

#Creates buffer with size given by first param
b = Buffer(int(sys.argv[1]))
 
producer = {}
consumer = {}


#Creates an amount of consumer set by argument 2
for i in range(int(sys.argv[2])):
   consumer[i] = Consumer(b)
   Thread(target=consumer[i].consume).start()
   
   
#Creates an amount of producer set by argument 3
for i in range(int(sys.argv[3])):
   producer[i] = Producer(b)
   Thread(target=producer[i].produce).start()