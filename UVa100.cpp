#include <cstdio>
#include <algorithm>
int main(){
    int i,j;

    while(scanf("%d %d",&i,&j) != 2){
        int max_cycle_length = 0;

        if(i>j)std::swap(i,j);

        for(int temp = i;temp<j;++temp){
            int temp_cycle_length = 1;
            for(int n =temp;n != 1;)
            {
                if(n%2==1)
                    n = 3*n+1;
                else
                    n /=2;
                temp_cycle_length++;
            }
            if(temp_cycle_length > max_cycle_length)
                max_cycle_length = temp_cycle_length;
        }

        printf("%d %d %d\n",i,j,max_cycle_length);
    }
    return 0;
}
