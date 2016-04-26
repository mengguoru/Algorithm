/*
author	: mengguoru
date	: 2016/04/26
*/
#include <map>
#include <string>
#include <assert.h>
#include <unordered_map>
using namespace std;
bool isPermutation(const string str1,const string str2) {
	/*
	compare if 2 string is permutable
	*/
	if (str1.length() != str2.length())
		return false;
	unordered_map<char, int> hashMap1;
	unordered_map<char, int> hashMap2;
	
	for (int i = 0; i < str1.length(); ++i) {
		++hashMap1[str1[i]];
		++hashMap2[str2[i]];
	}
	if (hashMap1.size() != hashMap2.size())
		return false;
	for (unordered_map<char, int>::iterator it = hashMap1.begin(); it != hashMap1.end();++it) {
		if (it->second != hashMap2[it->first])
			return false;
	}
	return true;
}
int main() {
	assert(isPermutation("abcd", "abdc"));
	assert(isPermutation("abcda", "abcd"));
	getchar();
	return 0;
}