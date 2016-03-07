# description : get 10 hot  questions from stackflow.com
# use         : python web crawler,using BeautifulSoup
# author      : mengguoru
# data        : 2016/02/22

import urllib.request
from bs4 import BeautifulSoup
import json

req = urllib.request.Request('http://stackoverflow.com/?tab=hot',headers={'User-Agent':'Mozilla/5.0'})
html = urllib.request.urlopen(req).read()
soup = BeautifulSoup(html, "html.parser")
question_div = soup.find_all('div',{'class':'summary'})

contents = []
counter = 0
for i in question_div:
    temp = {}
    temp['details'] = i.a['title']
    temp['question'] = i.a.string
    contents.append(temp)
    if counter>10:
        break
    else:
        counter = counter+1

with open('data.json','w') as f:
    json.dump(contents,f)