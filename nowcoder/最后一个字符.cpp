/*
题目描述

正在挑战一个CrackMe的你，把需要填写的前面几位密码都正确猜出了，可是这最后一位密码，好像藏得有点深。CrackMe的作者还挑衅般的在里面藏了个.tar.gz文件，解压缩出来，里面写道
你要的最后一个字符就在下面这个字符串里，这个字符是下面整个字符串中第一个只出现一次的字符。（比如，串是abaccdeff，那么正确字符就是b了） 然而下面给出来的字符串好像太长太长了，单靠人力完全无法找出来。
于是，你需要写一个程序代劳了。输入文件体积较大，请使用一些快速的输入输出手段，不推荐使用cin/cout，对Java并不推荐使用Scanner直接读写。
输入描述:
第一行，一个正整数T(T≤20)  ，表示输入数据组数。
之后T行，每行一个字符串S。( 1≤S  的长度≤1000000   ，保证字符串中出现的字符的ASCII码在[0x21,0x7F)范围内，即均为可显示的非空白符，同时保证一定有解)


输出描述:
一共T 行，每行一个字符C ，表示所给的相应字符串中第一个只出现一次的字符。

输入例子:
2
abaccdeff
testonline

输出例子:
b
s
*/
/*
思路：创建结构体，保存当前用两个数组，一个数组每次遍历到一个字母时就把相应的字符数组对应...
author : mengguoru
date   : 2016/8/5
*/
#include <cstdio>
#include <vector>
#include <cstring>
#include <iostream>
using namespace std;
char str[1000000 + 1];
struct MyCounter
{
	int n;//字符对应的编号
	//bool hasShow;
	int counter;
	int first_showPosition;
};

int main()
{
	int T;
	//scanf_s("%d", &T);
	cin >> T;
	vector<MyCounter> charArr(94);
	for (int i = 0; i < 94; ++i) {
		charArr[i].n = i + 0x21;
		charArr[i].counter = 0;
		charArr[i].first_showPosition = -1;
	}

	while (T-- > 0)
	{
		//scanf_s("%s", str);
		cin >> str;
		int len = strlen(str);
		for (int i = 0; i < len; ++i)
		{
			charArr[str[i] - 0x21].counter++;
			if (-1 == charArr[str[i] - 0x21].first_showPosition)
				charArr[str[i] - 0x21].first_showPosition = i;
		}
		int minIndex = -1;//min index meet condiction
		for (int i = 1; i < 94; ++i)
		{
			if (1 == charArr[i].counter) {
				if (-1 == minIndex)
					minIndex = i;
				else {
					if (charArr[i].first_showPosition < charArr[minIndex].first_showPosition)
						minIndex = i;
				}
			}
		}
		printf("%c\n", charArr[minIndex].n);
	}

	return 0;
}