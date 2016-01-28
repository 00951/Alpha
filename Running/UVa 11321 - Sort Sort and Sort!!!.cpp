// sort, sort and sort!!!

#include <bits/stdc++.h>
#define LL  long long
#define VI  vector<int>
#define VVI vector<vi>
#define VLL vector<LL>
#define VS vector<string>
#define MSI map<string,int>
#define MII map<int,int>
#define PII pair<int,int >
#define PLL pair<LL,LL>
#define VPI vector<PII>
#define SZ(x) ((int)(x).size())
#define ALL(x) (x).begin(),(x).end()
#define REP(i,n) for(int i=0;i<n;++i)
#define REPP(i,a,b) for(int i=a;i<b;++i)
#define REV(i,b,a) for(int i=b;i>=a;--i)
#define MP make_pair
#define PB push_back
#define RS(x) scanf("%s",(x))
#define RI(x) scanf("%d",&(x))
#define RII(x,y) scanf("d",&(x),&(y))
#define RIII(x,y,z) scanf("d%d",&(x),&(y),&(z))
#define CLR(a)  memset(a,0,sizeof(a))
#define SET(a)  memset(a,-1,sizeof(a))
#define DRI(x) LL x; scanf("%lld",&x)
#define DRII(x,y) LL x,y; scanf("lld",&x,&y)
#define DRIII(x,y,z) LL x,y,z; scanf("lld%lld",&x,&y,&z)
#define pri(a)     cout<<a<<endl
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
const int MOD = 1000000000+7;
const int MX = 100000+10;



int  modulo;
bool cmp(int a, int b)
{
    if(a%modulo != b%modulo)
       return a%modulo < b%modulo;
    else
    {
        if(abs(a)%2 == 0 && abs(b)%2 == 0)
          return a<b;
        else if(abs(a)%2 != 0 && abs(b)%2 != 0)
                return a>b;
        else if(abs(a)%2 != 0)
                return true;
        else
            return false;
    }
}

int main()
{
int number, data;
while(scanf("%d %d", &number, &modulo))
{
    printf("%d %d\n", number, modulo);
    if(!number && !modulo)
       break;
    vector<int> vec;
    for(int x=1; x<=number; x++)
    {
        scanf("%d", &data);
        vec.push_back(data);
    }
    sort(vec.begin(),vec.end(),cmp);
    for(int y=0; y<vec.size(); y++)
        printf("%d\n", vec[y]);
}
return 0;
}


