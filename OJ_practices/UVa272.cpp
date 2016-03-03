/*
* using flag to judge state ---'"' or '``'
*/
#include <cstdio>
int main()
{
    char c;
    int flag = 1;
    for(;(c = getchar())!= EOF;flag = !flag)
    {
//        if(c == '"')
//        {
//            printf("%s",flag?'``':'"');
//        }
//        else
//            printf("%c",c);
        if(c =='"')
            {
                if(flag)
                    printf("``");
                else
                    printf("\"");
            }
            else
                printf("%c",c);
    }
    return 0;
}
