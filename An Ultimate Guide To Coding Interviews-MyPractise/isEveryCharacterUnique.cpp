/*
author	: mengguoru
date	: 2016/04/26
*/
#include <set>
#include <string>
#include <assert.h>
using namespace std;
bool isEveryCharacterUnique(const string str) {
	/**
	judge if a string's every character is unique
	*/
	set<int> set1;

	for (char c : str) {
		if (set1.find(c) != set1.end())
			return false;
		else
			set1.insert(c);
	}
	return true;
}
int main() {
	assert(isEveryCharacterUnique("abcd") == true);
	assert(isEveryCharacterUnique("abcda") == false);
	getchar();
	return 0;
}