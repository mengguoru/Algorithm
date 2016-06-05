# my solution : rand8() to rand7()
# 
# status : failed: 8 is still maybe return from function f()
# author : mengguoru
# date   : 2016/6/5
# question from : https://www.zhihu.com/question/47038069
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