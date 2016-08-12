import re

#获取源数据
f = open('test.html','r')
html = f.read()
f.close()

title = re.search('<title>(.*?)</title>',html,re.S).group(1)
print('标题：',title)

print('几个链接：')
links = re.findall('href="(.*?)">(.*?)</a>',html,re.S)
for link in links:
    print(link[1],' 对应链接 ',link[0])