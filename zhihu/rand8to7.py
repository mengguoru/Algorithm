# my solution : rand8() to rand7()
# 
# author : mengguoru
# date   : 2016/6/5
import random

def f(pivot):
    tmp = random.randint(1,8)
    if 8 == tmp:
        return pivot
    else:
        return tmp
def rand7():
     temp = []
     for i in range(1,9):
        temp.append(f(i))
     return temp[random.randint(1,8)-1]
if __name__ == "__main__":
    print(rand7())