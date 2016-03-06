/*	模拟排队点餐，食物做好（用随机模拟厨师做菜）后，根据生成的类型按照点餐顺序依次分配
*	特点	:相当于包含不同类型的“队列”
*	author	:mengguoru
*	date	:2016/03/06
*/

#include <cstdio>
#include <vector>
#include <string>
#include <time.h>
struct customer {
	int num;
	int foodType;
};

int main() {
	//0-noodle rice-1 soup-2
	/*enum food { noodle, rice, soup };*/
	
	std::vector<customer> Orders;
	srand((int)time(0));
	for (int i = 0; i < 10; ++i)
	{
		Orders.push_back(customer());
		Orders[i].num = i;
		Orders[i].foodType = rand()%3;
	}

	for (int i = 0; i<Orders.size(); ++i)
	{
		printf("Mr %d order  food %d\n", Orders[i].num,Orders[i].foodType);
	}

	printf("======\n");
	for (; Orders.size() > 0;) {
		int comingFood = rand() % 3;
		for (int i = 0; i < Orders.size(); ++i)
		{
			if (Orders[i].foodType == comingFood)
			{
				printf("Mr %d get his order :food %d\n", Orders[i].num, Orders[i].foodType);
				Orders.erase(Orders.begin() + i);
			}
		}
	}
	return 0;
}
