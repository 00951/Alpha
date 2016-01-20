
#include <stdio.h>

int main()
{
    long long n,c,x,y;

    while(scanf("%I64d", &n)==1)
    {
        c=0;

        while(n--){
            scanf("%I64d %I64d", &x, &y);
            if(y-x>=2)
                c++;
        }

        printf("%I64d\n", c);
    }
    return 0;
}
