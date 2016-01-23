#include <bits/stdc++.h>
#define LL  long long
#define PII pair<int,int>
#define VI  vector<int>
#define VVI vector<vi>
#define VLL vector<LL>
#define VS vector<string>
#define MSI map<string,int>
#define MII map<int,int>
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
#define RI(x) scanf("%d",&(x))
#define RII(x,y) scanf("%d%d",&(x),&(y))
#define RIII(x,y,z) scanf("%d%d%d",&(x),&(y),&(z))
#define DRI(x) LL (x); scanf("%lld",&x)
#define DRII(x,y) LL x,y; scanf("%lld%lld",&x,&y)
#define DRIII(x,y,z) LL x,y,z; scanf("%lld%lld%lld",&x,&y,&z)
#define CLR(a)  memset(a,0,sizeof(a))
#define SET(a)  memset(a,-1,sizeof(a))
#define prnt1(a)     cout<<a<<endl
#define prnt2(a,b)   cout<<a<<" "<<b<<endl
#define prnt3(a,b,c) cout<<a<<" "<<b<<" "<<c<<endl
#define csprnt       printf("Case %lld: ", ++cs);
#define R(fn) freopen(fn, "r", stdin);
#define W(fn) freopen(fn, "w", stdout);
#define hi puts("Hello World!")
#define ndl puts("")
using namespace std;

/*
#define INF (1<<30)-1
#define eps 1e-9
#define MOD 1000000000+7
#define MX 100000+10
const int MX = 100000+10;
const int MOD = 1000000000+7;
*/


const int INF = 1<<29;
const int eps = 1e-9;
const int MOD = 1e9+7;
const int MX = 1e5+10;


int main()
{
    LL a[MX];
    DRII(n,d);

    REP(i,n) RI(a[i]);

    int c=0;

    REP(i,n)
    {
        REP(j,n)
        {
            if(i!=j)
            {
                if(abs(a[i]-a[j])<=d)
                    c++;
            }
        }
    }

    prnt1(c);

    return 0;
}







