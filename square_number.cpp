// Output square numbers in [1,100000]
#include <iostream>

bool is_squareNumber(int i);

int main()
{
	long int i, x, y, z;
	for (i = 1; i<100000; i++)
	{
		if (is_squareNumber(i+100)&&(is_squareNumber(i+268)))
			printf("\n%ld\n", i);
	}
	/*std::cout << is_squareNumber(4)<<','<<is_squareNumber(5) << std::endl;*/
	getchar();
	return 0;
}

//测试
// std::cout << is_squareNumber(4)<<','<<is_squareNumber(5) << std::endl;
//输出
// output:   1,0
bool is_squareNumber(int i) {
	int temp = sqrt(i);
	return temp*temp == i;
}