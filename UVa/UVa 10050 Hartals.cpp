/*
* GM Arif Shuvo
* CSE, Jahangirnagar University
* id: aarif_shuvo(uva/codeforces/codechef/hackerrank/spoj/topcoder)
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define MAX 12345
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define rev(i,a,b) for(int i=a;i>=b;i--)

LL a[MAX];

int main()
{
    LL d,p,T,h;
    cin>>T;
    while(T--){
        memset(a,0,sizeof a);
        LL sum=0;
        cin>>d>>p;
        rep(i,1,p){
            cin>>h;
            for(LL j=h;j<=d;j+=h){
                if(a[j]==0)
                    a[j]++;
                if((j%7==0) || (j+1)%7==0)
                    a[j]--;
            }
        }
        LL c=0;
        rep(k,1,d){
            if(a[k]!=0)
                c++;
        }
        cout << c << endl;
    }
    return 0;
}
