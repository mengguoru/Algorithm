/*	greedy algorithm to solve Knap sack problem
*
*	author	:mengguoru
*	date	:2016/02/29
*/

#include <iostream>
/*  @note  :before input--weight[] should sorted by value in descending order
*   @param : solution--will be save solution later!
*   @result: change the solution[]
*/
template <typename T1>
void Knap_sack(T1 the_max,T1 weight[], T1 solution[],int n) {
	//    std::memset(solution,0,sizeof(solution)/sizeof(T1));
	T1 temp = the_max;

	for (int i = 0; i<n && temp>0; ++i)
	{
		if (weight[i] <= temp)
		{
			solution[i] = 1;
			temp -= weight[i];
		}
		else
		{
			solution[i] = temp / weight[i];
			temp = 0;
		}
	}
}

int main() {
	double w[] = { 10,20,30,100 }, solution[4];
	float v[] = { 100,30,20,10 };
	int len = sizeof(w) / sizeof(double);
	for (int i = 0; i<len; ++i)
		solution[i] = 0;
	Knap_sack(70.0, w, solution,len);
	for (int i = 0; i<len; ++i)
		std::cout << "load " << i << "'s weight:" << solution[i] << std::endl;

	return 0;
}
