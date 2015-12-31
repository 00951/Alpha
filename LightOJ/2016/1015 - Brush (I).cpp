#include <bits/stdc++.h>
using namespace std;

#define LL long long

int main()
{
    LL T,n,sum,x,cs=0;
    cin>>T;
    while(T--){
        sum=0;
        cin>>n;
        while(n--){
            cin>>x;
             if(x>0)
                sum+=x;
        }
        printf("Case %lld: %lld\n", ++cs, sum);
    }
    return 0;
}
