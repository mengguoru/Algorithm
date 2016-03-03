/*  description : binary method to generate subset
*   author      : mengguoru
*   date        : 2016/02/27
*/
#include <iostream>

template <typename T>
void print_subset(const T arr[], int n) {
	for (int i = 0; i<(1 << n); ++i) {
		for (int j = 0; j<n; ++j)
			if (i >> j & 1)std::cout<<arr[j]<<" ";// 0x01(binary number of 1) to judge binary number(j)'s position of i is 1 or 0
		std::cout<<"\n";
	}
}

int main() {
	int a[] = { 1,2,3 }; //array sorted
	print_subset(a, sizeof(a)/sizeof(int));

	double b[] = { 0.2,0.6,1.2,5.5 };
	print_subset(b, sizeof(b) / sizeof(double));
	return 0;
}
