#include <bits/stdc++.h>
using namespace std;

#define LL long long
#define rep(i,a,b) for(long long i=a; i<=b; i++)
#define rev(i,a,b) for(long long i=b; i>=a; i--)

int main()
{
    int type,dlr,x,y,mx=-1;
    while(cin>>type>>dlr){
            mx=-1;
        rep(i,1,type){
            cin>>x>>y;
            if(dlr>x || (dlr==x&&y==0)){
                LL uu=100-y;
                if(uu==100) uu=0;
                if(uu>mx){
                    mx=uu;
                }
            }
        }
        cout << mx << endl;
    }
    return 0;
}

