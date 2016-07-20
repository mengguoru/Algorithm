'''
give 100 to 10 people,everyone's money at least 6,at most 12
'''
import random

arr = [6]*10
res = 40

while res>0:
    choice = random.randint(0,9)
    if res < 0.1:
        if arr[choice]+res <=12:
            arr[choice] += res
            break
        else:
            continue

    if arr[choice]<12:
        give = random.uniform(0,12 - arr[choice])
        arr[choice]+= give
        res -= give

print(arr)
print(sum(arr))
