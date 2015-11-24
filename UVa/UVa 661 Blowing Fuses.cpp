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
    LL n,m,c,f,j,x,mx,cs=0,sum,ans,ca[MAX];

    while(cin>>n>>m>>c){

        if(m==0 && n==0 && c==0) break;

        memset(a,0,sizeof a);
        f=0,sum=0,ans=0,mx=-1;

        rep(i,1,n)
            cin>>ca[i];

        rep(i,1,m){

            cin>>x;
            a[x]++;

            if(a[x]==1){
                sum+=ca[x];
                if(sum>c)  f=1;
            }

            mx=max(sum,mx);

            if(a[x]==2){
                sum-=ca[x];
                a[x]=0;
            }
        }

        printf("Sequence %lld\n", ++cs);

        if(f==1)
           printf("Fuse was blown.\n");
        else if(f==0)
            printf("Fuse was not blown.\nMaximal power consumption was %lld amperes.\n", mx);

        cout << endl;
    }

    return 0;
}
