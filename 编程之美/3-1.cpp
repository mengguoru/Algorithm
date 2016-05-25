/*
author : mengguoru
date   : 2016/5/25
*/

#include <iostream>
#include <string>
using namespace std;
/**
给定2个字符串s1，s2，判定s2能否让s1通过循环移位（rotate）得到的字符串包含，如果可以返回true，否则返回false
*/
bool can_contain_by_rotate(const string s1,const string s2)
{
	string s = s1+s1;
	/*cout << s1 << endl;
	cout << s << endl;*/
	if (s.find(s2)!=-1)
		return true;
	else
		return false;
}
/**
给定2个字符串s1，s2，判定s2能否让s1通过循环移位（rotate）得到的字符串包含，如果可以返回true，否则返回false

思路：我的思路是可以不复制2倍s1的字符串，当找不到时，从s1中的s1.length() - s2.length()的位置，将s1视为循环链表，循环地查找s2.length()次
*/
bool my_can_contain_by_rotate(const string s1, const string s2)
{
	if (s1.find(s2) != -1)
		return true;
	else
	{
		for (int i = s1.length() - s2.length(); i < s1.length(); ++i)
		{
			/*cout << s1.substr(i) << endl;
			cout << s2.substr(0, s2.length() - (s1.length() - i)) << endl;*/
			if (s2 == s1.substr(i) + s1.substr(0, s2.length() - (s1.length() - i)))
				return true;
		}
		return false;
	}
}
int main() {
	/*cout << can_contain_by_rotate("AABCD", "CDAA") << endl;
	cout << can_contain_by_rotate("ABCD", "ACBD") << endl;*/
	cout << my_can_contain_by_rotate("AABCD", "CDAA") << endl;
	cout << my_can_contain_by_rotate("ABCD", "ACBD") << endl;
	getchar();
	return 0;
}