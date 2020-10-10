import os
import time

os.system("g++ -o fakewifihack c++fakewifi.cpp")
time.sleep(.5)
os.system("fakewifihack")
time.sleep(60)
