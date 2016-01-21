/* xor555 */

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
#define RI(x) scanf("%lld",&(x))
#define RII(x,y) scanf("%lld%lld",&(x),&(y))
#define RIII(x,y,z) scanf("%lld%lld%lld",&(x),&(y),&(z))
#define DRI(x) LL (x); scanf("%lld",&x)
#define DRII(x,y) LL x,y; scanf("%lld%lld",&x,&y)
#define DRIII(x,y,z) LL x,y,z; scanf("%lld%lld%lld",&x,&y,&z)
#define CLR(a)  memset(a,0,sizeof(a))
#define SET(a)  memset(a,-1,sizeof(a))
#define pi(a)     cout<<a<<endl
#define pii(a,b)   cout<<a<<" "<<b<<endl
#define piii(a,b,c) cout<<a<<" "<<b<<" "<<c<<endl
#define piii(a,b,c,d) cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl
#define R(fn) freopen(fn, "r", stdin);
#define W(fn) freopen(fn, "w", stdout);
#define ndl puts("")
#define hi puts("Hello World!")
#define pcs printf("Case %d: ",++cs);
using namespace std;


/*0123456789
---*/ int cs  = 0;
const int INF = 1<<29;
const int eps = 1e-9;
const int MOD = 1e9+7;
const int MX  = 1e5+10;

int main()
{
    // find the min move for the bishop to go from one palce to another
    // grid er diagonal property

    // 1 move if - x er change == y er change
    // 2 moves if -
            // x er *rate of change == y er *rate of change
            // mane 2 moves e x er diff odd hole y er diff odd hobe
            // or 2 moves e x diff even hole y er diff o even hote hobe
    DRI(T);
    while(T--)
    {
        DRII(x,y);
        DRII(x1,y1);

        int xdif = abs(x-x1);
        int ydif = abs(y-y1);

        pcs;

        if(xdif==ydif) puts("1");

        else if(xdif%2 and ydif%2) puts("2");
        else if(xdif%2==0 and ydif%2==0) puts("2");

        else puts("impossible");
    }
    return 0;
}








