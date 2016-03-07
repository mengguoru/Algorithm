//@ practics : use Union to change "0x12345678" to "56781234"
//@ note     : another way is use pointer directly

#include <iostream>

using namespace std;
union test
{
	int i;
	/*char s[4];*/
	short t[2];
};
int main() {
	union test temp = { 0x12345678 };
	// short =2 bytes
	short *p = (short *)&temp;
	//swop
	short temp2 = p[1];
	p[1] = p[0];
	p[0] = temp2;

	printf("%x", temp.i); //output：56781234　
	getchar();
	return 0;
}