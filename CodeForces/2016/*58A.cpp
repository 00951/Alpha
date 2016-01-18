/* xor555 */



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

string tst="hello", str;

int main()
{
    cin>>str;
    int j = 0;

    REP(i, SZ(str))
    {
        if(tst[j] == str[i]) j++;   // agerta theke linear iteration and jete jete hello er prottekta char chck koro
                                    // hello er char pele hello string er porrer index e jao ebong chck koro
        if(j == 5)
        {
            puts("YES");
            return 0;
        }
    }

    puts("NO");
    return 0;
}



---------------------------------------------------//



#include <bits/stdc++.h>
#define scl(x) scanf("%lld",&x)
#define scl2(x,y) scanf("%lld %lld",&x,&y)
#define scl3(x,y,z) scanf("%lld %lld %lld",&x,&y,&z)
#define scl4(w,x,y,z) scanf("%lld %lld %lld %lld",&w,&x,&y,&z)
#define scl5(x,y,z,p,q) scanf("%lld %lld %lld %lld %lld",&x,&y,&z,&p,&q)
#define LL  long long
#define LLU unsigned long long
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define rev(i,a,b) for(int i=a;i>=b;i--)
#define CLR(a)     memset(a,0,sizeof(a))
#define SET(a)     memset(a,-1,sizeof(a))
#define prnt1(a)     cout<<a<<endl
#define prnt2(a,b)   cout<<a<<" "<<b<<endl
#define prnt3(a,b,c) cout<<a<<" "<<b<<" "<<c<<endl
#define csprnt       printf("Case %lld: ", ++cs);
#define READ(filename) freopen(filename, "r", stdin);
#define WRITE(filename) freopen(filename, "w", stdout);
#define hiii printf("Hello World!\n")
#define ndl printf("\n")
using namespace std;

#define MX 12345

int main()
{
    LL n,x,ind,f;
    string s,an;

    while(cin>>s)
    {

        f=0,ind=0,an="";

        string tst="hello";

        if(s==tst) puts("YES");
        else
        {
            rep(i,0,tst.size()-1)
            {
                rep(j,0,s.size()-1)
                {
                    if(tst[i]==s[j])
                    {
                        if(j>=ind)
                        {
                            an+=s[j];
                            s[j]='%';
                            ind=j;
                            break;
                        }
                    }
                }
            }
           // cout << an << " " << tst << endl;
            if(an==tst) puts("YES");
            else puts("NO");
        }
    }

    return 0;
}
