http://codeforces.com/problemset/problem/588/A

#include <stdio.h>

int main()
{
    long long n,max,red,m[100005],p[100005],money,j,temp,i;

    while(scanf("%I64d", &n)==1){
            money=0;
            max=1000000;
        for(i=1; i<=n; i++){
            scanf("%I64d %I64d", &m[i], &p[i]);
        }

        for(i=1; i<=n; i++){

            if(p[i]<max){
                red=p[i];
            }

            money+=m[i]*red;

            max=red;
        }

        printf("%I64d\n", money);
    }
    return 0;
}
