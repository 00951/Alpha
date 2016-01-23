/*

"To improve is to change; to be perfect is to change often."

- Winston Churchill

*/

#include <bits/stdc++.h>
#define LL  long long
#define PII pair<int,int>
#define VI  vector<int>
#define VVI vector<vi>
#define VLL vector<LL>
#define VS vector<string>
#define MII map<int,int>
#define MSI map<string,int>
#define MSS map<string,string>
#define PII pair<int,int>
#define PLL pair<LL,LL>
#define VPI vector<PII>
#define SZ(x) ((int)(x).size())
#define ALL(x) (x).begin(),(x).end()
#define REP(i,n) for(int i=0;i<n;++i)
#define REPP(i,a,b) for(int i=a;i<=b;++i)
#define REV(i,b,a) for(int i=b;i>=a;--i)
#define MP make_pair
#define PB push_back
#define ndl puts("");
#define RI(x) scanf("%lld",&(x))
#define RII(x,y) scanf("%lld%lld",&(x),&(y))
#define RIII(x,y,z) scanf("%lld%lld%lld",&(x),&(y),&(z))
#define DRI(x) LL (x); scanf("%lld",&x)
#define DRII(x,y) LL x,y; scanf("%lld%lld",&x,&y)
#define DRIII(x,y,z) LL x,y,z; scanf("%lld%lld%lld",&x,&y,&z)
#define CLR(a)  memset(a,0,sizeof(a))
#define SET(a)  memset(a,-1,sizeof(a))
#define pri(a)     cout<<a<<endl
#define prii(a,b)   cout<<a<<" "<<b<<endl
#define priii(a,b,c) cout<<a<<" "<<b<<" "<<c<<endl
#define priiii(a,b,c,d) cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl
#define READ(fn) freopen(fn, "r", stdin);
#define WRITE(fn) freopen(fn, "w", stdout);
#define __cin ios_base::sync_with_stdio(0); cin.tie(0)
#define hi puts("Hello World!")
#define pcs printf("Case %d: ",++cs);
using namespace std;


/*0123456789
---*/ int cs  = 0;
const int INF = 1<<29;
const int eps = 1e-9;
const int MOD = 1e9+7;
const int MX  = 1e5+10;
/*
const int con[11] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};

int main()
{
    __cin;
    int a,b,sm=0;

    cin>>a>>b;

    REPP(i,a,b)
    {
        LL tmp=i;
        while(tmp){
            sm+=con[tmp%10];
            tmp/=10;
        }
    }

    pri(sm);

    return 0;
}


*/

#include<stdio.h>
int main()
{
printf("May 29, 2013 Wednesday\n");
return 0;
}


int ans[MX];

const int con[] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};

void cumu()
{
    ans[0]=0;

    REPP(i,1,MX)
    {
        int k = i, sm = 0;

        while(k){
            sm+=con[k%10];
            k/=10;
        }

        ans[i]=ans[i-1]+sm;  // * cumulative sum

       // pri(ans[i]);

    }
}

int main()
{
    cumu();

    DRII(a,b);

    pri(ans[b]-ans[a-1]);

    return 0;
}



