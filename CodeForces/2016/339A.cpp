
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


const int INF = 1<<29;
const int eps = 1e-9;
const int MOD = 1e9+7;
const int MX = 1e5+10;


int main()
{
    string s;
    int a[MX];

    while(cin>>s)
    {

        int k=0,f=0;

        REP(i,SZ(s))
        {
            if(s[i]=='+') f=1;
        }
        if(f)
        {

            REP(i,SZ(s))
            {
                if(i%2==0) a[k++]=s[i]-48;
            }

            sort(a,a+k);

            REP(i,k)
            {
                if(!i)
                    printf("%d", a[i]);
                else
                    printf("+%d", a[i]);
            }

        }
        else

            cout << s;

        ndl;

    }

    return 0;
}







