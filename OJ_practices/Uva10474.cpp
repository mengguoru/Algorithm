#include <cstdio>
#include <algorithm>
int main(){
    int n,q,a[10],x;
    int case1 = 0;
    while(scanf("%d %d",&n,&q)==2 &&n&&q)
    {
        for(int i = 0;i<n;++i)
            scanf("%d",&a[i]);
        std::sort(a,a+n);

//        for(int i = 0;i<n;++i)
//            printf("%d\t",a[i]);

        printf("CASE# %d:\n",++case1);
        while(q--)
        {
            scanf("%d",&x);
            int pos = std::lower_bound(a,a+n,x)-a;
            if(pos != n)
                printf("%d found at %d\n",x,pos+1);
            else
                printf("%d not found\n",x);
        }
    }
}
