#include <bits/stdc++.h>
#define LL  long long
#define PII pair<int,int>
#define VI  vector<int>
#define VVI vector<vi>
#define VS vector<string>
#define MSI map<string,int>
#define MII map<int,int>
#define SZ(x) ((int)(x).size())
#define ALL(x) (x).begin(),(x).end()
#define REP(i,n) for(int i=0;i<n;++i)
#define REPP(i,a,b) for(int i=a;i<b;++i)
#define REV(i,b,a) for(int i=b;i>=a;--i)
#define MP make_pair
#define PB push_back
#define RS(x) scanf("%s",(x))
#define RI(x) scanf("%d",&(x))
#define RII(x,y) scanf("%d%d",&(x),&(y))
#define RIII(x,y,z) scanf("%d%d%d",&(x),&(y),&(z))
#define CLR(a)  memset(a,0,sizeof(a))
#define SET(a)  memset(a,-1,sizeof(a))
#define DRI(x) LL x; scanf("%lld",&x)
#define DRII(x,y) LL x,y; scanf("%lld%lld",&x,&y)
#define DRIII(x,y,z) LL x,y,z; scanf("%lld%lld%lld",&x,&y,&z)
#define prnt1(a)     cout<<a<<endl
#define prnt2(a,b)   cout<<a<<" "<<b<<endl
#define prnt3(a,b,c) cout<<a<<" "<<b<<" "<<c<<endl
#define csprnt       printf("Case %lld: ", ++cs);
#define R(fn) freopen(fn, "r", stdin);
#define W(fn) freopen(fn, "w", stdout);
#define hi puts("Hello World!")
#define ndl puts("")
using namespace std;

const int MOD = 1e9+7;
const int MX = 1e5+10;

main()
{
    DRIII(m,n,a);
    LL x = ceil(double(m)/a);
    LL y = ceil(double(n)/a);       //dont use like this.. cout << ceil(double(m)/a) * ceil(double(n)/a) << endl;
    cout << x*y; ndl;               // returns LL value with e format
}


/* xor555 */
