#include <iostream>
using namespace std;

/*
完整地申请内存
*/
void GetMemory(char** p,int n) {
	*p = (char*)malloc(n);
	if (NULL == p)
		printf("申请内存失败");
}

int main() {
	char* str = NULL;
	GetMemory(&str, 25);
	strcpy(str, "Hello world");
	cout << str << endl;
	
	free(str);
	str = NULL;
	return 0;
}