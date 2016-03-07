// get summary from web
// Python version:Python 3.5

import urllib.request
from bs4 import BeautifulSoup

f = urllib.request.urlopen('http://baike.baidu.com/view/21087.htm')
str = f.read()
soup = BeautifulSoup(str, "html.parser")

title_node=soup.find('dd',class_="lemmaWgt-lemmaTitle-title").find("h1")
title = title_node.get_text()

summary_node = soup.find('div',class_="lemma-summary")
summary = summary_node.get_text()

print(title,summary)