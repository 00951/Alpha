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
/*#define INF (1<<30)-1
#define eps 1e-9
#define MOD 1000000000+7*/
//#define MX 100000+10
const int INF = 1<<29;
const int eps = 1e-9;
const int MOD = 1000000000+7;
const int MX = 100000+10;

// simple
// there're names and scores . you gotta find the person for whom max score stored for.
// print his name who scores the mst before anyone else

string s[MX];   //declare string arr for name
int a[MX];      //declare int arr for scores

MSI score;      //map string integer

int main(){

    int mx = -1;

    DRI(n);

    REP(i,n){
        cin >> s[i] >> a[i];       // read name and score in arr

        score[ s[i] ] += a[i];   // inside score map, gorur namer index e gorur score bar bar save kortese

        mx = max(mx,score[ s[i] ]); //s[i] ei string er index er mangulor moddho theke max ber kora hocche
    }

    score.clear();  // er maddhome amra mx pelam, aar er pr looping kore abr jkhni je sobar age mx pabe sei hobe winner

   REP(i,n){
        score[ s[i] ] += a[i];      //abr agr moto looping suru until we find mx

        if (score[ s[i] ] == mx){
            cout << s[i] << endl;
            return 0;
        }
    }
    return 0;
}



/////////////// wa on test 10

int main()
{
    int i,j,test,Case=1,score,maxv,n;
    string name,ans;
    msi mp;

    while(scanf("%d",&n)==1)
    {
        maxv=-INF;
        mp.clear();
        REP(i,n)            //agertate age mx berkore pore loop calano hoise mx na paoa prjnto
        {
            cin>>name>>score;
            mp[name]+=score;
            if(mp[name]>maxv)
            {
                maxv=mp[name];
                ans=name;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}




///////////////////// AC



int main()
{
    int i,j,test,Case=1,val,maxv,n;
    string name,ans;
    msi mp,mp1;
    vs store;
    vi score;

    while(scanf("%d",&n)==1)
    {
        store.clear();
        score.clear();
        mp.clear();
        REP(i,n)
        {
            cin>>name>>val;
            mp[name]+=val;
            store.pb(name);
            score.pb(val);
        }
        maxv=-INF;  // yo.. coz. inp can be -1000 to 10000
        REP(i,n)
            maxv=max(maxv,mp[store[i]]);
        mp1.clear();
        REP(i,n)
        {
            mp1[store[i]]+=score[i];
            if(mp1[store[i]]>=maxv && mp[store[i]]==maxv)       // how do i know that??????
            {
                cout<<store[i]<<endl;
                break;
            }
        }
    }
    return 0;
}
