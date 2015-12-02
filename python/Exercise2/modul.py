'''
Created on 01.12.2015

@author: group 2
'''
#importblock
import glob
import threading

#global variables
mailList = []
lock = threading.Lock()
firstWorker = True

#defines operation of thread a and b. First thread in lock block reads mails from mails1.txt and writes them into mailList 
#Secound thread in lock block reads mails from mails2.txt and writes them into mailList
def worker1():
    with lock:
        if firstWorker:
            file = 'mails1.txt'
            fifrstWroker = False
        else:
            file = 'mails2.txt'
    
    emailFile = glob.glob(file)
    for fileName in sorted(emailFile):
        with open(fileName) as f:
            for line in f:
                #print (threading.current_thread().name +'    ' + line.rstrip())
                with lock:
                    #mailList.append(threading.current_thread().name +line.rstrip())
                    mailList.append(line.rstrip())

#this block will be executed by thread c when thread a and b are finished
#this block is looking for mails with the ending .edu and prints them out
def worker2():
    for x in range(0,len(mailList)):
       if (str(mailList[x]).endswith('.edu')):
           print(mailList[x])
    return

#defines threads and will find out mails with ending .edu
if __name__ == '__main__':
    print("Exercise2")
    print()
    a = threading.Thread(target=worker1)
    b = threading.Thread(target=worker1)
    a.start()
    b.start()
    a.join()
    b.join()
    c = threading.Thread(target=worker2)
    c.start()
