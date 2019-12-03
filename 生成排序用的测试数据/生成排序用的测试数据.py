import random
def random_list(start,stop,length):
    if length>=0:
        length=int(length)
    start, stop = (int(start), int(stop)) if start <= stop else (int(stop), int(start))
    random_list = []
    for i in range(length):
        random_list.append(random.randint(start, stop))
    return random_list

if __name__ == '__main__':
    l = random_list(1, 100, 15)
    print("排序前：", l)
    l.sort()
    print("排序后：", l)