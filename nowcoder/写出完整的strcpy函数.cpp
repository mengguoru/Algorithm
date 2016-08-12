#include <iostream>
#include <cassert>
using namespace std;

/*
完整地开辟内存
*/
char* MyStrcpy(char* des,const char* src) {
	assert(des != NULL &&src != NULL);
	char* address = des;
	while ((*des++ = *src++) != '\0');
	return address;
}

int main() {
	char str[] = "Hello World";
	char str1[25];
	MyStrcpy(str1, str);
	cout << str << endl << str1;
	return 0;
}