#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define MAX 12345
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define rev(i,a,b) for(int i=a;i>=b;i--)

int main()
{
    ll n,f,t,flg;

    while(cin>>n){

        ll temp=n;
        ll c=0, flg=0;

        for(;;){
            f=temp%10;
            if(f==4 || f==7)
                c++;
            temp/=10;

            if(temp<=0)
               break;
        }


        if(c==0)
        {
            cout << "NO" << endl;
            continue;
        }

        ll tmp=c;
        
        while(tmp>0){
           t=tmp%10;
           if(t==4 || t==7){
                flg=0;
           }
           else {
                flg=1;
                break;
           }
           tmp/=10;
        }

        if(flg==0)
            cout << "YES" << endl;
        else if(flg==1)
            cout << "NO" << endl;
    }

    return 0;
}
