#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define MAX 12345
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define rev(i,a,b) for(int i=a;i>=b;i--)

LL pown(LL b, LL p){
    LL ans=1;
    rep(i,1,p){
        ans*=b;
    }
    return ans;
}

int main()
{

    LL dig,bs;
    LL x[MAX], y[MAX];

    cin>>dig>>bs;
        LL i=0;
    while(dig--){
        cin>>x[i++];
    }
    LL it=0, xsum=0;
    rev(k,i-1,0){
        xsum+=x[k]*pown(bs,it++);
    }

    cin >> dig >> bs;
    i=0;
    while(dig--){
        cin>>y[i++];
    }

    it=0; LL ysum=0;
    rev(k,i-1,0){
        ysum+=y[k]*pown(bs,it++);
    }

    if(xsum==ysum)
        printf("=\n");
    else if(xsum>ysum)
        printf(">\n");
    else
        printf("<\n");

    return 0;
}
