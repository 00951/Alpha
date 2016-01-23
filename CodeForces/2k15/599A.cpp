#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define MAX 123456789123456789
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define rev(i,a,b) for(int i=a;i>=b;i--)


int main()
{
    LL d1,d2,d3, mn=MAX, w;
    
    while(cin>>d1>>d2>>d3){

        w=d1+d2+d3;
        mn=min(w,mn);
        w=2*d1+2*d2;
        mn=min(w,mn);
        w=2*d1+2*d3;
        mn=min(w,mn);
        w=2*d2+2*d3;
        mn=min(w,mn);

        cout << mn << endl;
    }
    return 0;
}
