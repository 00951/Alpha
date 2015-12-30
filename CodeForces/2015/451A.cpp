#include <bits/stdc++.h>
using namespace std;

#define LL long long
#define rep(i,a,b) for(long long i=a; i<=b; i++)
#define rev(i,a,b) for(long long i=b; i>=a; i--)

int main()
{
    int n,m;
    while(cin>>n>>m){
        LL mn=min(n,m);
        if(mn%2)
            puts("Akshat");
        else
            puts("Malvika");
    }
    return 0;
}
