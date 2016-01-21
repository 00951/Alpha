#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define MAX 12345
#define rep(i,a,b) for(long long int i=a;i<=b;i++)
#define rev(i,a,b) for(int i=a;i>=b;i--)

int main()
{
    LL s,d,x,ans;

    while(cin>>s>>d){

        LL sum=0;

        for(LL i=s;;i++){
            sum+=i;
            if(sum>=d){
                ans=i;
                break;
            }
        }

        cout << ans << endl;
    }

    return 0;
}

