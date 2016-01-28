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
#define MaxAll(v) *max_element(v.begin(),v.end())
#define MinAll(v) *min_element(v.begin(),v.end())
#define READ(fn) freopen(fn, "r", stdin);
#define WRITE(fn) freopen(fn, "w", stdout);
#define __cin ios_base::sync_with_stdio(0); cin.tie(0)
#define hi puts("Hello World!")
#define pcs printf("Case %d:\n",++cs);
using namespace std;


/*0123456789
---*/ int cs  = 0;
const int INF = 1<<29;
const int eps = 1e-9;
const int MOD = 1e9+7;
const int MX  = 1e5+10;

LL gcd(int a, int b)
{
    return b==0 ? a : gcd(b,a%b);       //*** gcd.... mone raikkho :/
}

int lcm(int a, int b)
{
    return a/gcd(a,b) * b;      //*** avoid lcm overflow
}


int main()
{
    int n;
    while(~RI(n) and n)
    {
        //->find divisors of n

        int sq = sqrt(n);

        VI vi;
        vi.clear();

        REPP(i,1,sq)
        {
            if(n%i==0)   //**** find divisrs with push_back
            {
                vi.PB(i);
                if(i!=n/i) vi.PB(n/i);
            }
        }

        //->check within this divisors how many of them have different pairs of numbs which create a lcm.

        int cnt = 0;

        REP(i,SZ(vi)) //****
        {
            REPP(j,i,SZ(vi)-1)  //**** this loopinng condn is used for getting unique different pairs of numbers from a specific list. here's the list of divisors.
            {
                if(lcm(vi[i],vi[j])==n) cnt++;
            }
        }

        prii(n,cnt);
    }

    return 0;
}
