import random
m=random.randint(1,10)
n=input("guess what number ?:")
while n!=m:
    n=int(input('guess?:'))
    if n>m:
        print('high')
    elif n<m:
        print('low')
    else:
        print('you guess it')
        break
