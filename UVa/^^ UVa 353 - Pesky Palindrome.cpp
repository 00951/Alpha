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
#define REP(i,n) for(int i=0;i<n;i++)
#define REPP(i,a,b) for(int i=a;i<=b;i++)
#define REV(i,b,a) for(int i=b;i>=a;i--)
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
#define pcs printf("Case %d: ",++cs);
using namespace std;


/*0123456789
---*/ int cs  = 0;
const int INF = 1<<29;
const int eps = 1e-9;
const int MOD = 1e9+7;
const int MX  = 1e5+10;

int chkpal(string s)
{
    string q = s; reverse(ALL(s));
    if(q==s) return 1;
    else return 0;
}

int main()
{
    string s,tst;

    while(cin>>s)
    {
        int c = 0;

        MSI mp;
        mp.clear();

        REP(i,SZ(s))    //start point
        {
            REPP(j,1,SZ(s))  // iter-> 1 to <=len --- bepti = wrd er min char sngkha theke mx chrct sngkha prjnto
            {
                tst = s.substr(i,j);    // i srt point, j holo of which size's substring do we need

                if(mp[tst]==0)
                {
                    mp[tst]++;
                    if(chkpal(tst)) c++;
                }
            }
        }

        cout<<"The string '"<<s<<"' contains "<<c<<" palindromes."<<endl;
    }

    return 0;
}

