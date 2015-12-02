from Buffer import Buffer
from Consumer import Consumer
from Producer import Producer
import sys
from threading import Thread
import threading



b = Buffer(10)

p = Producer(b)
c = Consumer(b)

t = Thread(target=p.produce)
#t.setDaemon(True)
t1 = Thread(target=c.consume)
#t1.setDaemon(True)

t.start()
t1.start()

