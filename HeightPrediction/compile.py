import os 
time

os.system("g++ -o HeightPredictor HeightPredictor.cpp")
time.sleep(.5)
os.system("HeightPredictor")
os.system("./HeightPredictor")
time.sleep(60)

