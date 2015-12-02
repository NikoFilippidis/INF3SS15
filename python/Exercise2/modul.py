'''
Created on 01.12.2015

@author: Zipfel
'''
import glob
import threading
from queue import Queue
import time

mailList = []
lock = threading.Lock()

def worker1():
    #auslesen von daten
    # glob supports Unix style pathname extensions
    emailFile = glob.glob('mails2.txt')
    for file_name in sorted(emailFile):
        print ('    ------' + file_name)
        with open(file_name) as f:
            for line in f:
                #print (threading.current_thread().name +'    ' + line.rstrip())
                with lock:
                    mailList.append(threading.current_thread().name +line.rstrip())
                time.sleep(1)
        print()
    return

def worker2():
    #auslesen von daten
    # glob supports Unix style pathname extensions
    emailFile = glob.glob('mails1.txt')
    for file_name in sorted(emailFile):
        print ('    ------' + file_name)
        with open(file_name) as f:
            for line in f:
                #print ('    ' + line.rstrip())
                with lock:
                    mailList.append(line.rstrip()) 
                   
        print()
    return

if __name__ == '__main__':
    print("Exercise2")
    a = threading.Thread(target=worker1)
    b = threading.Thread(target=worker2)
    b.start()
    a.start()
    a.join()
    b.join()
    
    for x in range(0,len(mailList)):
       print(mailList[x])
    
    
    
    
'''
        # Create the queue and thread pool.
    q = Queue()
    for i in range(4):
         t = threading.Thread(target=worker)
         t.daemon = True  # thread dies when main thread (only non-daemon thread) exits.
         t.start()
    
    # stuff work items on the queue (in this case, just a number).
    #start = time.perf_counter()
    for item in range(20):
        q.put(item)
    
    q.join()       # block until all tasks are done
    '''